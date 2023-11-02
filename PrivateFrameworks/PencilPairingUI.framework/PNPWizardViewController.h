
@interface PNPWizardViewController : UINavigationController <PNPWelcomeControllerDelegate> {
    UIColor * _backgroundColor;
    long long  _deviceType;
    bool  _showingWhatsNew;
    PKTextInputSettings * _textInputSettings;
    <PNPWizardViewDelegate> * _wizardDelegate;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long deviceType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showingWhatsNew;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKTextInputSettings *textInputSettings;
@property (nonatomic) <PNPWizardViewDelegate> *wizardDelegate;

+ (struct CGSize { double x1; double x2; })preferredContentSize;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)backgroundColor;
- (long long)deviceType;
- (void)prepareForPresentation;
- (void)setBackgroundColor:(id)arg1;
- (void)setDeviceType:(long long)arg1;
- (void)setShowingWhatsNew:(bool)arg1;
- (void)setTextInputSettings:(id)arg1;
- (void)setWizardDelegate:(id)arg1;
- (bool)showingWhatsNew;
- (id)textInputSettings;
- (void)viewDidLoad;
- (void)welcomeControllerButtonDidPress:(id)arg1;
- (id)welcomeControllerWithType:(long long)arg1 buttonType:(long long)arg2 deviceType:(long long)arg3;
- (id)wizardDelegate;

@end
