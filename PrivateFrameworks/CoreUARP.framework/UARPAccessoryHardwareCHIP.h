
@interface UARPAccessoryHardwareCHIP : UARPAccessoryHardwareID {
    unsigned short  _hwID;
    UARPAccessoryMetadata * _metadata;
    unsigned short  _productID;
    unsigned short  _vendorID;
}

@property (readonly) unsigned short hwID;
@property (readonly) UARPAccessoryMetadata *metadata;
@property (readonly) unsigned short productID;
@property (readonly) unsigned short vendorID;

- (void).cxx_destruct;
- (id)description;
- (unsigned short)hwID;
- (id)initWithVendorID:(unsigned short)arg1 productID:(unsigned short)arg2 hardwareID:(unsigned short)arg3 metadata:(id)arg4;
- (id)metadata;
- (unsigned short)productID;
- (unsigned short)vendorID;

@end
