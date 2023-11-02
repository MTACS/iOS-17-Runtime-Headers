
@interface AFPersonalUserSettings : NSObject <NSSecureCoding> {
    NSString * _countryCode;
    NSString * _preferredLanguage;
    NSString * _region;
    NSString * _temperatureUnit;
    bool  _twentyFourHourTimeDisplay;
}

@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *preferredLanguage;
@property (nonatomic, copy) NSString *region;
@property (nonatomic, copy) NSString *temperatureUnit;
@property (nonatomic) bool twentyFourHourTimeDisplay;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)countryCode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)preferredLanguage;
- (id)region;
- (void)setCountryCode:(id)arg1;
- (void)setPreferredLanguage:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setTemperatureUnit:(id)arg1;
- (void)setTwentyFourHourTimeDisplay:(bool)arg1;
- (id)temperatureUnit;
- (bool)twentyFourHourTimeDisplay;

@end
