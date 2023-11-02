
@interface HMAutoAddWalletKeySupressionAssertion : HMFAssertion {
    HMHomeManager * _homeManager;
    NSUUID * _homeUUID;
}

@property (readonly) HMHomeManager *homeManager;
@property (readonly, copy) NSUUID *homeUUID;

- (void).cxx_destruct;
- (void)acquireWithCompletion:(id /* block */)arg1;
- (id)homeManager;
- (id)homeUUID;
- (id)initWithHomeManager:(id)arg1 homeUUID:(id)arg2;
- (void)invalidate;

@end
