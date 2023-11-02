
@interface ICQInternetPrivacyLocationSharingViewController : PSListController <AAUISpecifierProviderDelegate> {
    ICQInternetPrivacyLocationSharingSpecifierProvider * _specifierProvider;
    ICQInternetPrivacyViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICQInternetPrivacyLocationSharingSpecifierProvider *specifierProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICQInternetPrivacyViewModel *viewModel;

- (void).cxx_destruct;
- (void)_setupNavigationBar;
- (id)init;
- (void)reloadSpecifiersForProvider:(id)arg1 oldSpecifiers:(id)arg2 animated:(bool)arg3;
- (void)setSpecifierProvider:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)specifierProvider;
- (void)specifierProvider:(id)arg1 didFinishLoadingSpecifier:(id)arg2;
- (void)specifierProvider:(id)arg1 showViewController:(id)arg2;
- (void)specifierProvider:(id)arg1 willBeginLoadingSpecifier:(id)arg2;
- (id)specifiers;
- (id)viewModel;
- (void)viewWillAppear:(bool)arg1;

@end
