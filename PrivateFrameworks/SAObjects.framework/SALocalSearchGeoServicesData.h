
@interface SALocalSearchGeoServicesData : SADomainObject

@property (nonatomic, copy) NSArray *additionalEnabledTransitMarkets;
@property (nonatomic, copy) NSData *clientMetadata;
@property (nonatomic, copy) NSString *environment;

+ (id)geoServicesData;
+ (id)geoServicesDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)additionalEnabledTransitMarkets;
- (id)clientMetadata;
- (id)encodedClassName;
- (id)environment;
- (id)groupIdentifier;
- (void)setAdditionalEnabledTransitMarkets:(id)arg1;
- (void)setClientMetadata:(id)arg1;
- (void)setEnvironment:(id)arg1;

@end
