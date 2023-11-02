
@interface ICQInternetPrivacyLocationSharingSpecifierProvider : NSObject <AAUISpecifierProvider> {
    AIDAAccountManager * _accountManager;
    <AAUISpecifierProviderDelegate> * _delegate;
    PSSpecifier * _enableSpecifier;
    bool  _locationSharingEnabled;
    NSArray * _specifiers;
    ICQInternetPrivacyViewModel * _viewModel;
}

@property (nonatomic, retain) AIDAAccountManager *accountManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISpecifierProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PSSpecifier *enableSpecifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool locationSharingEnabled;
@property (nonatomic, copy) NSArray *specifiers;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICQInternetPrivacyViewModel *viewModel;

- (void).cxx_destruct;
- (void)_reloadSpecifiers;
- (void)_specifierWasTapped:(id)arg1;
- (void)_startFetchingSharingLocationPreference;
- (id)accountManager;
- (id)delegate;
- (id)enableSpecifier;
- (id)init;
- (id)initWithAccountManager:(id)arg1;
- (bool)locationSharingEnabled;
- (void)setAccountManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnableSpecifier:(id)arg1;
- (void)setLocationSharingEnabled:(bool)arg1;
- (void)setSpecifiers:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)specifiers;
- (id)viewModel;

@end
