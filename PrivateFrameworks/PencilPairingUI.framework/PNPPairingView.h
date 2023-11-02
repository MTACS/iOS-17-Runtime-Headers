
@interface PNPPairingView : UIView <PNPChargingStatusViewHosting, PNPDeviceStateConfigurable, PNPWizardViewDelegatePrivate> {
    PNPChargingStatusView * _chargingStatusView;
    <PNPPairingViewDelegate> * _delegate;
    PNPDeviceState * _deviceState;
    long long  _deviceType;
    bool  _finishedWizardTransition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _pencilSpinningRect;
    PNPPencilView * _pencilView;
    bool  _shouldShowWhatsNew;
    bool  _showWizardContents;
    bool  _showsChargingStatusView;
    unsigned long long  _state;
    PNPWizardViewController * _wizardViewController;
}

@property (nonatomic, retain) PNPChargingStatusView *chargingStatusView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PNPPairingViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) PNPDeviceState *deviceState;
@property (nonatomic) long long deviceType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PNPPencilView *pencilView;
@property (nonatomic) bool shouldShowWhatsNew;
@property (nonatomic) bool showWizardContents;
@property (nonatomic) bool showsChargingStatusView;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) PNPWizardViewController *wizardViewController;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_intrinsicContentSizeForState:(unsigned long long)arg1 deviceState:(id)arg2;
- (struct CGSize { double x1; double x2; })_pencilSizeForState:(unsigned long long)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_pencilTransformForState:(unsigned long long)arg1 deviceState:(id)arg2;
- (id)backgroundColorForWizardController:(id)arg1;
- (id)chargingStatusView;
- (id)delegate;
- (id)deviceState;
- (long long)deviceType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)pencilView;
- (void)prepareForTransitionToWizard;
- (void)setChargingStatusView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceState:(id)arg1;
- (void)setDeviceType:(long long)arg1;
- (void)setShouldShowWhatsNew:(bool)arg1;
- (void)setShowWizardContents:(bool)arg1;
- (void)setShowsChargingStatusView:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setWizardViewController:(id)arg1;
- (bool)shouldShowWhatsNew;
- (bool)shouldShowWhatsNewController;
- (bool)showWizardContents;
- (bool)showsChargingStatusView;
- (unsigned long long)state;
- (void)transitionToWizard;
- (void)unhideWizardIfNecessary;
- (void)wizardTransitionFinished;
- (id)wizardViewController;
- (void)wizardViewRequestsDismiss:(id)arg1;

@end
