#ifndef PACKAGE_H
#define PACKAGE_H

/**
 * Struct which represents the package of transmitted data
 */
typedef struct {
	uint8_t address;		// Adress of the device
	uint8_t command;		// Command to the device
	uint8_t size;			// Size of the package
	uint16_t hash;			// Hash of the package (CRC16)
	uint8_t* data;			// Additional data needed by the devices
} Package;

#endif /*PACKAGE_H*/