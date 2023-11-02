
@interface ASCredentialRequestEnableICloudKeychainViewController : ASCredentialRequestPaneViewController {
    bool  _canKeychainSyncBeEnabled;
}

- (void)_turnOnICloudKeychain;
- (id)init;
- (void)viewDidLoad;

@end
