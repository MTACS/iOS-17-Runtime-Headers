
@interface SAClockSearch : SADomainCommand

@property (nonatomic, copy) NSNumber *alCityId;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSURL *identifier;
@property (nonatomic, copy) NSString *unlocalizedCityName;
@property (nonatomic, copy) NSString *unlocalizedCountryName;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)alCityId;
- (id)countryCode;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (bool)requiresResponse;
- (void)setAlCityId:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setUnlocalizedCityName:(id)arg1;
- (void)setUnlocalizedCountryName:(id)arg1;
- (id)unlocalizedCityName;
- (id)unlocalizedCountryName;

@end
