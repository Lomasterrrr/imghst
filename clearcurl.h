#pragma once
#include "curl/curl.h"

size_t write_data(void* ptr, size_t size, size_t nmemb, FILE* stream);
size_t clear_data(void* buffer, size_t size, size_t nmemb, void* userp);
