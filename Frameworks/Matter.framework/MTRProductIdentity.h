
@interface MTRProductIdentity : NSObject {
    NSNumber * _productID;
    NSNumber * _vendorID;
}

@property (nonatomic, readonly, copy) NSNumber *productID;
@property (nonatomic, readonly, copy) NSNumber *vendorID;

- (void).cxx_destruct;
- (id)initWithVendorID:(id)arg1 productID:(id)arg2;
- (id)productID;
- (id)vendorID;

@end
