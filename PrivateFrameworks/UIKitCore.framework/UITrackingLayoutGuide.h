
@interface UITrackingLayoutGuide : UILayoutGuide {
    bool  _animatesChanges;
    bool  _animatingConstraintsChange;
    double  _animationDuration;
    unsigned long long  _animationOptions;
    NSMutableDictionary * _awayFromConstraintsByEdge;
    bool  _constrainedToWindowGuide;
    NSMutableDictionary * _nearEdgeConstraintsByEdge;
    unsigned long long  _overlappingEdges;
    long long  _owningViewInterfaceLayoutDirection;
    unsigned long long  _pausedEdges;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _triggerInsetsForLandscape;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _triggerInsetsForPortrait;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _triggerProportions;
}

@property (nonatomic) bool animatesChanges;
@property (nonatomic) bool animatingConstraintsChange;
@property (nonatomic) double animationDuration;
@property (nonatomic) unsigned long long animationOptions;
@property (nonatomic, retain) NSMutableDictionary *awayFromConstraintsByEdge;
@property (nonatomic) bool constrainedToWindowGuide;
@property (nonatomic, readonly) NSDictionary *edgeConstraints;
@property (nonatomic, retain) NSMutableDictionary *nearEdgeConstraintsByEdge;
@property (nonatomic) unsigned long long overlappingEdges;
@property (nonatomic) long long owningViewInterfaceLayoutDirection;
@property (nonatomic) unsigned long long pausedEdges;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } triggerInsetsForLandscape;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } triggerInsetsForPortrait;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } triggerProportions;

- (void).cxx_destruct;
- (void)_createThresholdsFromProportions;
- (bool)_isRTL;
- (id)_keysFromEdges:(unsigned long long)arg1;
- (id)_keysInvolvingEdges:(unsigned long long)arg1;
- (void)_layoutOwningViewAnimated:(bool)arg1;
- (void)_setOwningView:(id)arg1;
- (void)_thresholdCheck;
- (void)_thresholdCheckForGuide:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_updateForOverlappingEdges:(unsigned long long)arg1;
- (bool)animatesChanges;
- (bool)animatingConstraintsChange;
- (double)animationDuration;
- (unsigned long long)animationOptions;
- (id)awayFromConstraintsByEdge;
- (bool)changeOffsetConstants:(struct UIOffset { double x1; double x2; })arg1;
- (bool)changeSizingConstants:(struct CGSize { double x1; double x2; })arg1;
- (bool)constrainedToWindowGuide;
- (id)constraintsActiveWhenAwayFromEdge:(unsigned long long)arg1;
- (id)constraintsActiveWhenNearEdge:(unsigned long long)arg1;
- (id)edgeConstraints;
- (void)enableAnimations:(bool)arg1;
- (id)init;
- (id)nearEdgeConstraintsByEdge;
- (unsigned long long)overlappingEdges;
- (long long)owningViewInterfaceLayoutDirection;
- (void)pauseUpdatingConstraintsForEdges:(unsigned long long)arg1;
- (unsigned long long)pausedEdges;
- (void)removeAllTrackedConstraints;
- (void)resetAnimationOptions;
- (void)setAnimatesChanges:(bool)arg1;
- (void)setAnimatingConstraintsChange:(bool)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setAnimationOptions:(unsigned long long)arg1;
- (void)setAwayFromConstraintsByEdge:(id)arg1;
- (void)setConstrainedToWindowGuide:(bool)arg1;
- (void)setConstraints:(id)arg1 activeWhenAwayFromEdge:(unsigned long long)arg2;
- (void)setConstraints:(id)arg1 activeWhenNearEdge:(unsigned long long)arg2;
- (void)setEdgeThresholds:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forOrientation:(long long)arg2;
- (void)setNearEdgeConstraintsByEdge:(id)arg1;
- (void)setOverlappingEdges:(unsigned long long)arg1;
- (void)setOwningViewInterfaceLayoutDirection:(long long)arg1;
- (void)setPausedEdges:(unsigned long long)arg1;
- (void)setProportionalEdgeThresholds:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTriggerInsetsForLandscape:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTriggerInsetsForPortrait:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTriggerProportions:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)startUpdatingConstraintsForEdges:(unsigned long long)arg1;
- (void)stopTrackingConstraintsForEdge:(unsigned long long)arg1;
- (void)trackConstraintsFromViewBasedGuide:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })triggerInsetsForLandscape;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })triggerInsetsForPortrait;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })triggerProportions;
- (void)updateAnimationDuration:(double)arg1 options:(unsigned long long)arg2;
- (void)updateConstraintsForActiveEdges;

@end
