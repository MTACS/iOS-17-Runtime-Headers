
@interface HKClinicalSampleAccountProvider : NSObject {
    HKClinicalSampleAccountProviderGateway * _gateway;
    NSString * _identifier;
    long long  _minCompatibleAPIVersion;
    NSDictionary * _properties;
    NSString * _title;
}

@property (nonatomic, retain) HKClinicalSampleAccountProviderGateway *gateway;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long minCompatibleAPIVersion;
@property (nonatomic, copy) NSDictionary *properties;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)gateway;
- (id)identifier;
- (long long)minCompatibleAPIVersion;
- (id)properties;
- (void)setGateway:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMinCompatibleAPIVersion:(long long)arg1;
- (void)setProperties:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
