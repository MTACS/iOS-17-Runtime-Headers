
@interface KeychainSyncSetupController : PSSetupController {
    PSKeychainSyncManager * _manager;
}

- (void).cxx_destruct;
- (void)cancelPressed;
- (id)initWithManager:(id)arg1;
- (void)showController:(id)arg1;

@end
