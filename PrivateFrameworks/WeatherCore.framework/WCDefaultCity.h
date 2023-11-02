
@interface WCDefaultCity : NSObject {
    NSString * _countryName;
    NSString * _countryOverride;
    float  _latitude;
    NSString * _localeCode;
    float  _longitude;
    NSString * _name;
    NSString * _timeZone;
    NSString * _unlocalizedCountryName;
    NSString * _unlocalizedCountryOverride;
    NSString * _unlocalizedName;
}

@property (nonatomic, copy) NSString *countryName;
@property (nonatomic, copy) NSString *countryOverride;
@property (nonatomic) float latitude;
@property (nonatomic, copy) NSString *localeCode;
@property (nonatomic) float longitude;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *timeZone;
@property (nonatomic, copy) NSString *unlocalizedCountryName;
@property (nonatomic, copy) NSString *unlocalizedCountryOverride;
@property (nonatomic, copy) NSString *unlocalizedName;

+ (id)cityFromAlCity:(id)arg1;

- (void).cxx_destruct;
- (id)countryName;
- (id)countryOverride;
- (id)description;
- (float)latitude;
- (id)localeCode;
- (float)longitude;
- (id)name;
- (void)setCountryName:(id)arg1;
- (void)setCountryOverride:(id)arg1;
- (void)setLatitude:(float)arg1;
- (void)setLocaleCode:(id)arg1;
- (void)setLongitude:(float)arg1;
- (void)setName:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUnlocalizedCountryName:(id)arg1;
- (void)setUnlocalizedCountryOverride:(id)arg1;
- (void)setUnlocalizedName:(id)arg1;
- (id)timeZone;
- (id)unlocalizedCountryName;
- (id)unlocalizedCountryOverride;
- (id)unlocalizedName;

@end
