
@interface SBUIPasscodeLockNumberPad : UIView <CAAnimationDelegate, SBNumberPadDelegate, UIPointerInteractionDelegate> {
    double  _ancillaryButtonOffset;
    NSArray * _auxiliaryButtonConstrainingConstraints;
    SBUIButton * _backspaceButton;
    NSLayoutConstraint * _backspaceButtonConstraintCenterX;
    SBUIButton * _cancelButton;
    NSLayoutConstraint * _cancelButtonConstraintCenterX;
    UIColor * _customBackgroundColor;
    <SBUIPasscodeLockNumberPadDelegate> * _delegate;
    UIControl<SBUIPasscodeNumberPadButton> * _downButton;
    NSLayoutConstraint * _emergencyButtonConstraintCenterX;
    SBUIButton * _emergencyCallButton;
    SBNumberPadWithDelegate * _numberPad;
    UIColor * _reduceTransparencyButtonColor;
    bool  _showsBackspaceButton;
    bool  _showsCancelButton;
    bool  _showsEmergencyCallButton;
    bool  _snapshotsDisabled;
    bool  _useLightStyle;
    bool  _visible;
}

@property (nonatomic) double ancillaryButtonOffset;
@property (nonatomic, readonly) SBUIButton *backspaceButton;
@property (nonatomic, readonly) NSArray *buttons;
@property (nonatomic, readonly) SBUIButton *cancelButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBUIPasscodeLockNumberPadDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIControl<SBUIPasscodeNumberPadButton> *downButton;
@property (nonatomic, readonly) SBUIButton *emergencyCallButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *reduceTransparencyButtonColor;
@property (nonatomic) bool showsBackspaceButton;
@property (nonatomic) bool showsCancelButton;
@property (nonatomic) bool showsEmergencyCallButton;
@property (readonly) Class superclass;

+ (id)_buttonForCharacter:(long long)arg1 withLightStyle:(bool)arg2;
+ (struct CGSize { double x1; double x2; })_inputButtonCircleSize;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_inputButtonCircleSpacing;

- (void).cxx_destruct;
- (double)_auxiliaryButtonCenteringOffset;
- (void)_backspaceButtonHit;
- (void)_cancelButtonHit;
- (void)_configureAdditionalButtons;
- (double)_distanceToTopOfFirstButton;
- (void)_emergencyCallButtonHit;
- (id)_fontForAncillaryButton;
- (bool)_holdsAuxiliaryButtonsWithinPadBounds;
- (void)_numberPadTouchCancelled:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchDown:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchDrag:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchUp:(id)arg1 forEvent:(id)arg2;
- (void)_setSnapshotsDisabled:(bool)arg1;
- (void)_updateAuxiliaryButtonConstraints;
- (double)ancillaryButtonOffset;
- (id)backspaceButton;
- (id)buttons;
- (id)cancelButton;
- (id)delegate;
- (id)downButton;
- (id)emergencyCallButton;
- (id)initWithDefaultSizeAndLightStyle:(bool)arg1;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)reduceTransparencyButtonColor;
- (void)setAncillaryButtonOffset:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownButton:(id)arg1;
- (void)setReduceTransparencyButtonColor:(id)arg1;
- (void)setShowsBackspaceButton:(bool)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (void)setShowsEmergencyCallButton:(bool)arg1;
- (void)setVisible:(bool)arg1 animated:(bool)arg2;
- (bool)showsBackspaceButton;
- (bool)showsCancelButton;
- (bool)showsEmergencyCallButton;
- (void)traitCollectionDidChange:(id)arg1;

@end
