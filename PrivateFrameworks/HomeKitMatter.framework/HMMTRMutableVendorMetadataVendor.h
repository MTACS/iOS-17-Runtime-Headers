
@interface HMMTRMutableVendorMetadataVendor : HMMTRVendorMetadataVendor

@property (copy) NSString *appBundleID;
@property (copy) NSString *appStoreID;
@property (copy) NSNumber *identifier;
@property (copy) NSString *name;

- (void)addProduct:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeProductWithID:(id)arg1;

@end
