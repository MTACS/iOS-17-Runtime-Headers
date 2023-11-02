
@interface NPFamilyEligibilityProvider : NSObject <AIDAAccountManagerDelegate, NPFamilyEligibilityProviderType> {
    AIDAAccountManager * _accountManager;
    FAFamilyEligibilityRequester * _eligibilityRequester;
    ACAccountStore * _store;
}

@property (nonatomic, readonly) AIDAAccountManager *accountManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FAFamilyEligibilityRequester *eligibilityRequester;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ACAccountStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountManager;
- (id)accountsForAccountManager:(id)arg1;
- (id)eligibilityRequester;
- (id)init;
- (id)requestFamilyEligibility;
- (id)store;

@end
