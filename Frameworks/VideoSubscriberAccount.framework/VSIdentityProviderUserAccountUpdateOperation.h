
@interface VSIdentityProviderUserAccountUpdateOperation : VSAsyncOperation {
    NSError * _error;
    VSIdentityProvider * _provider;
    NSArray * _userAccounts;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) VSIdentityProvider *provider;
@property (nonatomic, readonly) NSArray *userAccounts;

- (void).cxx_destruct;
- (id)_allowedBundleIDs;
- (id)_userAccountsForJSUserAccounts;
- (id)error;
- (void)executionDidBegin;
- (id)initWithIdentityProvider:(id)arg1 userAccounts:(id)arg2;
- (id)provider;
- (void)setError:(id)arg1;
- (id)userAccounts;

@end
