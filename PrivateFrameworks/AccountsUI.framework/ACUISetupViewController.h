
@interface ACUISetupViewController : PSSetupController {
    bool  _didAttemptDataclassSetup;
    bool  _shouldForceMailSetup;
}

+ (id)_specifierForDataclassEditControllerClass:(Class)arg1 withName:(id)arg2 account:(id)arg3;
+ (void)showAlternateCreationControllerForAccountType:(id)arg1 username:(id)arg2 fromViewController:(id)arg3 specifier:(id)arg4 completion:(id /* block */)arg5;
+ (void)showDataclassConfigurationControllerForAccount:(id)arg1 name:(id)arg2 fromViewController:(id)arg3 specifier:(id)arg4 completion:(id /* block */)arg5;

- (void)_dismissAndNotifyParent;
- (void)controller:(id)arg1 didFinishSettingUpAccount:(id)arg2;
- (void)finishedAccountSetup;

@end
