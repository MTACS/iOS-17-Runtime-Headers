
@interface CDPUICustodianCodeEntryViewController : DevicePINController <DevicePINControllerDelegate> {
    CDPContext * _cdpContext;
    NSString * _pinInstructions;
    CDPUICodeEntryViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_disableUserInteractionAndStartSpinner;
- (void)_enableUserInteractionAndStopSpinner;
- (id)_makeViewDidAppearEvent;
- (void)didAcceptEnteredPIN:(id)arg1;
- (id)initWithViewModel:(id)arg1 cdpContext:(id)arg2;
- (id)pinInstructionsPrompt;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setPane:(id)arg1;
- (bool)showSimplePINCancelButtonOnLeft;
- (bool)simplePIN;
- (id)stringsBundle;
- (bool)validatePIN:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
