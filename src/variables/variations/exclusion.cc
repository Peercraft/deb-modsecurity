/*
 * ModSecurity, http://www.modsecurity.org/
 * Copyright (c) 2015 Trustwave Holdings, Inc. (http://www.trustwave.com/)
 *
 * You may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * If any of the files related to licensing are missing or if you have any
 * other questions related to licensing please contact Trustwave Holdings, Inc.
 * directly using the email address security@modsecurity.org.
 *
 */

#include "src/variables/variations/exclusion.h"

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <utility>

#include "modsecurity/transaction.h"


namespace modsecurity {
namespace Variables {
namespace Variations {


void Exclusion::evaluateInternal(Transaction *transaction,
    std::vector<const collection::Variable *> *l) {
    transaction->m_collections.resolveMultiMatches(m_name, l);
}


}  // namespace Variations
}  // namespace Variables
}  // namespace modsecurity
