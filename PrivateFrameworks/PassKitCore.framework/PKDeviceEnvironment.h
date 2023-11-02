
@interface PKDeviceEnvironment : NSObject {
    NSString * _countryCode;
    NSString * _deviceLanguage;
}

@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *deviceLanguage;

- (void).cxx_destruct;
- (id)_init;
- (id)countryCode;
- (id)deviceLanguage;
- (unsigned long long)hash;
- (id)initWithCountryCode:(id)arg1 deviceLanguage:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)localeDiffersFromEnvironment:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDeviceLanguage:(id)arg1;

@end
