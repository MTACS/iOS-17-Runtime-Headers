
@interface Settings.SettingsExtensionHostViewController : NSObject <_EXHostViewControllerDelegate> {
    void extensionProxies;
    void viewController;
}

- (void).cxx_destruct;
- (void)hostViewController:(id)arg1 didBeginHosting:(id)arg2;
- (void)hostViewController:(id)arg1 didEndHosting:(id)arg2 error:(id)arg3;
- (void)hostViewControllerDidActivate:(id)arg1;
- (id)init;

@end
