
@protocol AAUISpecifierProviderDelegate <NSObject>

@required

- (void)reloadSpecifiersForProvider:(id <AAUISpecifierProvider>)arg1 oldSpecifiers:(NSArray *)arg2 animated:(bool)arg3;
- (void)specifierProvider:(id <AAUISpecifierProvider>)arg1 didFinishLoadingSpecifier:(PSSpecifier *)arg2;
- (void)specifierProvider:(id <AAUISpecifierProvider>)arg1 showViewController:(UIViewController *)arg2;
- (void)specifierProvider:(id <AAUISpecifierProvider>)arg1 willBeginLoadingSpecifier:(PSSpecifier *)arg2;

@optional

- (void)insertSpecifier:(PSSpecifier *)arg1 afterSpecifierNamed:(NSString *)arg2 animated:(bool)arg3;
- (void)reloadSpecifierForProvider:(id <AAUISpecifierProvider>)arg1 identifier:(NSString *)arg2;
- (void)specifierProvider:(id <AAUISpecifierProvider>)arg1 dataclassSwitchStateDidChange:(NSNumber *)arg2 withSpecifier:(PSSpecifier *)arg3;
- (NSNumber *)specifierProvider:(id <AAUISpecifierProvider>)arg1 dataclassSwitchStateForSpecifier:(PSSpecifier *)arg2;
- (bool)specifierProvider:(id <AAUISpecifierProvider>)arg1 isDataclassAvailableForSpecifier:(PSSpecifier *)arg2;
- (void)validateDataclassAccessForProvider:(void *)arg1 specifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <AAUISpecifierProvider> *, PSSpecifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
