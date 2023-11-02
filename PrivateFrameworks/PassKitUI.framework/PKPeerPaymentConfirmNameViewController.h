
@interface PKPeerPaymentConfirmNameViewController : PKPaymentSetupFieldsViewController <PKPaymentSetupViewControllerDelegate> {
    UIBarButtonItem * _cancelButton;
    long long  _context;
    <PKPeerPaymentConfirmNameViewControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
    PKFamilyMember * _familyMember;
    bool  _showSpinner;
    UIBarButtonItem * _spinnerButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPeerPaymentConfirmNameViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelPressed;
- (void)_continue;
- (void)_donePressed;
- (id)delegate;
- (id)initWithFamilyMember:(id)arg1 delegate:(id)arg2 context:(long long)arg3;
- (void)setDelegate:(id)arg1;
- (void)showSpinner:(bool)arg1;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidLoad;

@end
