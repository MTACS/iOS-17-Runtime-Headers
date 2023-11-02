
@interface AKAuthorizationNotificationService : NSObject {
    NSXPCListenerEndpoint * _daemonEndpoint;
    AKAdaptiveService * _service;
}

+ (id)_sharedService;
+ (void)startServiceWithNotificationHandler:(id)arg1;
+ (void)startServiceWithStateBroadcastHandler:(id)arg1;

- (void).cxx_destruct;
- (void)_configureNotificationServiceWithCompletion:(id /* block */)arg1;
- (void)_configureStateBroadcastServiceWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (void)startWithNotificationHandler:(id)arg1 completion:(id /* block */)arg2;
- (void)startWithStateBroadcastHandler:(id)arg1 completion:(id /* block */)arg2;

@end
