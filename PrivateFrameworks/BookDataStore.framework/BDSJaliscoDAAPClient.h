
@interface BDSJaliscoDAAPClient : NSObject <BDSJaliscoDAAPClientService> {
    bool  _familyUpdateInProgress;
    BDSServiceProxy * _serviceProxy;
    bool  _storeAuthenticationRequired;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool familyUpdateInProgress;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BDSServiceProxy *serviceProxy;
@property (nonatomic) bool storeAuthenticationRequired;
@property (readonly) Class superclass;

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)deleteItemsWithStoreIDs:(id)arg1 completion:(id /* block */)arg2;
- (bool)familyUpdateInProgress;
- (void)hideItemsWithStoreIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resetPurchasedTokenForStoreIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)resetStaleJaliscoDatabaseWithCompletion:(id /* block */)arg1;
- (id)serviceProxy;
- (void)setFamilyUpdateInProgress:(bool)arg1;
- (void)setItemHidden:(bool)arg1 forStoreID:(id)arg2 completion:(id /* block */)arg3;
- (void)setServiceProxy:(id)arg1;
- (void)setStoreAuthenticationRequired:(bool)arg1;
- (bool)storeAuthenticationRequired;
- (void)updateFamilyPolitely:(bool)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)updateFamilyPolitely:(bool)arg1 reason:(long long)arg2 completionWithError:(id /* block */)arg3;
- (void)updatePolitely:(bool)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)updatePolitely:(bool)arg1 reason:(long long)arg2 completionWithError:(id /* block */)arg3;
- (void)updatePolitelyAfterSignIn:(bool)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)updatePolitelyAfterSignOut:(bool)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;

@end
