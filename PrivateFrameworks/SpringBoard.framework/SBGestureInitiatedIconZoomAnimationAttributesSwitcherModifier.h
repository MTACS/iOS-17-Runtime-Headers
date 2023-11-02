
@interface SBGestureInitiatedIconZoomAnimationAttributesSwitcherModifier : SBSwitcherModifier {
    SBAppLayout * _appLayout;
    unsigned long long  _gestureEdge;
    unsigned long long  _iconGridSizeClass;
    struct CGPoint { 
        double x; 
        double y; 
    }  _liftOffVelocity;
    bool  _overshootScaleForWidgetZoomDown;
}

- (void).cxx_destruct;
- (id)_layoutSettings;
- (double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom;
- (id)_positionSettings;
- (id)_scaleSettings;
- (id)_settingsByInterpolatingBetween:(id)arg1 and:(id)arg2 progress:(double)arg3;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithAppLayout:(id)arg1 gestureEdge:(unsigned long long)arg2 liftOffVelocity:(struct CGPoint { double x1; double x2; })arg3;
- (double)scaleForIndex:(unsigned long long)arg1;

@end
