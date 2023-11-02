
@interface AMSUIToastPresentationController : UIPresentationController <_UIHyperInteractorDelegate> {
    double  _dismissDelayTimeInterval;
    NSTimer * _dismissalTimer;
    _UIHyperrectangle * _interactiveRegion;
    _UIHyperInteractor * _interactor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastFrameOfPresentedViewInContainerView;
    UIPanGestureRecognizer * _panRecognizer;
    NSArray * _passthroughViews;
    UITabBarController * _relativeTabBarController;
    bool  _showing;
    AMSUITouchForwardingView * _touchForwardingView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double dismissDelayTimeInterval;
@property (nonatomic, retain) NSTimer *dismissalTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIHyperrectangle *interactiveRegion;
@property (nonatomic, readonly) _UIHyperInteractor *interactor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastFrameOfPresentedViewInContainerView;
@property (nonatomic, retain) UIPanGestureRecognizer *panRecognizer;
@property (nonatomic, retain) NSArray *passthroughViews;
@property (nonatomic, retain) UITabBarController *relativeTabBarController;
@property (getter=isShowing, nonatomic) bool showing;
@property (readonly) Class superclass;
@property (nonatomic, retain) AMSUITouchForwardingView *touchForwardingView;

- (void).cxx_destruct;
- (double)_bottomMargin;
- (void)_didPanPresentedView:(id)arg1;
- (void)_dismissTimerFired:(id)arg1;
- (void)_dismissToast;
- (void)_hyperInteractorApplyPresentationPoint:(id)arg1;
- (void)_setupPanGestureRecognizer;
- (void)_setupPassthroughView;
- (void)_startDismissTimer;
- (double)_yOffset;
- (void)containerViewWillLayoutSubviews;
- (double)dismissDelayTimeInterval;
- (id)dismissalTimer;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)interactiveRegion;
- (id)interactor;
- (bool)isShowing;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastFrameOfPresentedViewInContainerView;
- (id)panRecognizer;
- (id)passthroughViews;
- (long long)presentationStyle;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)relativeTabBarController;
- (void)setDismissDelayTimeInterval:(double)arg1;
- (void)setDismissalTimer:(id)arg1;
- (void)setLastFrameOfPresentedViewInContainerView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPanRecognizer:(id)arg1;
- (void)setPassthroughViews:(id)arg1;
- (void)setRelativeTabBarController:(id)arg1;
- (void)setShowing:(bool)arg1;
- (void)setTouchForwardingView:(id)arg1;
- (id)touchForwardingView;
- (void)traitCollectionDidChange:(id)arg1;

@end
