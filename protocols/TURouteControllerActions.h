
@protocol TURouteControllerActions <NSObject>

@required

- (void)pickRouteWithUniqueIdentifier:(NSString *)arg1 shouldWaitUntilAvailable:(bool)arg2 forRouteController:(TURouteController *)arg3;
- (NSDictionary *)routesByUniqueIdentifierForRouteController:(TURouteController *)arg1;

@end
