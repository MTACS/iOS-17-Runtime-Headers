
@interface AASignOutManager : NSObject <AIDAAccountManagerDelegate> {
    ACAccountStore * _accountStore;
    NSString * _altDSIDToSignOut;
    AIDAServiceOwnersManager * _serviceOwnersManager;
    NSObject<OS_dispatch_queue> * _signOutQueue;
}

@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, retain) NSString *altDSIDToSignOut;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AIDAServiceOwnersManager *serviceOwnersManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accountForService:(id)arg1 matchingAltDSID:(id)arg2 DSID:(id)arg3;
- (void)_signOutOfAppleAccount:(id)arg1 iTunesAccount:(id)arg2 withServiceContext:(id)arg3 completion:(id /* block */)arg4;
- (void)_signOutSecondaryAccountsWithAltDSID:(id)arg1 DSID:(id)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (id)accountStore;
- (id)accountsForAccountManager:(id)arg1;
- (id)altDSIDToSignOut;
- (id)initWithAccount:(id)arg1;
- (id)serviceOwnersManager;
- (void)setAccountStore:(id)arg1;
- (void)setAltDSIDToSignOut:(id)arg1;
- (void)setServiceOwnersManager:(id)arg1;
- (void)signOutOfAccount:(id)arg1 completion:(id /* block */)arg2;

@end
