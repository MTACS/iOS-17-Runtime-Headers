
@protocol STGroupSpecifierProviderDelegate <PSController>

@required

- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 dismissViewControllerAnimated:(bool)arg2;
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 lazyLoadBundle:(PSSpecifier *)arg2;
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 popToViewControllerAnimated:(bool)arg2;
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 presentViewController:(UIViewController *)arg2 animated:(bool)arg3;
- (void)specifierProvider:(void *)arg1 presentViewController:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: STGroupSpecifierProvider *, UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 reloadSectionHeaderFootersWithAnimation:(long long)arg2;
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 reloadSpecifier:(PSSpecifier *)arg2 animated:(bool)arg3;
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 showConfirmationViewForSpecifier:(PSConfirmationSpecifier *)arg2;
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 showController:(UIViewController *)arg2 animated:(bool)arg3;
- (void)specifierProvider:(STGroupSpecifierProvider *)arg1 showPINSheet:(PSSpecifier *)arg2;
- (void)specifierProviderBeginUpdates:(STGroupSpecifierProvider *)arg1;
- (void)specifierProviderEndUpdates:(STGroupSpecifierProvider *)arg1;

@end
