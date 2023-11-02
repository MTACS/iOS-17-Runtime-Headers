
@interface SBHStackConfigurationApertureAnimator : NSObject <SBHViewControllerTransitionAnimating> {
    bool  _alreadyAnimating;
    NSSet * _innerWidgetBackgroundViews;
    SBHWidgetSettings * _widgetSettings;
}

@property (getter=isAlreadyAnimating, nonatomic) bool alreadyAnimating;
@property (nonatomic, copy) NSSet *innerWidgetBackgroundViews;
@property (nonatomic, readonly) SBHWidgetSettings *widgetSettings;

- (void).cxx_destruct;
- (void)_configureApertureBackgroundViewsForEndpoint:(long long)arg1 withCoordinator:(id)arg2;
- (void)_configureForEndpoint:(long long)arg1 scroll:(bool)arg2 withCoordinator:(id)arg3;
- (void)_configureInnerWidgetBackgroundViewsForEndpoint:(long long)arg1 withCoordinator:(id)arg2;
- (void)_configureWidgetStackMatchingBackgroundViewForEndpoint:(long long)arg1 withCoordinator:(id)arg2;
- (void)_removeMatchMoveAnimationFromTargetView:(id)arg1;
- (void)_setupMatchMoveAnimationWithSourceView:(id)arg1 targetView:(id)arg2;
- (bool)_shouldUseCenterZoomTransitionForCoordinator:(id)arg1;
- (void)animateToEndpoint:(long long)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)finalizeAnimationAtEndpoint:(long long)arg1 withContext:(id)arg2;
- (id)init;
- (id)innerWidgetBackgroundViews;
- (bool)isAlreadyAnimating;
- (void)prepareToAnimateFromEndpoint:(long long)arg1 withContext:(id)arg2;
- (void)setAlreadyAnimating:(bool)arg1;
- (void)setInnerWidgetBackgroundViews:(id)arg1;
- (id)widgetSettings;

@end
