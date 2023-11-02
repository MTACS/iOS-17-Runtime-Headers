
@interface SBHWidgetInsertionRippleIconAnimator : NSObject <SBIconViewObserver> {
    SBIconListView * _additionalIconListView;
    id /* block */  _animationCompletion;
    CADisplayLink * _displayLink;
    NSMapTable * _gridCoordinateForIcons;
    SBIconListView * _iconListView;
    bool  _keepsJumpingIconAboveListViewAsLongAsPossible;
    UIView * _portalContainerView;
    NSMapTable * _portalViewsForIconViews;
    id /* block */  _preludeBlock;
    SBIconView * _referenceIconView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _referenceIconViewOriginInWindow;
    UIView * _rippleIconsPortalContainerView;
    UIView * _rippleIconsPortalContainerViewForAdditionalIconListView;
    SBHRippleSimulation * _rippleSimulation;
    unsigned long long  _rowOffset;
    SBHWidgetSettings * _settings;
    bool  _startedAnimation;
    SBWidgetIcon * _widgetIcon;
    _UIPortalView * _widgetIconPortalView;
    bool  _widgetIconSizeIsLarge;
    SBIconView * _widgetIconView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool keepsJumpingIconAboveListViewAsLongAsPossible;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_centerOfIconViewAssumingCenteredAnchorPoint:(id)arg1;
- (void)_createPortalViewsForIconViews;
- (void)_createPortalViewsForIconViewsInIconListView:(id)arg1 dropIconListView:(id)arg2 withPortalContainerView:(id)arg3 widgetIconCenter:(struct CGPoint { double x1; double x2; })arg4;
- (void)_displayLinkFired:(id)arg1;
- (void)_finishRippleAnimation;
- (void)_finishRippleAnimationEarlyForIconView:(id)arg1;
- (void)_layoutRippleIconViews;
- (void)_performJumpAnimationWithCompletion:(id /* block */)arg1;
- (void)_performWidgetIconScaleOvershootAnimation;
- (void)_playImpactHapticAfterDelay:(double)arg1;
- (void)_reparentPortalViewIntoIconListViewAfterDelay:(double)arg1;
- (void)_reparentPortalViewIntoIconListViewNow;
- (void)_startRippleAnimationNow;
- (void)_startRippleAnimationWithDelay:(double)arg1;
- (void)animateWithCompletion:(id /* block */)arg1;
- (void)iconViewDidBecomeWindowless:(id)arg1;
- (void)iconViewWasDiscarded:(id)arg1;
- (void)iconViewWasRecycled:(id)arg1;
- (id)initWithIconListView:(id)arg1 widgetIcon:(id)arg2 referenceLayout:(id)arg3 referenceIconView:(id)arg4 additionalIconListView:(id)arg5 preludeBlock:(id /* block */)arg6;
- (bool)keepsJumpingIconAboveListViewAsLongAsPossible;
- (void)setKeepsJumpingIconAboveListViewAsLongAsPossible:(bool)arg1;

@end
