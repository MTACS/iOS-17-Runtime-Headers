
@interface SKAccountPageSpecifierProvider : NSObject <AAUISpecifierProvider> {
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
- (void)_accountPageSpecifierWasTapped:(id)arg1;
- (id)_appleAccount;
- (bool)_isSingleIdentity;
- (id)_storeAccount;
- (void)_viewAccountPageSpecifierWasTapped:(id)arg1;
- (id)accountManager;
- (id)activelyLoadingSpecifier;
- (id)delegate;
- (bool)handleURL:(id)arg1;
- (id)initWithAccountManager:(id)arg1;
- (void)setAccountManager:(id)arg1;
- (void)setActivelyLoadingSpecifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (id)specifiers;

@end
