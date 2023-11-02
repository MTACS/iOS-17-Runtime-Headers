
@interface SAClockObject : SADomainObject

@property (nonatomic, copy) NSNumber *alCityId;
@property (nonatomic, copy) NSString *cityName;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *countryName;
@property (nonatomic, copy) NSString *timezoneId;
@property (nonatomic, copy) NSString *unlocalizedCityName;
@property (nonatomic, copy) NSString *unlocalizedCountryName;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)alCityId;
- (id)cityName;
- (id)countryCode;
- (id)countryName;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAlCityId:(id)arg1;
- (void)setCityName:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setCountryName:(id)arg1;
- (void)setTimezoneId:(id)arg1;
- (void)setUnlocalizedCityName:(id)arg1;
- (void)setUnlocalizedCountryName:(id)arg1;
- (id)timezoneId;
- (id)unlocalizedCityName;
- (id)unlocalizedCountryName;

@end
