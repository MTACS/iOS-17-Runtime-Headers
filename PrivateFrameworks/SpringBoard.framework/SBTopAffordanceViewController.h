
@interface SBTopAffordanceViewController : UIViewController <SBAffordancePresenceControllerDelegate, SBTopAffordanceDotsViewDelegate, SBTransientUIIndirectPanToDismissParticipant, SBTransientUITapToDismissParticipant, _UILumaTrackingBackdropViewDelegate> {
    UIAction * _addToSetAction;
    double  _additionalTopInset;
    SBAffordancePresenceController * _affordancePresenceController;
    bool  _autoHides;
    UIAction * _closeAction;
    <SBTopAffordanceViewControllerDelegate> * _delegate;
    SBTopAffordanceDotsView * _dotsView;
    UIAction * _fullScreenAction;
    bool  _highlighted;
    bool  _isSystemPointerInteractionEnabled;
    _UILumaTrackingBackdropView * _lumaTrackingView;
    UIAction * _maximizationAction;
    UIMenu * _menu;
    UIAction * _moveToDisplayAction;
    bool  _override_layoutStatePrimaryApplicationSupportsMedusa;
    bool  _override_multipleSwitcherControllersAvailable;
    UIAction * _primarySplitAction;
    UIAction * _removeFromSetAction;
    SBDeviceApplicationSceneHandle * _sceneHandle;
    UIAction * _sideSplitAction;
    UIAction * _slideOverAction;
    UIAction * _splitViewAction;
    UIMenu * _splitViewMenu;
    BSSpringAnimationSettings * _styleSettings;
}

@property (nonatomic, readonly) UIAction *addToSetAction;
@property (nonatomic) double additionalTopInset;
@property (nonatomic) bool autoHides;
@property (nonatomic, readonly) UIAction *closeAction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBTopAffordanceViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBTopAffordanceDotsView *dotsView;
@property (getter=isExpanded, nonatomic, readonly) bool expanded;
@property (nonatomic, readonly) UIAction *fullScreenAction;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (getter=isLumaTrackingEnabled, nonatomic) bool lumaTrackingEnabled;
@property (nonatomic, readonly) _UILumaTrackingBackdropView *lumaTrackingView;
@property (nonatomic, readonly) UIAction *maximizationAction;
@property (nonatomic, readonly) UIMenu *menu;
@property (nonatomic, readonly) UIAction *moveToDisplayAction;
@property (nonatomic, readonly) UIAction *primarySplitAction;
@property (nonatomic, readonly) UIAction *removeFromSetAction;
@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *sceneHandle;
@property (nonatomic, readonly) UIAction *sideSplitAction;
@property (nonatomic, readonly) UIAction *slideOverAction;
@property (nonatomic, readonly) UIAction *splitViewAction;
@property (nonatomic, readonly) UIMenu *splitViewMenu;
@property (nonatomic, retain) BSSpringAnimationSettings *styleSettings;
@property (readonly) Class superclass;

+ (id)imageForAction:(long long)arg1 interfaceOrientation:(long long)arg2;
+ (id)landscapeImageNameForAction:(long long)arg1;
+ (id)portraitImageNameForAction:(long long)arg1;
+ (id)symbolConfiguration;

- (void).cxx_destruct;
- (bool)_applicationIsInOrCanMoveToSplitViewFromLayoutRole:(long long)arg1;
- (bool)_applicationSupportsAnyAffordanceActions;
- (bool)_applicationSupportsMedusa;
- (double)_defaultCenterYOffset;
- (bool)_dismissIfNeededWithLocation:(struct CGPoint { double x1; double x2; })arg1 window:(id)arg2;
- (void)_emitAnalyticsEventForMenuInteraction:(long long)arg1;
- (bool)_isChamoisWindowingUIEnabled;
- (bool)_layoutStatePrimaryApplicationSupportsMedusa;
- (id)_localizedMenuTitleForKey:(id)arg1;
- (void)_lockScreenUIDidLock:(id)arg1;
- (id)_makeDotsView;
- (id)_makeLumaTrackingView;
- (id)_makePillBackgroundContainerView;
- (id)_makePillContentsView;
- (bool)_multipleSwitcherControllersAvailable;
- (void)_setLayoutStatePrimaryApplicationSupportsMedusa:(bool)arg1;
- (void)_setMultipleSwitcherControllersAvailable:(bool)arg1;
- (void)_setSystemPointerInteractionEnabled:(bool)arg1;
- (id)_switcherController;
- (void)_updateStyleForOverrideUserInterfaceStyle;
- (id)addToSetAction;
- (double)additionalTopInset;
- (void)affordancePresenceController:(id)arg1 didChangeToPresence:(long long)arg2;
- (bool)autoHides;
- (void)backgroundLumaView:(id)arg1 didTransitionToLevel:(unsigned long long)arg2;
- (id)closeAction;
- (void)dealloc;
- (id)delegate;
- (void)dismissAnimated:(bool)arg1;
- (id)dotsView;
- (id)fullScreenAction;
- (id)initWithDeviceApplicationSceneHandle:(id)arg1;
- (bool)isExpanded;
- (bool)isHidden;
- (bool)isHighlighted;
- (bool)isLumaTrackingEnabled;
- (void)loadView;
- (id)lumaTrackingView;
- (id)maximizationAction;
- (id)menu;
- (id)moveToDisplayAction;
- (id)primarySplitAction;
- (id)removeFromSetAction;
- (id)sceneHandle;
- (void)setAdditionalTopInset:(double)arg1;
- (void)setAutoHides:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHidden:(bool)arg1 forReason:(id)arg2 animated:(bool)arg3;
- (void)setHighlighted:(bool)arg1;
- (void)setLumaTrackingEnabled:(bool)arg1;
- (void)setOverrideUserInterfaceStyle:(long long)arg1;
- (void)setStyleSettings:(id)arg1;
- (bool)shouldAutorotate;
- (id)sideSplitAction;
- (id)slideOverAction;
- (id)splitViewAction;
- (id)splitViewMenu;
- (id)styleSettings;
- (void)topAffordanceDotsViewWillDismissMenu:(id)arg1;
- (void)topAffordanceDotsViewWillPresentMenu:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transientUI:(id)arg1 wasIndirectPannedToDismissFromGestureRecognizer:(id)arg2;
- (bool)transientUIHandledTouch:(id)arg1 withSystemGestureRecognizer:(id)arg2;
- (void)updateContextMenuWithLayoutRole:(long long)arg1 spaceConfiguration:(long long)arg2 floatingConfiguration:(long long)arg3 interfaceOrientation:(long long)arg4 isZoomed:(bool)arg5;
- (void)viewDidLoad;

@end
