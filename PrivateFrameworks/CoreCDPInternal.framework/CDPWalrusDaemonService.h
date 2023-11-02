
@interface CDPWalrusDaemonService : NSObject {
    unsigned long long  _entitlements;
    CDPInternalWalrusStateController * _walrusStateController;
}

@property (nonatomic, retain) CDPInternalWalrusStateController *walrusStateController;

- (void).cxx_destruct;
- (bool)_allowWalrusAccess;
- (bool)_allowWalrusPCSKeysAccess;
- (oneway void)broadcastWalrusStateChange;
- (id)defaultWalrusStateController;
- (id)initWithEntitlements:(unsigned long long)arg1;
- (id)initWithEntitlements:(unsigned long long)arg1 walrusController:(id)arg2;
- (oneway void)pcsKeysForServices:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)repairWalrusWithCompletion:(id /* block */)arg1;
- (void)setWalrusStateController:(id)arg1;
- (oneway void)updateWalrusStatus:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (oneway void)updateWebAccessStatus:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)walrusStateController;
- (oneway void)walrusStatusWithContext:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)webAccessStatusWithCompletion:(id /* block */)arg1;

@end
