
@interface SACurrentDisplayRouteClientState : SAAceClientState

@property (nonatomic, copy) NSArray *activeDisplayRoutes;

+ (id)currentDisplayRouteClientState;
+ (id)currentDisplayRouteClientStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;

- (id)activeDisplayRoutes;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setActiveDisplayRoutes:(id)arg1;

@end
