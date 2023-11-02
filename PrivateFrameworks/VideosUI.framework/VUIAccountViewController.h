
@interface VUIAccountViewController : UIViewController <AAUISignInControllerDelegate> {
    void $__lazy_storage_$_accountSettingsViewController;
    void $__lazy_storage_$_signInController;
    void activeViewController;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)signInController:(id)arg1 didCompleteWithOperationsResults:(id)arg2;
- (void)signInControllerDidCancel:(id)arg1;
- (void)signInControllerDidSkip:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
