
@interface IOUSBHostInterface : IOUSBHostObject {
    const struct IOUSBConfigurationDescriptor { unsigned char x1; unsigned char x2; unsigned short x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; } * _configurationDescriptor;
    unsigned long long  _interfaceNumber;
    unsigned long long  _lastKnownAlternateSetting;
}

@property const struct IOUSBConfigurationDescriptor { unsigned char x1; unsigned char x2; unsigned short x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; }*configurationDescriptor;
@property (readonly) double idleTimeout;
@property (readonly) const struct IOUSBInterfaceDescriptor { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; }*interfaceDescriptor;
@property unsigned long long interfaceNumber;
@property unsigned long long lastKnownAlternateSetting;

+ (struct __CFDictionary { }*)createMatchingDictionaryWithVendorID:(id)arg1 productID:(id)arg2 bcdDevice:(id)arg3 interfaceNumber:(id)arg4 configurationValue:(id)arg5 interfaceClass:(id)arg6 interfaceSubclass:(id)arg7 interfaceProtocol:(id)arg8 speed:(id)arg9 productIDArray:(id)arg10;

- (const struct IOUSBConfigurationDescriptor { unsigned char x1; unsigned char x2; unsigned short x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; }*)configurationDescriptor;
- (id)copyPipeWithAddress:(unsigned long long)arg1 error:(id*)arg2;
- (double)idleTimeout;
- (id)initWithIOService:(unsigned int)arg1 options:(unsigned long long)arg2 queue:(id)arg3 error:(id*)arg4 interestHandler:(id /* block */)arg5;
- (const struct IOUSBInterfaceDescriptor { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; }*)interfaceDescriptor;
- (unsigned long long)interfaceNumber;
- (unsigned long long)lastKnownAlternateSetting;
- (bool)selectAlternateSetting:(unsigned long long)arg1 error:(id*)arg2;
- (void)setConfigurationDescriptor:(const struct IOUSBConfigurationDescriptor { unsigned char x1; unsigned char x2; unsigned short x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; }*)arg1;
- (bool)setIdleTimeout:(double)arg1 error:(id*)arg2;
- (void)setInterfaceNumber:(unsigned long long)arg1;
- (void)setLastKnownAlternateSetting:(unsigned long long)arg1;

@end
