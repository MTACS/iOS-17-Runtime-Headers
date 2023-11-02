
@interface AVPresentationContainerView : UIView {
    bool  _beingDismissed;
    bool  _beingPresented;
    bool  _counterRotatingContentView;
    long long  _fromOrientation;
    UIView * _presentationContainerContentView;
    long long  _toOrientation;
    bool  _wantsAppearanceConfigValues;
    bool  _willBeginOrientationChange;
}

@property (nonatomic, readonly) AVPresentationContainerViewAppearanceProxy *appearanceProxy;
@property (getter=isBeingDismissed, nonatomic) bool beingDismissed;
@property (getter=isBeingPresented, nonatomic) bool beingPresented;
@property (getter=isCounterRotatingContentView, nonatomic) bool counterRotatingContentView;
@property (nonatomic) long long fromOrientation;
@property (nonatomic, readonly) AVPresentationContainerViewLayer *layer;
@property (nonatomic) UIView *presentationContainerContentView;
@property (nonatomic) long long toOrientation;
@property (nonatomic) bool wantsAppearanceConfigValues;
@property (nonatomic) bool willBeginOrientationChange;

+ (Class)layerClass;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_contentTransform;
- (double)_continuousCornerRadius;
- (double)_cornerRadius;
- (double)_radiansForCounterRotation;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1;
- (id)appearanceProxy;
- (bool)avkit_isBeingDismissed;
- (bool)avkit_isBeingPresented;
- (bool)avkit_isCounterRotatedForTransition;
- (bool)avkit_isVideoGravityFrozen;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })avkit_overrideLayoutMarginsForCounterRotation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })avkit_overrideLayoutMarginsForInterfaceOrientation:(long long)arg1;
- (void)didStopTransition;
- (long long)fromOrientation;
- (bool)isBeingDismissed;
- (bool)isBeingPresented;
- (bool)isCounterRotatingContentView;
- (void)layoutSubviews;
- (id)presentationContainerContentView;
- (void)setBackgroundColor:(id)arg1;
- (void)setBeingDismissed:(bool)arg1;
- (void)setBeingPresented:(bool)arg1;
- (void)setClipsToBounds:(bool)arg1;
- (void)setCounterRotatingContentView:(bool)arg1;
- (void)setFromOrientation:(long long)arg1;
- (void)setPresentationContainerContentView:(id)arg1;
- (void)setToOrientation:(long long)arg1;
- (void)setWantsAppearanceConfigValues:(bool)arg1;
- (void)setWillBeginOrientationChange:(bool)arg1;
- (long long)toOrientation;
- (bool)wantsAppearanceConfigValues;
- (void)willBeginAdjustingOrientation;
- (bool)willBeginOrientationChange;
- (void)willStartDismissalTransitionFromInterfaceOrientation:(long long)arg1 toOrientation:(long long)arg2 needsCounterRotation:(bool)arg3;
- (void)willStartPresentationTransitionFromInterfaceOrientation:(long long)arg1 toOrientation:(long long)arg2 needsCounterRotation:(bool)arg3;

@end
