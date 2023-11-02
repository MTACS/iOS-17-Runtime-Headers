
@interface NCNotificationPresentableViewController : UIViewController <BNPresentable, NCNotificationViewControllerObserving> {
    int  _bannerAppearState;
    bool  _canPan;
    <NCNotificationPresentableViewControllerDelegate> * _delegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialBannerFrame;
    NCNotificationViewController * _notificationViewController;
    <BNPanGestureProxy> * _panGestureProxy;
    bool  _panPresentation;
    long long  _presentationState;
    bool  _readyForPanGestureProxy;
}

@property (nonatomic, readonly) int bannerAppearState;
@property (getter=_canPan, setter=_setCanPan:, nonatomic) bool canPan;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationPresentableViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDragging, nonatomic, readonly) bool dragging;
@property (getter=isDraggingDismissalEnabled, nonatomic, readonly) bool draggingDismissalEnabled;
@property (getter=isDraggingInteractionEnabled, nonatomic, readonly) bool draggingInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (getter=_initialBannerFrame, setter=_setInitialBannerFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialBannerFrame;
@property (nonatomic, readonly) NCNotificationViewController *notificationViewController;
@property (getter=_panGestureProxy, setter=_setPanGestureProxy:, nonatomic) <BNPanGestureProxy> *panGestureProxy;
@property (getter=_isPanPresentation, setter=_setPanPresentation:, nonatomic) bool panPresentation;
@property (nonatomic, readonly) long long presentableBehavior;
@property (nonatomic) <BNPresentableContext> *presentableContext;
@property (nonatomic, readonly) long long presentableType;
@property (getter=_presentationState, setter=_setPresentationState:, nonatomic) long long presentationState;
@property (getter=_isReadyForPanGestureProxy, setter=_setReadyForPanGestureProxy:, nonatomic) bool readyForPanGestureProxy;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly, copy) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (getter=isTouchOutsideDismissalEnabled, nonatomic, readonly) bool touchOutsideDismissalEnabled;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (bool)_canPan;
- (bool)_canShowWhileLocked;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_initialBannerFrame;
- (bool)_isAppearingOrAppeared;
- (bool)_isPanPresentation;
- (bool)_isReadyForPanGestureProxy;
- (id)_panGestureProxy;
- (long long)_presentationState;
- (void)_setCanPan:(bool)arg1;
- (void)_setInitialBannerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setPanGestureProxy:(id)arg1;
- (void)_setPanPresentation:(bool)arg1;
- (void)_setPresentationState:(long long)arg1;
- (void)_setReadyForPanGestureProxy:(bool)arg1;
- (int)bannerAppearState;
- (bool)becomeFirstResponder;
- (bool)bn_shouldAnimateViewTransitionToSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (id)customBackgroundContainerViewForExpandedPlatterPresentationController:(id)arg1;
- (id)delegate;
- (id)description;
- (void)draggingDidBeginWithGestureProxy:(id)arg1;
- (id)initWithNotificationViewController:(id)arg1;
- (bool)isDragging;
- (bool)isDraggingDismissalEnabled;
- (bool)isDraggingInteractionEnabled;
- (void)longLookDidDismissForNotificationViewController:(id)arg1;
- (void)longLookDidPresentForNotificationViewController:(id)arg1;
- (void)longLookWillDismissForNotificationViewController:(id)arg1;
- (void)longLookWillPresentForNotificationViewController:(id)arg1;
- (id)notificationViewController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSizeWithPresentationSize:(struct CGSize { double x1; double x2; })arg1 containerSize:(struct CGSize { double x1; double x2; })arg2;
- (id)presentableDescription;
- (void)presentableDidAppearAsBanner:(id)arg1;
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (void)presentableWillAppearAsBanner:(id)arg1;
- (void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (void)presentableWillNotAppearAsBanner:(id)arg1 withReason:(id)arg2;
- (id)requestIdentifier;
- (id)requesterIdentifier;
- (bool)resignFirstResponder;
- (void)setDelegate:(id)arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)userInteractionDidEndForBannerForPresentable:(id)arg1;
- (void)userInteractionWillBeginForBannerForPresentable:(id)arg1;
- (id)viewController;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
