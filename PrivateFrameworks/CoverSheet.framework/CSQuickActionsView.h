
@interface CSQuickActionsView : SBFTouchPassThroughView <PTSettingsKeyObserver, SBFCustomImplicitPropertyAnimating> {
    CSQuickActionsButton * _cameraButton;
    <CSQuickActionsDelegate> * _delegate;
    CSQuickActionsButton * _flashlightButton;
    bool  _flashlightOn;
    _UILegibilitySettings * _legibilitySettings;
    CSDashBoardQuickActionsButtonSettings * _quickActionsSettings;
    NSArray * animatedLayerProperties;
}

@property (nonatomic, copy) NSArray *animatedLayerProperties;
@property (nonatomic, retain) CSQuickActionsButton *cameraButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSQuickActionsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CSQuickActionsButton *flashlightButton;
@property (nonatomic) bool flashlightOn;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) CSDashBoardQuickActionsButtonSettings *quickActionsSettings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addOrRemoveCameraButtonIfNecessary;
- (void)_addOrRemoveFlashlightButtonIfNecessary;
- (void)_addTargetsToButton:(id)arg1;
- (id)_buttonGroupName;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_buttonOutsets;
- (double)_insetX;
- (double)_insetY;
- (void)_layoutQuickActionButtons;
- (bool)_prototypingAllowsButtons;
- (void)_removeTargetsFromButton:(id)arg1;
- (void)_setButtonBackgroundVisible:(bool)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateButtonBackgroundVisible;
- (id)animatedLayerProperties;
- (id)cameraButton;
- (id)delegate;
- (id)flashlightButton;
- (bool)flashlightOn;
- (void)handleButtonPress:(id)arg1;
- (void)handleButtonTouchBegan:(id)arg1;
- (void)handleButtonTouchEnded:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 delegate:(id)arg2;
- (bool)interpretsLocationAsContent:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)quickActionsSettings;
- (void)refreshFlashlightAvailability;
- (void)refreshSupportedButtons;
- (void)setAnimatedLayerProperties:(id)arg1;
- (void)setCameraButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFlashlightButton:(id)arg1;
- (void)setFlashlightOn:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setQuickActionsSettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
