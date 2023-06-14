#include "astarte_bson.h"
//#include "astarte_bson_types.h"
//#include "astarte_credentials.h"
//#include "astarte_device.h"
#define CATCH_CONFIG_MAIN
#include <cstdio>
#include "catch.hpp"


TEST_CASE("bson key")
{
    uint8_t bson_value_type;
    char *data = NULL;
    const void *bson_value = astarte_bson_key_lookup("v", data, &bson_value_type);
    CHECK(data == NULL);
}
