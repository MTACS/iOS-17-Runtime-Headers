
@interface SALocalSearchStartNavigation : SABaseClientBoundCommand

@property (nonatomic, retain) SALocation *destination;
@property (nonatomic, copy) NSString *directionsType;
@property (nonatomic, retain) SALocation *origin;

+ (id)startNavigation;
+ (id)startNavigationWithDictionary:(id)arg1 context:(id)arg2;

- (id)destination;
- (id)directionsType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)origin;
- (bool)requiresResponse;
- (void)setDestination:(id)arg1;
- (void)setDirectionsType:(id)arg1;
- (void)setOrigin:(id)arg1;

@end
