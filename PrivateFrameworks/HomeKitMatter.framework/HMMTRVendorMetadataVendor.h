
@interface HMMTRVendorMetadataVendor : HMFObject {
    NSString * _appBundleID;
    NSString * _appStoreID;
    NSNumber * _identifier;
    NSString * _name;
    NSDictionary * _productsByProductID;
}

@property (copy) NSString *appBundleID;
@property (copy) NSString *appStoreID;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (copy) NSNumber *identifier;
@property (copy) NSString *name;
@property (readonly, copy) NSSet *products;
@property (copy) NSDictionary *productsByProductID;

- (void).cxx_destruct;
- (id)appBundleID;
- (id)appStoreID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dictionaryRepresentation:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)productWithID:(id)arg1;
- (id)products;
- (id)productsByProductID;
- (void)setAppBundleID:(id)arg1;
- (void)setAppStoreID:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProductsByProductID:(id)arg1;

@end
