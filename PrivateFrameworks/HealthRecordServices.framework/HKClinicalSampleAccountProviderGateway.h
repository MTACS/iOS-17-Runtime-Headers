
@interface HKClinicalSampleAccountProviderGateway : NSObject {
    HKFHIRVersion * _FHIRVersion;
    NSString * _identifier;
    NSDictionary * _properties;
    NSString * _title;
}

@property (nonatomic, copy) HKFHIRVersion *FHIRVersion;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDictionary *properties;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)FHIRVersion;
- (id)identifier;
- (id)properties;
- (void)setFHIRVersion:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
