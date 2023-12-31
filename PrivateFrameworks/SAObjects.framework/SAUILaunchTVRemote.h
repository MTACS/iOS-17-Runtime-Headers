
@interface SAUILaunchTVRemote : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *hashedRouteId;

+ (id)launchTVRemote;
+ (id)launchTVRemoteWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteId;
- (bool)requiresResponse;
- (void)setHashedRouteId:(id)arg1;

@end
