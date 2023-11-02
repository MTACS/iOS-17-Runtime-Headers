
@interface STListViewController : PSListController <STGroupSpecifierProviderDelegate> {
    NSMutableDictionary * _cellHeightBySpecifierIdentifier;
    NSArray * _specifierProviders;
}

@property (nonatomic, retain) NSMutableDictionary *cellHeightBySpecifierIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *specifierProviders;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserversForSpecifierProvider:(id)arg1;
- (id)cellHeightBySpecifierIdentifier;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObserversForSpecifierProvider:(id)arg1;
- (void)setCellHeightBySpecifierIdentifier:(id)arg1;
- (void)setSpecifierProviders:(id)arg1;
- (bool)shouldReloadSpecifiersOnResume;
- (void)specifierProvider:(id)arg1 dismissViewControllerAnimated:(bool)arg2;
- (void)specifierProvider:(id)arg1 lazyLoadBundle:(id)arg2;
- (void)specifierProvider:(id)arg1 popToViewControllerAnimated:(bool)arg2;
- (void)specifierProvider:(id)arg1 presentViewController:(id)arg2 animated:(bool)arg3;
- (void)specifierProvider:(id)arg1 presentViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)specifierProvider:(id)arg1 reloadSectionHeaderFootersWithAnimation:(long long)arg2;
- (void)specifierProvider:(id)arg1 reloadSpecifier:(id)arg2 animated:(bool)arg3;
- (void)specifierProvider:(id)arg1 showConfirmationViewForSpecifier:(id)arg2;
- (void)specifierProvider:(id)arg1 showController:(id)arg2 animated:(bool)arg3;
- (void)specifierProvider:(id)arg1 showPINSheet:(id)arg2;
- (void)specifierProviderBeginUpdates:(id)arg1;
- (void)specifierProviderEndUpdates:(id)arg1;
- (id)specifierProviders;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)visibleSpecifierProviders;

@end
