
@interface _UISheetPresentationMetrics : NSObject

@property (nonatomic, readonly) bool alwaysStacksWithChild;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) bool exclusivelyUsesZPositionForTransform;
@property (nonatomic, readonly) bool fadeOutIfAnyDescendantWantsFullScreen;
@property (nonatomic, readonly) double maximumSheetDepthLevel;
@property (nonatomic, readonly) double minimumSidePadding;
@property (nonatomic, readonly) double topOffset;
@property (nonatomic, readonly) double topOffsetInCompactHeight;
@property (nonatomic, readonly) double transitionDuration;
@property (nonatomic, readonly) bool wantsDimming;

+ (id)_defaultMetrics;

- (id)_init;
- (void)addAlongsideAnimations:(id)arg1 forSheetTransition:(id)arg2 context:(id)arg3;
- (bool)alwaysStacksWithChild;
- (void)configureDropShadowView:(id)arg1 state:(id)arg2 presentationController:(id)arg3;
- (double)cornerRadius;
- (struct CGSize { double x1; double x2; })defaultFormSheetSizeForScreenSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)exclusivelyUsesZPositionForTransform;
- (bool)fadeOutIfAnyDescendantWantsFullScreen;
- (struct CGSize { double x1; double x2; })formSheetSizeForViewController:(id)arg1 windowSize:(struct CGSize { double x1; double x2; })arg2 screenSize:(struct CGSize { double x1; double x2; })arg3;
- (double)maximumSheetDepthLevel;
- (double)minimumSidePadding;
- (bool)shouldScaleDownBehindDescendantsForContainer:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)topOffset;
- (double)topOffsetInCompactHeight;
- (double)transitionDuration;
- (id)transitionSpringParametersHighSpeed:(bool)arg1;
- (bool)wantsDimming;

@end
