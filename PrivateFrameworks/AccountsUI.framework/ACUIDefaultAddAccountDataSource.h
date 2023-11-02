
@interface ACUIDefaultAddAccountDataSource : NSObject <ACUIAddAccountDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)accountControllerCompletedWithAccount:(id)arg1 action:(long long)arg2 data:(id)arg3 specifier:(id)arg4 viewController:(id)arg5 completion:(id /* block */)arg6;
- (void)configureAccountCreationController:(id)arg1;
- (void)configureSpecifierForOtherAccountSpecifier:(id)arg1;
- (Class)controllerClassForCreatingAccountWithType:(id)arg1 withViewProviderManager:(id)arg2;
- (void)hasAccountWithType:(id)arg1 accountStore:(id)arg2 completion:(id /* block */)arg3;
- (bool)shouldAddSpecifierForAccountTypeID:(id)arg1;
- (Class)viewControllerClassForCreatingAccountWithType:(id)arg1 withViewProviderManager:(id)arg2;
- (Class)viewControllerClassForCreatingOtherAccountTypes;

@end
