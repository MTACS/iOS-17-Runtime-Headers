
@interface CDPDKeychainSync : NSObject <CDPInitUnavailable> {
    <CDPDCircleProxy> * _circleProxy;
    <CDPDCircleProxy> * _sosCircleProxy;
    <CDPDKeychainSyncPolicyProvider> * _syncPolicy;
}

@property (nonatomic, readonly) <CDPDCircleProxy> *circleProxy;
@property (nonatomic, readonly) bool isUserVisibleKeychainSyncAvailable;
@property (nonatomic, readonly) bool isUserVisibleKeychainSyncEnabled;
@property (nonatomic, readonly) <CDPDCircleProxy> *sosCircleProxy;
@property (nonatomic, readonly) <CDPDKeychainSyncPolicyProvider> *syncPolicy;

+ (id)_defaultUserVisibleViewSet;
+ (id)keyChainSync;
+ (id)keyChainSyncWithProxy:(id)arg1 sosCircleProxy:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (bool)_isThisDeviceInCircle;
- (bool)_keychainSyncAvailableViaOctacon;
- (bool)_keychainSyncAvailableViaSOS;
- (void)_preflightCircleStatusWithCompletion:(id /* block */)arg1;
- (void)_processAuthFailure:(id)arg1 completion:(id /* block */)arg2;
- (bool)_setKeychainSyncState:(bool)arg1 error:(id*)arg2;
- (void)_setUserVisibleKeychainSyncEnabled:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)circleProxy;
- (id)initWithCircleProxy:(id)arg1 sosCircleProxy:(id)arg2 context:(id)arg3;
- (id)initWithCircleProxy:(id)arg1 sosCircleProxy:(id)arg2 policyProvider:(id)arg3;
- (id)initWithContext:(id)arg1;
- (bool)isUserVisibleKeychainSyncAvailable;
- (bool)isUserVisibleKeychainSyncEnabled;
- (void)removeNonViewAwarePeersFromCircleWithCompletion:(id /* block */)arg1;
- (void)setUserVisibleKeychainSyncEnabled:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)sosCircleProxy;
- (id)syncPolicy;
- (void)updateKeychainSyncStateIfNeededWithCompletion:(id /* block */)arg1;

@end
