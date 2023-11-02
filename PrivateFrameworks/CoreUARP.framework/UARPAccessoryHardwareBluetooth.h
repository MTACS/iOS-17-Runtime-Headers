
@interface UARPAccessoryHardwareBluetooth : UARPAccessoryHardwareID {
    unsigned short  _productID;
    unsigned short  _productVersion;
    unsigned short  _vendorID;
    long long  _vendorIDSource;
}

@property (readonly) unsigned short productID;
@property (readonly) unsigned short productVersion;
@property (readonly) unsigned short vendorID;
@property (readonly) long long vendorIDSource;

- (id)description;
- (id)init;
- (id)initWithVendorIDSource:(long long)arg1 vendorID:(unsigned short)arg2 productID:(unsigned short)arg3 productVersion:(unsigned short)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned short)productID;
- (unsigned short)productVersion;
- (unsigned short)vendorID;
- (long long)vendorIDSource;

@end
