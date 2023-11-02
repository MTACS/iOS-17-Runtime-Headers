
@interface CNLaunchServicesRemoteAdapter : NSObject <CNLaunchServicesAdapter>

+ (id)createConnectionWithInterface:(id)arg1;
+ (id)launchServicesAdapterInterface;
+ (id)os_log;

- (void)applicationForBundleIdentifier:(id)arg1 withReply:(id /* block */)arg2;
- (void)applicationsAvailableForHandlingURLScheme:(id)arg1 withReply:(id /* block */)arg2;
- (void)applicationsForUserActivityType:(id)arg1 withReply:(id /* block */)arg2;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 withReply:(id /* block */)arg3;
- (void)openUserActivityData:(id)arg1 inApplication:(id)arg2 withReply:(id /* block */)arg3;

@end
