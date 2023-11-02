
@interface SBSiriHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction, SiriLongPressButtonSourceDelegate> {
    double  _activationInterval;
    double  _initialPressDownTime;
    SiriLongPressButtonSource * _siriActivationSource;
    <SiriAssertion> * _siriButtonDownAssertion;
    long long  _siriButtonIdentifier;
    <SiriAssertion> * _siriPreheatAssertion;
}

@property (nonatomic) double activationInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initialPressDownTime;
@property (nonatomic, retain) SiriLongPressButtonSource *siriActivationSource;
@property (nonatomic, retain) <SiriAssertion> *siriButtonDownAssertion;
@property (nonatomic) long long siriButtonIdentifier;
@property (nonatomic, retain) <SiriAssertion> *siriPreheatAssertion;
@property (readonly) Class superclass;

+ (bool)dismissSiriTransientOverlayOnSinglePressUp:(long long)arg1;
+ (id)hardwareButtonInteractionForHomeButton;
+ (id)hardwareButtonInteractionForLockButton;
+ (id)hardwareButtonInteractionForVoiceCommandButton;

- (void).cxx_destruct;
- (void)_cancelAllSiriActions;
- (void)_cancelPreheating;
- (void)_preheatSiriForPresentationAfterInterval:(double)arg1;
- (void)_siriHomeButtonPrefsDidChange:(id)arg1;
- (double)activationInterval;
- (void)configurationDidUpdateOnLongPressSource:(id)arg1;
- (bool)consumeInitialPressDown;
- (bool)consumeLongPress;
- (bool)consumeSinglePressUp;
- (id)hardwareButtonGestureParameters;
- (id)initWithSiriButton:(long long)arg1;
- (double)initialPressDownTime;
- (void)observeFinalPressUp;
- (void)observeLongPressCanceled;
- (void)setActivationInterval:(double)arg1;
- (void)setInitialPressDownTime:(double)arg1;
- (void)setSiriActivationSource:(id)arg1;
- (void)setSiriButtonDownAssertion:(id)arg1;
- (void)setSiriButtonIdentifier:(long long)arg1;
- (void)setSiriPreheatAssertion:(id)arg1;
- (id)siriActivationSource;
- (id)siriButtonDownAssertion;
- (long long)siriButtonIdentifier;
- (id)siriPreheatAssertion;

@end
