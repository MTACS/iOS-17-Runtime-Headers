
@interface PXRequestedEDRHeadroomFactorFilter : PXNumberFilter {
    double  _highValue;
    double  _lastDecreaseTime;
    double  _sustainDuration;
}

@property (nonatomic) double highValue;
@property (nonatomic) double lastDecreaseTime;
@property (getter=isPaused, nonatomic, readonly) bool paused;
@property (nonatomic) double sustainDuration;

- (double)highValue;
- (id)initWithInput:(double)arg1;
- (bool)isPaused;
- (double)lastDecreaseTime;
- (void)setHighValue:(double)arg1;
- (void)setInput:(double)arg1;
- (void)setLastDecreaseTime:(double)arg1;
- (void)setSustainDuration:(double)arg1;
- (double)sustainDuration;
- (double)updatedOutput;

@end
