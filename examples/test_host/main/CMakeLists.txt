idf_component_register(SRCS "log_test.cpp"
        "../../../astarte_bson.c"
        INCLUDE_DIRS
        "../../../include"
        $ENV{IDF_PATH}/tools/catch
        REQUIRES unity)

