
@interface NEIKEv2VendorData : NSObject <NSCopying> {
    NSData * _vendorData;
}

@property (retain) NSData *vendorData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setVendorData:(id)arg1;
- (id)vendorData;

@end
