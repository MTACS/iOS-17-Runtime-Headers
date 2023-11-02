
@interface FBSOrientationObserverClient : FBSServiceFacilityClient {
    <FBSOrientationObserverClientDelegate> * _delegate;
    unsigned int  _interest;
}

- (void).cxx_destruct;
- (void)_getActiveInterfaceOrientationSynchronously:(bool)arg1 withCompletion:(id /* block */)arg2;
- (long long)activeInterfaceOrientation;
- (void)activeInterfaceOrientationWithCompletion:(id /* block */)arg1;
- (void)configureConnectMessage:(id)arg1;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (id)initWithDelegate:(id)arg1 calloutQueue:(id)arg2;
- (void)invalidate;
- (void)registerOrientationInterest:(unsigned int)arg1;

@end
