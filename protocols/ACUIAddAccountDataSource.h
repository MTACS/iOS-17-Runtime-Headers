
@protocol ACUIAddAccountDataSource <NSObject>

@required

- (void)accountControllerCompletedWithAccount:(void *)arg1 action:(void *)arg2 data:(void *)arg3 specifier:(void *)arg4 viewController:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: ACAccount *, long long, NSDictionary *, PSSpecifier *, PSViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)configureAccountCreationController:(id <ACUIAccountCreationControlling>)arg1;
- (void)configureSpecifierForOtherAccountSpecifier:(PSSpecifier *)arg1;
- (Class)controllerClassForCreatingAccountWithType:(NSString *)arg1 withViewProviderManager:(ACUIAccountViewProvidersManager *)arg2;
- (void)hasAccountWithType:(void *)arg1 accountStore:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: ACAccountType *, ACAccountStore *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ACAccount *, void*
- (bool)shouldAddSpecifierForAccountTypeID:(NSString *)arg1;
- (Class)viewControllerClassForCreatingAccountWithType:(NSString *)arg1 withViewProviderManager:(ACUIAccountViewProvidersManager *)arg2;
- (Class)viewControllerClassForCreatingOtherAccountTypes;

@end
