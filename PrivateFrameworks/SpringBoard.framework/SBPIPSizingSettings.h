
@interface SBPIPSizingSettings : PTSettings {
    double  _landcapeAspectRatioClosedIntervalLowerBound;
    double  _landcapeAspectRatioClosedIntervalUpperBound;
    double  _portraitAspectRatioClosedIntervalLowerBound;
    double  _portraitAspectRatioClosedIntervalUpperBound;
    double  _squareAspectRatioClosedIntervalLowerBound;
    double  _squareAspectRatioClosedIntervalUpperBound;
}

@property (nonatomic) double landcapeAspectRatioClosedIntervalLowerBound;
@property (nonatomic) double landcapeAspectRatioClosedIntervalUpperBound;
@property (nonatomic) double portraitAspectRatioClosedIntervalLowerBound;
@property (nonatomic) double portraitAspectRatioClosedIntervalUpperBound;
@property (nonatomic) double squareAspectRatioClosedIntervalLowerBound;
@property (nonatomic) double squareAspectRatioClosedIntervalUpperBound;

+ (id)settingsControllerModule;

- (double)landcapeAspectRatioClosedIntervalLowerBound;
- (double)landcapeAspectRatioClosedIntervalUpperBound;
- (double)portraitAspectRatioClosedIntervalLowerBound;
- (double)portraitAspectRatioClosedIntervalUpperBound;
- (void)setDefaultValues;
- (void)setLandcapeAspectRatioClosedIntervalLowerBound:(double)arg1;
- (void)setLandcapeAspectRatioClosedIntervalUpperBound:(double)arg1;
- (void)setPortraitAspectRatioClosedIntervalLowerBound:(double)arg1;
- (void)setPortraitAspectRatioClosedIntervalUpperBound:(double)arg1;
- (void)setSquareAspectRatioClosedIntervalLowerBound:(double)arg1;
- (void)setSquareAspectRatioClosedIntervalUpperBound:(double)arg1;
- (double)squareAspectRatioClosedIntervalLowerBound;
- (double)squareAspectRatioClosedIntervalUpperBound;

@end
