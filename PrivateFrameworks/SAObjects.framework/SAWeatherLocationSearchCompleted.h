
@interface SAWeatherLocationSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *weatherLocations;

+ (id)locationSearchCompleted;
+ (id)locationSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationSearchCompletedWithWeatherLocations:(id)arg1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithWeatherLocations:(id)arg1;
- (bool)requiresResponse;
- (void)setWeatherLocations:(id)arg1;
- (id)weatherLocations;

@end
