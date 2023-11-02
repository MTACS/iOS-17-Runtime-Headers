
@interface UARPAccessoryHardwareUSB : UARPAccessoryHardwareID {
    unsigned short  _productID;
    unsigned short  _vendorID;
}

@property (readonly) unsigned short productID;
@property (readonly) unsigned short vendorID;

- (id)description;
- (id)init;
- (id)initWithVendorID:(unsigned short)arg1 productID:(unsigned short)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned short)productID;
- (unsigned short)vendorID;

@end
