
@interface iCloudSubscriptionOptimizerDaemon.XpcSubscriptionServerDelegate : NSObject <NSXPCListenerDelegate>

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
