
@interface TSProximityPINCodeViewController : TSOBWelcomeController <TSSetupFlowItem> {
    <TSSIMSetupFlowDelegate> * _delegate;
    bool  _isIdleTimerDisabled;
    NSString * _pin;
    UILabel * _pinCodeLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isIdleTimerDisabled;
@property (retain) NSString *pin;
@property (nonatomic, retain) UILabel *pinCodeLabel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithPIN:(id)arg1;
- (bool)isIdleTimerDisabled;
- (id)pin;
- (id)pinCodeLabel;
- (void)setDelegate:(id)arg1;
- (void)setIsIdleTimerDisabled:(bool)arg1;
- (void)setPin:(id)arg1;
- (void)setPinCodeLabel:(id)arg1;
- (void)updatePIN:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
