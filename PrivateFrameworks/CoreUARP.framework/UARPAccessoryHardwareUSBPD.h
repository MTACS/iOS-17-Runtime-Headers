
@interface UARPAccessoryHardwareUSBPD : UARPAccessoryHardwareID {
    bool  _isMagSafeCable;
    bool  _isPowerAdapter;
    bool  _isUSBCLightning;
    long long  _location;
    unsigned short  _productID;
    bool  _supportsAccMode7;
    unsigned short  _vendorID;
}

@property (readonly) bool isMagSafeCable;
@property (readonly) bool isPowerAdapter;
@property (readonly) bool isUSBCLightning;
@property (readonly) long long location;
@property (readonly) unsigned short productID;
@property (readonly) bool supportsAccMode7;
@property (readonly) unsigned short vendorID;

- (id)description;
- (id)init;
- (id)initWithVendorID:(unsigned short)arg1 productID:(unsigned short)arg2;
- (id)initWithVendorID:(unsigned short)arg1 productID:(unsigned short)arg2 usbpdClass:(long long)arg3 locationType:(long long)arg4;
- (id)initWithVendorID:(unsigned short)arg1 productID:(unsigned short)arg2 usbpdClass:(long long)arg3 locationType:(long long)arg4 supportsAccMode7:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isMagSafeCable;
- (bool)isPowerAdapter;
- (bool)isUSBCLightning;
- (long long)location;
- (unsigned short)productID;
- (bool)supportsAccMode7;
- (unsigned short)vendorID;

@end
