
@interface ASCAuthorizationTrafficController : NSObject {
    NSMutableSet * _appsWithActiveRequests;
    NSObject<OS_dispatch_queue> * _clearanceQueue;
    NSObject<OS_dispatch_queue> * _trafficQueue;
}

+ (bool)_appWithAppIdentifierIsWebBrowser:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)beginAuthorizationForApplicationIdentifier:(id)arg1 withClearanceHandler:(id /* block */)arg2;
- (void)cancelAuthorizationForAppIdentifierIfNecessary:(id)arg1;
- (void)endAuthorizationForAppIdentifier:(id)arg1 clearanceHandler:(id /* block */)arg2;
- (id)init;

@end
