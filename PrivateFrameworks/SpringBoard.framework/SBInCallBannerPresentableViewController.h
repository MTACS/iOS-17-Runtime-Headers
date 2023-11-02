
@interface SBInCallBannerPresentableViewController : UIViewController <BSInvalidatable, SBBannerManagerPresentable, SBButtonEventsHandler, SBDeviceApplicationSceneHandleObserver> {
    <SBInCallBannerPresentableViewControllerDelegate> * _delegate;
    bool  _didCrossDefaultDraggingThreshold;
    SBSUIInCallSceneClientSettingsDiffInspector * _inCallSceneClientSettingsDiffInspector;
    <BNPanGestureProxy> * _lastGestureProxy;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredBannerContentSize;
    bool  _presented;
    SBDeviceApplicationSceneHandle * _sceneHandle;
    SBDeviceApplicationSceneViewController * _sceneViewController;
    SBSceneViewStatusBarAssertion * _statusBarHiddenAssertion;
}

@property (getter=isCallConnected, nonatomic, readonly) bool callConnected;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBInCallBannerPresentableViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDraggingDismissalEnabled, nonatomic, readonly) bool draggingDismissalEnabled;
@property (getter=isDraggingInteractionEnabled, nonatomic, readonly) bool draggingInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredBannerContentSize;
@property (nonatomic, readonly) long long presentableBehavior;
@property (nonatomic) <BNPresentableContext> *presentableContext;
@property (nonatomic, readonly) long long presentableType;
@property (getter=isPresented, nonatomic, readonly) bool presented;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly, copy) NSString *requesterIdentifier;
@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly) Class superclass;
@property (getter=isTouchOutsideDismissalEnabled, nonatomic, readonly) bool touchOutsideDismissalEnabled;
@property (nonatomic, readonly) UIViewController *viewController;

+ (double)cornerRadius;
+ (id)requesterIdentifier;

- (void).cxx_destruct;
- (void)_callConnectedStatusChanged;
- (bool)_canShowWhileLocked;
- (void)_handlePanGestureProxyAction:(id)arg1;
- (void)_handleTapAction:(id)arg1;
- (id)_inCallSceneClientSettingsDiffInspector;
- (void)dealloc;
- (id)delegate;
- (void)draggingDidBeginWithGestureProxy:(id)arg1;
- (bool)handleHeadsetButtonPress:(bool)arg1;
- (bool)handleHomeButtonDoublePress;
- (bool)handleHomeButtonLongPress;
- (bool)handleHomeButtonPress;
- (bool)handleLockButtonPress;
- (bool)handleVoiceCommandButtonPress;
- (bool)handleVolumeDownButtonPress;
- (bool)handleVolumeUpButtonPress;
- (id)initWithSceneHandle:(id)arg1;
- (void)invalidate;
- (bool)isCallConnected;
- (bool)isDraggingDismissalEnabled;
- (bool)isDraggingInteractionEnabled;
- (bool)isPresented;
- (bool)isTouchOutsideDismissalEnabled;
- (struct CGSize { double x1; double x2; })preferredBannerContentSize;
- (struct CGSize { double x1; double x2; })preferredContentSizeWithPresentationSize:(struct CGSize { double x1; double x2; })arg1 containerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)presentableDidAppearAsBanner:(id)arg1;
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (void)presentableWillAppearAsBanner:(id)arg1;
- (void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (id)requestIdentifier;
- (id)requesterIdentifier;
- (id)sceneHandle;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setPreferredBannerContentSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldDismissForReason:(id)arg1;
- (struct CGPoint { double x1; double x2; })translationInCoordinateSpace:(id)arg1;
- (void)userInteractionDidEndForBannerForPresentable:(id)arg1;
- (void)userInteractionWillBeginForBannerForPresentable:(id)arg1;
- (struct CGPoint { double x1; double x2; })velocityInCoordinateSpace:(id)arg1;
- (id)viewController;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (struct CGPoint { double x1; double x2; })visualTranslationInCoordinateSpace:(id)arg1;

@end
