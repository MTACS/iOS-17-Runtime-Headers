
@protocol DNDSRemoteServiceProviderAppConfigurationDelegate <NSObject>

@required

- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 clearAppActionWithIdentifier:(NSString *)arg2 forApplicationIdentifier:(DNDApplicationIdentifier *)arg3 modeIdentifier:(NSString *)arg4 withError:(id*)arg5;
- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 clearSystemActionWithIdentifier:(NSString *)arg2 forModeIdentifier:(NSString *)arg3 withError:(id*)arg4;
- (NSDictionary *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 getAppActionsForModeIdentifier:(NSString *)arg2 withError:(id*)arg3;
- (NSPredicate *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 getAppConfigurationPredicateForActionIdentifier:(NSString *)arg2 forApplicationIdentifier:(DNDApplicationIdentifier *)arg3 modeIdentifier:(NSString *)arg4 withError:(id*)arg5;
- (NSDictionary *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 getAppConfigurationTargetContentIdentifierPrefixesForModeIdentifier:(NSString *)arg2 withError:(id*)arg3;
- (NSSet *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 getSystemActionsForModeIdentifier:(NSString *)arg2 withError:(id*)arg3;
- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setAppAction:(DNDAppAction *)arg2 forApplicationIdentifier:(DNDApplicationIdentifier *)arg3 modeIdentifier:(NSString *)arg4 withError:(id*)arg5;
- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setAppConfigurationPredicate:(NSPredicate *)arg2 forActionIdentifier:(NSString *)arg3 forApplicationIdentifier:(DNDApplicationIdentifier *)arg4 modeIdentifier:(NSString *)arg5 withError:(id*)arg6;
- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setAppConfigurationTargetContentIdentifierPrefix:(NSString *)arg2 forActionIdentifier:(NSString *)arg3 forApplicationIdentifier:(DNDApplicationIdentifier *)arg4 modeIdentifier:(NSString *)arg5 withError:(id*)arg6;
- (bool)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 setSystemAction:(DNDSystemAction *)arg2 forModeIdentifier:(NSString *)arg3 withError:(id*)arg4;

@end
