
@interface LAPSPasscodeOptionsAlertViewController : UIAlertController <LAPSPasscodeOptionsViewController> {
    LAPSPasscodeOptionsViewControllerConfiguration * _config;
    <LAPSPasscodeOptionsViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LAPSPasscodeOptionsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addActionForPasscodeType:(id)arg1;
- (void)_addActionForRecoveryEnabled:(bool)arg1 restricted:(bool)arg2;
- (void)_addActionWithTitle:(id)arg1 style:(long long)arg2 completion:(id /* block */)arg3;
- (bool)_canShowWhileLocked;
- (void)_dismiss;
- (void)_setActionWithTitle:(id)arg1 enabled:(bool)arg2;
- (void)_setup;
- (id)delegate;
- (id)initWithConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
