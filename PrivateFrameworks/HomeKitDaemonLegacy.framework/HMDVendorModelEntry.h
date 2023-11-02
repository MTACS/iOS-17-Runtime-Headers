
@interface HMDVendorModelEntry : HMFObject {
    NSString * _appBundleID;
    NSString * _appStoreID;
    HMDAccessoryVersion * _firmwareVersion;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _productData;
    NSArray * _productDataAlternates;
}

@property (nonatomic, readonly) NSString *appBundleID;
@property (nonatomic, readonly) NSString *appStoreID;
@property (nonatomic, readonly) HMDAccessoryVersion *firmwareVersion;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *productData;
@property (nonatomic, readonly) NSArray *productDataAlternates;

- (void).cxx_destruct;
- (id)appBundleID;
- (id)appStoreID;
- (id)attributeDescriptions;
- (long long)compare:(id)arg1;
- (id)firmwareVersion;
- (unsigned long long)hash;
- (id)initWithManufacturer:(id)arg1 model:(id)arg2 appBundleID:(id)arg3 appStoreID:(id)arg4 firmwareVersion:(id)arg5 productData:(id)arg6 productDataAlternates:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)manufacturer;
- (id)model;
- (id)productData;
- (id)productDataAlternates;

@end
