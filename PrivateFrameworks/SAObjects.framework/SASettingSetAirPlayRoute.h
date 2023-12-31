
@interface SASettingSetAirPlayRoute : SASettingCommand

@property (nonatomic, copy) NSString *hashedRouteId;
@property (nonatomic, copy) NSString *routeType;

+ (id)setAirPlayRoute;
+ (id)setAirPlayRouteWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteId;
- (bool)requiresResponse;
- (id)routeType;
- (void)setHashedRouteId:(id)arg1;
- (void)setRouteType:(id)arg1;

@end
