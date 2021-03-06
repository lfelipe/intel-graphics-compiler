#include <cstring>
#include "ged_base.h"
#include "ged_validation_utils.h"

using std::memcmp;


// trb: workaround: #if GED_VALIDATION_API

bool ged_ins_field_mapping_fragment_t::operator<(const ged_ins_field_mapping_fragment_t& rhs) const
{
    GEDASSERT(_from._lowBit != rhs._from._lowBit);
    return (_from._lowBit < rhs._from._lowBit);
}

bool ged_ins_field_mapping_fragment_t::operator==(const ged_ins_field_mapping_fragment_t& rhs) const
{
    return (0 == memcmp(this, &rhs, sizeof(ged_ins_field_mapping_fragment_t)));
}

// trb: workaround: #endif
