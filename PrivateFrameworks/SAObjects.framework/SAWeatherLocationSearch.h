
@interface SAWeatherLocationSearch : SADomainCommand

@property (nonatomic, copy) NSURL *identifier;
@property (nonatomic, copy) NSString *locationId;

+ (id)locationSearch;
+ (id)locationSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (id)locationId;
- (bool)requiresResponse;
- (void)setIdentifier:(id)arg1;
- (void)setLocationId:(id)arg1;

@end
