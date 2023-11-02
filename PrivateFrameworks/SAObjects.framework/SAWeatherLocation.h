
@interface SAWeatherLocation : SALocation

@property (nonatomic, copy) NSString *locationId;

+ (id)location;
+ (id)locationWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)locationId;
- (void)setLocationId:(id)arg1;

@end
