
@interface SBSAContextMutator : NSObject {
    SBSAContext * _context;
}

@property (getter=isAccessibilityZoomActiveAndEnabled, nonatomic) bool accessibilityZoomActiveAndEnabled;
@property (getter=isAnimatedTransitionInProgress, nonatomic) bool animatedTransitionInProgress;
@property (nonatomic, copy) NSArray *animatedTransitionResults;
@property (nonatomic) long long cloningStyle;
@property (nonatomic, copy) SBSAViewDescription *containerParentViewDescription;
@property (nonatomic, copy) NSArray *containerViewDescriptions;
@property (nonatomic, readonly) SBSAContext *context;
@property (nonatomic, copy) SBSADefaultsContext *defaultsContext;
@property (nonatomic) double displayScale;
@property (nonatomic, copy) NSArray *elapsedTimerDescriptions;
@property (nonatomic, copy) NSArray *elementContexts;
@property (nonatomic, copy) NSArray *elementSnapshotContexts;
@property (nonatomic) unsigned long long flags;
@property (nonatomic, copy) NSArray *gestureDescriptions;
@property (getter=isHeavyShadowRequiredForTransition, nonatomic) bool heavyShadowRequiredForTransition;
@property (getter=isIndicatorVisible, nonatomic) bool indicatorVisible;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inertContainerFrame;
@property (getter=isKeyLineRequiredForTransition, nonatomic) bool keyLineRequiredForTransition;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } landscapeScreenEdgeInsets;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) unsigned long long maximumNumberOfElements;
@property (nonatomic) unsigned long long minimumNumberOfContainers;
@property (nonatomic) long long overrideRenderingStyle;
@property (nonatomic) SBSAPlatformMetricsContext *platformMetrics;
@property (nonatomic, copy) SBSAPreferences *preferences;
@property (getter=isReduceTransparencyEnabled, nonatomic) bool reduceTransparencyEnabled;
@property (nonatomic, copy) NSArray *requests;
@property (nonatomic) unsigned long long signals;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } systemContainerBounds;

- (void).cxx_destruct;
- (id)animatedTransitionResults;
- (long long)cloningStyle;
- (id)containerParentViewDescription;
- (id)containerViewDescriptions;
- (id)context;
- (id)defaultsContext;
- (id)description;
- (double)displayScale;
- (id)elapsedTimerDescriptions;
- (id)elementContexts;
- (id)elementSnapshotContexts;
- (unsigned long long)flags;
- (id)gestureDescriptions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inertContainerFrame;
- (id)initWithContext:(id)arg1;
- (bool)isAccessibilityZoomActiveAndEnabled;
- (bool)isAnimatedTransitionInProgress;
- (bool)isHeavyShadowRequiredForTransition;
- (bool)isIndicatorVisible;
- (bool)isKeyLineRequiredForTransition;
- (bool)isReduceTransparencyEnabled;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })landscapeScreenEdgeInsets;
- (long long)layoutDirection;
- (unsigned long long)maximumNumberOfElements;
- (unsigned long long)minimumNumberOfContainers;
- (long long)overrideRenderingStyle;
- (id)platformMetrics;
- (id)preferences;
- (id)requests;
- (void)setAccessibilityZoomActiveAndEnabled:(bool)arg1;
- (void)setAnimatedTransitionInProgress:(bool)arg1;
- (void)setAnimatedTransitionResults:(id)arg1;
- (void)setCloningStyle:(long long)arg1;
- (void)setContainerParentViewDescription:(id)arg1;
- (void)setContainerViewDescriptions:(id)arg1;
- (void)setDefaultsContext:(id)arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setElapsedTimerDescriptions:(id)arg1;
- (void)setElementContexts:(id)arg1;
- (void)setElementSnapshotContexts:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setGestureDescriptions:(id)arg1;
- (void)setHeavyShadowRequiredForTransition:(bool)arg1;
- (void)setIndicatorVisible:(bool)arg1;
- (void)setInertContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setKeyLineRequiredForTransition:(bool)arg1;
- (void)setLandscapeScreenEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLayoutDirection:(long long)arg1;
- (void)setMaximumNumberOfElements:(unsigned long long)arg1;
- (void)setMinimumNumberOfContainers:(unsigned long long)arg1;
- (void)setOverrideRenderingStyle:(long long)arg1;
- (void)setPlatformMetrics:(id)arg1;
- (void)setPreferences:(id)arg1;
- (void)setReduceTransparencyEnabled:(bool)arg1;
- (void)setRequests:(id)arg1;
- (void)setSignals:(unsigned long long)arg1;
- (void)setSystemContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)signals;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })systemContainerBounds;

@end
