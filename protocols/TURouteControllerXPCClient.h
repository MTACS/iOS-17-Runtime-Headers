
@protocol TURouteControllerXPCClient <NSObject>

@required

- (oneway void)handleLocalRoutesByUniqueIdentifierUpdated:(NSDictionary *)arg1;
- (oneway void)handlePairedHostDeviceRoutesByUniqueIdentifierUpdated:(NSDictionary *)arg1;

@end
