
@interface CDPUIDeviceToDeviceEncryptionUIProviderImp : NSObject <CDPUIDeviceToDeviceEncryptionUIProvider> {
    id /* block */  _cancelActionHandler;
    id /* block */  _continueActionHandler;
}

@property (nonatomic, copy) id /* block */ cancelActionHandler;
@property (nonatomic, copy) id /* block */ continueActionHandler;

- (void).cxx_destruct;
- (id)_upgradeAlertControllerWithContext:(id)arg1 vm:(id)arg2 completion:(id /* block */)arg3;
- (id)_upgradeCardUINavigationControllerWithContext:(id)arg1 vm:(id)arg2 completion:(id /* block */)arg3;
- (id)_upgradeCardUIViewControllerWithContext:(id)arg1 vm:(id)arg2 completion:(id /* block */)arg3;
- (id)_upgradeViewControllerWithContext:(id)arg1 vm:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)cancelActionHandler;
- (void)cancelTapped:(id)arg1;
- (id /* block */)continueActionHandler;
- (void)continueTapped:(id)arg1;
- (void)dealloc;
- (void)promptForCancelWithContext:(id)arg1 vm:(id)arg2 completion:(id /* block */)arg3;
- (void)promptForUpgradeWithContext:(id)arg1 vm:(id)arg2 completion:(id /* block */)arg3;
- (void)promptIneligibilityWithContext:(id)arg1 vm:(id)arg2 completion:(id /* block */)arg3;
- (void)setCancelActionHandler:(id /* block */)arg1;
- (void)setContinueActionHandler:(id /* block */)arg1;

@end
