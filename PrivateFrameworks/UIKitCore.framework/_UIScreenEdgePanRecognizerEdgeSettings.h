
@interface _UIScreenEdgePanRecognizerEdgeSettings : _UISettings {
    double  _bottomEdgeRegionSize;
    double  _edgeAngleWindow;
    double  _edgeAngleWindowDecayTime;
    double  _edgeRegionSize;
    double  _hysteresis;
    double  _maximumSwipeDuration;
}

@property (nonatomic) double bottomEdgeRegionSize;
@property (nonatomic) double edgeAngleWindow;
@property (nonatomic) double edgeAngleWindowDecayTime;
@property (nonatomic) double edgeAngleWindowDegreees;
@property (nonatomic) double edgeRegionSize;
@property (nonatomic) double hysteresis;
@property (nonatomic) double maximumSwipeDuration;

+ (id)keyPathsForValuesAffectingEdgeAngleWindowDegreees;
+ (id)settingsControllerModule;

- (double)bottomEdgeRegionSize;
- (double)edgeAngleWindow;
- (double)edgeAngleWindowDecayTime;
- (double)edgeAngleWindowDegreees;
- (double)edgeRegionSize;
- (double)hysteresis;
- (double)maximumSwipeDuration;
- (void)setBottomEdgeRegionSize:(double)arg1;
- (void)setDefaultValues;
- (void)setEdgeAngleWindow:(double)arg1;
- (void)setEdgeAngleWindowDecayTime:(double)arg1;
- (void)setEdgeAngleWindowDegreees:(double)arg1;
- (void)setEdgeRegionSize:(double)arg1;
- (void)setHysteresis:(double)arg1;
- (void)setMaximumSwipeDuration:(double)arg1;

@end
