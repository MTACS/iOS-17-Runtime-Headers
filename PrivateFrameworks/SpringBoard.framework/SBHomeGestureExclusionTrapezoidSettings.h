
@interface SBHomeGestureExclusionTrapezoidSettings : PTSettings {
    bool  _allowHorizontalSwipesOutsideLandscapeTrapezoid;
    bool  _allowHorizontalSwipesOutsidePortraitTrapezoid;
    double  _landscapeTrapezoidAdjacentXDistanceFromEdge;
    double  _landscapeTrapezoidBaseHeight;
    bool  _landscapeTrapezoidEnabled;
    double  _landscapeTrapezoidHeight;
    double  _landscapeTrapezoidOpposingXDistanceFromEdge;
    double  _portraitTrapezoidAdjacentXDistanceFromEdge;
    double  _portraitTrapezoidBaseHeight;
    bool  _portraitTrapezoidEnabled;
    bool  _portraitTrapezoidEnabledOnlyForKeyboards;
    double  _portraitTrapezoidHeight;
    double  _portraitTrapezoidOpposingXDistanceFromEdge;
    bool  _showExclusionTrapezoidDebugView;
}

@property (nonatomic) bool allowHorizontalSwipesOutsideLandscapeTrapezoid;
@property (nonatomic) bool allowHorizontalSwipesOutsidePortraitTrapezoid;
@property (nonatomic) double landscapeTrapezoidAdjacentXDistanceFromEdge;
@property (nonatomic) double landscapeTrapezoidBaseHeight;
@property (nonatomic) bool landscapeTrapezoidEnabled;
@property (nonatomic) double landscapeTrapezoidHeight;
@property (nonatomic) double landscapeTrapezoidOpposingXDistanceFromEdge;
@property (nonatomic) double portraitTrapezoidAdjacentXDistanceFromEdge;
@property (nonatomic) double portraitTrapezoidBaseHeight;
@property (nonatomic) bool portraitTrapezoidEnabled;
@property (nonatomic) bool portraitTrapezoidEnabledOnlyForKeyboards;
@property (nonatomic) double portraitTrapezoidHeight;
@property (nonatomic) double portraitTrapezoidOpposingXDistanceFromEdge;
@property (nonatomic) bool showExclusionTrapezoidDebugView;

+ (id)settingsControllerModule;

- (bool)allowHorizontalSwipesOutsideLandscapeTrapezoid;
- (bool)allowHorizontalSwipesOutsidePortraitTrapezoid;
- (double)landscapeTrapezoidAdjacentXDistanceFromEdge;
- (double)landscapeTrapezoidBaseHeight;
- (bool)landscapeTrapezoidEnabled;
- (double)landscapeTrapezoidHeight;
- (double)landscapeTrapezoidOpposingXDistanceFromEdge;
- (double)portraitTrapezoidAdjacentXDistanceFromEdge;
- (double)portraitTrapezoidBaseHeight;
- (bool)portraitTrapezoidEnabled;
- (bool)portraitTrapezoidEnabledOnlyForKeyboards;
- (double)portraitTrapezoidHeight;
- (double)portraitTrapezoidOpposingXDistanceFromEdge;
- (void)setAllowHorizontalSwipesOutsideLandscapeTrapezoid:(bool)arg1;
- (void)setAllowHorizontalSwipesOutsidePortraitTrapezoid:(bool)arg1;
- (void)setDefaultValues;
- (void)setLandscapeTrapezoidAdjacentXDistanceFromEdge:(double)arg1;
- (void)setLandscapeTrapezoidBaseHeight:(double)arg1;
- (void)setLandscapeTrapezoidEnabled:(bool)arg1;
- (void)setLandscapeTrapezoidHeight:(double)arg1;
- (void)setLandscapeTrapezoidOpposingXDistanceFromEdge:(double)arg1;
- (void)setPortraitTrapezoidAdjacentXDistanceFromEdge:(double)arg1;
- (void)setPortraitTrapezoidBaseHeight:(double)arg1;
- (void)setPortraitTrapezoidEnabled:(bool)arg1;
- (void)setPortraitTrapezoidEnabledOnlyForKeyboards:(bool)arg1;
- (void)setPortraitTrapezoidHeight:(double)arg1;
- (void)setPortraitTrapezoidOpposingXDistanceFromEdge:(double)arg1;
- (void)setShowExclusionTrapezoidDebugView:(bool)arg1;
- (bool)showExclusionTrapezoidDebugView;

@end
