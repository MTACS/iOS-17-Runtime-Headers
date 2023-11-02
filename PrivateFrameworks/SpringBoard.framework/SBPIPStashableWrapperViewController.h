
@interface SBPIPStashableWrapperViewController : UIViewController <PTSettingsKeyPathObserver> {
    UIView * _containerView;
    UIView * _contentView;
    UIViewController * _contentViewController;
    double  _cornerRadiusMetric;
    <SBPIPStashableWrapperViewControllerDelegate> * _delegate;
    unsigned long long  _inFlightStashProgressAnimationIdentifier;
    unsigned long long  _inFlightStashTabAnimationIdentifier;
    bool  _interactivelyResizing;
    SBPortalView * _leftSideContentPortalView;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumStashTabSize;
    SBPortalView * _rightSideContentPortalView;
    SBPIPStashVisualSettings * _settings;
    SBPIPShadowSettings * _shadowSettings;
    UIView * _shadowView;
    SBPIPStashedMaskView * _stashMaskView;
    bool  _stashTabHidden;
    bool  _stashTabShownLeft;
    SBPIPStashView * _stashView;
    bool  _stashed;
    UITapGestureRecognizer * _stashedTapGestureRecognizer;
    UIView * _tabShadowView;
}

@property (nonatomic, readonly) UIView *contentContainerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBPIPStashableWrapperViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInteractivelyResizing, nonatomic) bool interactivelyResizing;
@property (nonatomic, readonly) bool isStashTabHidden;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumStashTabSize;
@property (nonatomic) bool stashed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addMaskViewSubviewIfNeeded;
- (void)_applyDropShadowSettings:(id)arg1 toView:(id)arg2;
- (double)_continuousCornerRadius;
- (void)_handleTapWhileStashedGestureRecognizer:(id)arg1;
- (void)_layoutStashTabViewsIfNeeded;
- (id)_newShadowViewWithSettings:(id)arg1;
- (void)_resetStashTabViewsIfPossible;
- (void)_setPortalActive:(bool)arg1 left:(bool)arg2;
- (void)_setStashMaskActive:(bool)arg1;
- (void)_setStashProgress:(double)arg1 animated:(bool)arg2;
- (void)_setStashedTabHidden:(bool)arg1 left:(bool)arg2;
- (void)_updateContentCornerRadiusForMaskActive:(bool)arg1;
- (id)contentContainerView;
- (void)dealloc;
- (id)delegate;
- (id)initWithContentViewController:(id)arg1 cornerRadius:(double)arg2 stashVisualSettings:(id)arg3 shadowSettings:(id)arg4;
- (bool)isInteractivelyResizing;
- (bool)isStashTabHidden;
- (void)loadView;
- (struct CGSize { double x1; double x2; })minimumStashTabSize;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)setDelegate:(id)arg1;
- (void)setInteractivelyResizing:(bool)arg1;
- (void)setMinimumStashTabSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStashProgress:(double)arg1;
- (void)setStashTabHidden:(bool)arg1 left:(bool)arg2 withSpringBehavior:(id)arg3 completion:(id /* block */)arg4;
- (void)setStashed:(bool)arg1;
- (void)setStashed:(bool)arg1 animated:(bool)arg2;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (bool)stashed;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
