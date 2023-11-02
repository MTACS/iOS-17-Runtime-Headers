
@interface ICQInternetPrivacyViewController : PSListController <AAUISpecifierProviderDelegate, ICQInternetPrivacyDetailDelegate> {
    ICQInternetPrivacyDetailSpecifierProvider * _detailSpecifierProvider;
    <ICQInternetPrivacyDelegate> * _specifierDelegate;
    ICQInternetPrivacyViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ICQInternetPrivacyDetailSpecifierProvider *detailSpecifierProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic) <ICQInternetPrivacyDelegate> *specifierDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICQInternetPrivacyViewModel *viewModel;

- (void).cxx_destruct;
- (void)_setupNavigationBar;
- (id)detailSpecifierProvider;
- (id)initWithViewModel:(id)arg1 accountManager:(id)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifierNamed:(id)arg2 animated:(bool)arg3;
- (bool)isEnabled;
- (void)presentIncompatibleSitesHelp;
- (void)presentLearnMoreFrom:(id)arg1;
- (void)presentSystemStatus;
- (void)reloadSpecifierForProvider:(id)arg1 identifier:(id)arg2;
- (void)reloadSpecifiersForProvider:(id)arg1 oldSpecifiers:(id)arg2 animated:(bool)arg3;
- (void)setDetailSpecifierProvider:(id)arg1;
- (void)setSpecifierDelegate:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)showAlert:(id)arg1;
- (id)specifierDelegate;
- (void)specifierProvider:(id)arg1 didFinishLoadingSpecifier:(id)arg2;
- (void)specifierProvider:(id)arg1 showViewController:(id)arg2;
- (void)specifierProvider:(id)arg1 willBeginLoadingSpecifier:(id)arg2;
- (id)specifiers;
- (void)statusDidChange;
- (id)viewModel;
- (void)viewWillAppear:(bool)arg1;

@end
