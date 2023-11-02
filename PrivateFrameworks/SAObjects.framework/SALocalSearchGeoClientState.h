
@interface SALocalSearchGeoClientState : SAAceClientState

@property (nonatomic, copy) NSArray *additionalEnabledTransitMarkets;
@property (nonatomic, copy) NSString *environment;

+ (id)deliveryDeadline;
+ (id)geoClientState;
+ (id)geoClientStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)persistencePolicy;
+ (id)syncKey;
+ (id)uniqueObjectIdentifier;

- (id)additionalEnabledTransitMarkets;
- (id)encodedClassName;
- (id)environment;
- (id)groupIdentifier;
- (void)setAdditionalEnabledTransitMarkets:(id)arg1;
- (void)setEnvironment:(id)arg1;

@end
