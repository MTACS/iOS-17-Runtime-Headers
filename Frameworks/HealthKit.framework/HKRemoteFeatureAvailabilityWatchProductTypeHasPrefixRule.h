
@interface HKRemoteFeatureAvailabilityWatchProductTypeHasPrefixRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule> {
    NSString * _productType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *productType;
@property (readonly) Class superclass;

+ (id)ruleIdentifier;

- (void).cxx_destruct;
- (bool)evaluate;
- (void)processUserInfo:(id)arg1;
- (id)productType;
- (void)setProductType:(id)arg1;

@end
