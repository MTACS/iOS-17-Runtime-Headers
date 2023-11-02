
@interface AMSUIManageSubsriptionSpecifierProvider : NSObject <AAUISpecifierProvider, AMSUIWebDelegate> {
    AIDAAccountManager * _accountManager;
    PSSpecifier * _activelyLoadingSpecifier;
    <AAUISpecifierProviderDelegate> * _delegate;
    NSArray * _specifiers;
}

@property (nonatomic, retain) AIDAAccountManager *accountManager;
@property (nonatomic, retain) PSSpecifier *activelyLoadingSpecifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *specifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_appleAccount;
- (id)_findViewController;
- (bool)_isSingleIdentity;
- (id)_storeAccount;
- (void)_subscriptionsSpecifierWasTapped:(id)arg1;
- (id)accountManager;
- (id)activelyLoadingSpecifier;
- (id)delegate;
- (id)initWithAccountManager:(id)arg1;
- (void)setAccountManager:(id)arg1;
- (void)setActivelyLoadingSpecifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (id)specifiers;
- (void)webViewController:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id /* block */)arg3;
- (bool)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(id /* block */)arg3;
- (void)webViewController:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;

@end
