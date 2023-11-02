
@interface FAFamilyEligibilityRequester : NSObject {
    AIDAAccountManager * _accountManager;
    bool  _allowsAuthenticationPrompt;
    AAGrandSlamSigner * _grandSlamSigner;
    NSOperationQueue * _networkActivityQueue;
}

@property (nonatomic) bool allowsAuthenticationPrompt;

- (void).cxx_destruct;
- (id)_accountStore;
- (id)_appleAccount;
- (id)_grandSlamSigner;
- (bool)allowsAuthenticationPrompt;
- (id)init;
- (id)initWithAccountManager:(id)arg1;
- (void)requestFamilyEligibilityWithCompletion:(id /* block */)arg1;
- (void)setAllowsAuthenticationPrompt:(bool)arg1;

@end
