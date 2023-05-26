#include <Arduino.h>
#include <FileManager.h>

#define TEST_STR_PATH "test.txt"
#define TEST_STR "Test Content"

void setup() {
    SPIFFSFileManager spiffy;
    spiffy.save_file(TEST_STR_PATH, (const unsigned char *) TEST_STR);
}

void loop() {}