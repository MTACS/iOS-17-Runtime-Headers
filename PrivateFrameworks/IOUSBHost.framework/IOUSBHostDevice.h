
@interface IOUSBHostDevice : IOUSBHostObject {
    unsigned long long  _lastKnownConfiguration;
}

@property (readonly) const struct IOUSBConfigurationDescriptor { unsigned char x1; unsigned char x2; unsigned short x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; }*configurationDescriptor;
@property unsigned long long lastKnownConfiguration;

+ (struct __CFDictionary { }*)createMatchingDictionaryWithVendorID:(id)arg1 productID:(id)arg2 bcdDevice:(id)arg3 deviceClass:(id)arg4 deviceSubclass:(id)arg5 deviceProtocol:(id)arg6 speed:(id)arg7 productIDArray:(id)arg8;

- (bool)allocateDownstreamBusCurrentWithWakeUnits:(unsigned long long*)arg1 sleepUnits:(unsigned long long*)arg2 error:(id*)arg3;
- (const struct IOUSBConfigurationDescriptor { unsigned char x1; unsigned char x2; unsigned short x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; }*)configurationDescriptor;
- (bool)configureWithValue:(unsigned long long)arg1 error:(id*)arg2;
- (bool)configureWithValue:(unsigned long long)arg1 matchInterfaces:(bool)arg2 error:(id*)arg3;
- (unsigned long long)lastKnownConfiguration;
- (bool)resetWithError:(id*)arg1;
- (void)setLastKnownConfiguration:(unsigned long long)arg1;

@end
