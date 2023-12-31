
@interface SAMPGetRoutes : SADomainCommand

@property (nonatomic) double routeTimeout;

+ (id)getRoutes;
+ (id)getRoutesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (double)routeTimeout;
- (void)setRouteTimeout:(double)arg1;

@end
