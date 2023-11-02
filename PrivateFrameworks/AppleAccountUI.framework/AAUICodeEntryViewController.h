
@interface AAUICodeEntryViewController : DevicePINController <DevicePINControllerDelegate> {
    AAUICodeEntryContext * _context;
    NSString * _pinInstructions;
}

@property (nonatomic, retain) AAUICodeEntryContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_disableUserInteractionAndStartSpinner;
- (void)_enableUserInteractionAndStopSpinner;
- (void)_showIncorrectCodeAlert;
- (id)context;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (id)initWithContext:(id)arg1;
- (id)pinInstructionsPrompt;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setContext:(id)arg1;
- (void)setPane:(id)arg1;
- (bool)showSimplePINCancelButtonOnLeft;
- (bool)simplePIN;
- (id)stringsBundle;
- (id)title;
- (bool)validatePIN:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
