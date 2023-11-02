
@interface SBShelfExpansionSwitcherModifier : SBTransitionSwitcherModifier {
    <SBShelfExpansionSwitcherModifierDelegate> * _animationDelegate;
    double  _bezierCurvePointYDeltaFromTarget;
    double  _bezierCurveScaleExponent;
    double  _bezierCurveXExponent;
    double  _bezierCurveYExponent;
    unsigned long long  _cached_appLayoutsGenCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _cached_scrollViewContentOffset;
    NSArray * _cached_visibleOrderedAppLayouts;
    double  _dismissalScale;
    bool  _expand;
    double  _perIndexResponseIncrement;
    SBFFluidBehaviorSettings * _ropeSettings;
    SBFFluidBehaviorSettings * _settings;
    unsigned long long  _style;
    struct CGPoint { 
        double x; 
        double y; 
    }  _target;
    unsigned long long  _topMostLayoutElements_lastAppLayoutsGenCount;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _topMostLayoutElements_lastContainerViewBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _topMostLayoutElements_lastContentOffset;
    NSArray * _topMostLayoutElements_lastElements;
    long long  _topMostLayoutElements_lastOrientation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _topMostLayoutElements_lastSwitcherViewBounds;
}

@property (nonatomic, readonly) <SBShelfExpansionSwitcherModifierDelegate> *animationDelegate;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_bezierPointFromTime:(double)arg1 start:(struct CGPoint { double x1; double x2; })arg2 target:(struct CGPoint { double x1; double x2; })arg3;
- (bool)_isEffectivelyInShelf;
- (bool)_isMovingFromLeadingToTrailing;
- (double)_presentationValueForIndex:(unsigned long long)arg1;
- (id)_visibleOrderedAppLayouts;
- (id)animatablePropertyIdentifiers;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)animationDelegate;
- (void)didMoveToParentModifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleAnimatablePropertyChangedEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 expand:(bool)arg2 style:(unsigned long long)arg3 target:(struct CGPoint { double x1; double x2; })arg4 animationDelegate:(id)arg5;
- (bool)isFocusEnabledForAppLayout:(id)arg1;
- (double)modelValueForAnimatableProperty:(id)arg1 currentValue:(double)arg2 creating:(bool)arg3;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)settingsForAnimatableProperty:(id)arg1;
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;
- (double)shelfBackgroundBlurOpacity;
- (bool)shouldInterruptForRemovalEvent:(id)arg1;
- (bool)shouldUpdateAnimatableProperty:(id)arg1;
- (id)topMostLayoutElements;
- (unsigned long long)transactionCompletionOptions;
- (id)transitionWillBegin;
- (long long)updateModeForAnimatableProperty:(id)arg1;

@end
