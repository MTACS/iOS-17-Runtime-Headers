
@interface SAWeatherLocationAdd : SADomainCommand

@property (nonatomic, retain) SAWeatherLocation *weatherLocation;

+ (id)locationAdd;
+ (id)locationAddWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setWeatherLocation:(id)arg1;
- (id)weatherLocation;

@end
