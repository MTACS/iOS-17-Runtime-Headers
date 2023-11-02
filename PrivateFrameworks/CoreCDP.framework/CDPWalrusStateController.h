
@interface CDPWalrusStateController : NSObject <CDPWalrusStatusProvider> {
    CDPContext * _context;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_makeAnalyticsEvent:(unsigned long long)arg1 state:(id)arg2 error:(id)arg3;
- (void)_startObservingWalrusStateChangeNotification;
- (void)broadcastWalrusStateChange;
- (id)initWithContext:(id)arg1;
- (void)pcsKeysForServices:(id)arg1 completion:(id /* block */)arg2;
- (void)repairWalrusStatusWithCompletion:(id /* block */)arg1;
- (bool)shouldOpenGate;
- (void)updateWalrusStatus:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (unsigned long long)walrusStatus:(id*)arg1;
- (void)walrusStatusWithCompletion:(id /* block */)arg1;

@end
