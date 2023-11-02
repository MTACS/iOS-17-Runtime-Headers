
@interface SiriFindMy.SetGeoFenceIntentHandler : NSObject <SetGeoFenceIntentHandling> {
    void deviceState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sessionManager;
}

- (void).cxx_destruct;
- (void)confirmSetGeoFence:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetGeoFence:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveFriendForSetGeoFence:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveLocationForSetGeoFence:(id)arg1 withCompletion:(id /* block */)arg2;

@end
