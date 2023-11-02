
@interface HMDAccessoryMetricVendorDetails : HMFObject {
    NSString * _category;
    NSNumber * _differentiationNumber;
    NSString * _firmwareVersion;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _productData;
}

@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSNumber *differentiationNumber;
@property (nonatomic, readonly) NSString *firmwareVersion;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *productData;

+ (unsigned long long)maximumDifferentiationNumber;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)category;
- (id)differentiationNumber;
- (id)firmwareVersion;
- (id)initWithAccessory:(id)arg1;
- (id)initWithProductData:(id)arg1 manufacturer:(id)arg2 model:(id)arg3 firmwareVersion:(id)arg4 category:(id)arg5 differentiationNumber:(id)arg6;
- (id)manufacturer;
- (id)model;
- (id)productData;

@end
