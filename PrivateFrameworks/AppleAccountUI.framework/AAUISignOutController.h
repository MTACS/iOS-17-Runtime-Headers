
@interface AAUISignOutController : UINavigationController <AAUIDataclassPickerViewControllerDelegate> {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    long long  _currentStyle;
    NSDictionary * _dataclassOptions;
    bool  _hasiCloudDriveData;
    bool  _hasiCloudPhotosData;
}

@property (setter=_setAccountStore:, nonatomic, retain) ACAccountStore *_accountStore;
@property (setter=_setDataclassOptions:, nonatomic, copy) NSDictionary *_dataclassOptions;
@property (nonatomic, readonly) ACAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUISignOutControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hasiCloudDriveData;
@property (nonatomic) bool hasiCloudPhotosData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accountStore;
- (id)_actionableDataclassOptions;
- (id)_appendToSignoutMessage:(id)arg1 appendedString:(id)arg2;
- (id)_dataclassOptions;
- (id)_dataclassViewController;
- (void)_delegate_signOutControllerDidCancel;
- (void)_delegate_signOutControllerDidCompleteWithSuccess:(bool)arg1 error:(id)arg2;
- (bool)_hasPaymentPasses;
- (bool)_hasiCloudDriveData;
- (bool)_hasiCloudPhotosData;
- (void)_mainQueue_continueSignOutWithDataclassActions:(id)arg1;
- (void)_mainQueue_presentSpinnerPageWithDataclassActions:(id)arg1 completion:(id /* block */)arg2;
- (void)_mainQueue_promptForConfirmationInViewController:(id)arg1 simplified:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_setAccountStore:(id)arg1;
- (void)_setDataclassOptions:(id)arg1;
- (id)_signOutMessageSimplified:(bool)arg1 withConfirmation:(bool)arg2;
- (id)_spinnerViewControllerForActions:(id)arg1;
- (id)account;
- (void)dataclassPickerViewController:(id)arg1 didCompleteWithDataclassActions:(id)arg2;
- (void)dataclassPickerViewControllerDidCancel:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)footerTextForDataclassPickerViewController:(id)arg1;
- (bool)hasiCloudDriveData;
- (bool)hasiCloudPhotosData;
- (id)initWithAccount:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageTextForDataclassPickerViewController:(id)arg1;
- (void)prepareInViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)setHasiCloudDriveData:(bool)arg1;
- (void)setHasiCloudPhotosData:(bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)titleTextForDataclassPickerViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
