
@interface SAWeatherShowWeatherLocations : SADomainCommand

+ (id)showWeatherLocations;
+ (id)showWeatherLocationsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;

@end
