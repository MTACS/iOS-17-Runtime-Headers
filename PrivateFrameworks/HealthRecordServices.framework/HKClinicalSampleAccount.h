
@interface HKClinicalSampleAccount : NSObject {
    NSArray * _batches;
    NSDictionary * _properties;
    HKClinicalSampleAccountProvider * _provider;
}

@property (nonatomic, copy) NSArray *batches;
@property (nonatomic, copy) NSDictionary *properties;
@property (nonatomic, retain) HKClinicalSampleAccountProvider *provider;

- (void).cxx_destruct;
- (id)asClinicalGatewayWithBrand:(id)arg1;
- (id)asClinicalProviderWithBrand:(id)arg1;
- (id)batches;
- (id)properties;
- (id)provider;
- (void)setBatches:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setProvider:(id)arg1;

@end
