
@interface SuddenChangeParameters : NSObject {
    double  durationThresholdDownward;
    double  durationThresholdUpward;
    int  margin;
    int  minMarginRequired;
    int  minSamplesCount;
    int  minSamplesCountFastBandwidthEstimation;
    double  percentage;
}

@property (nonatomic) double durationThresholdDownward;
@property (nonatomic) double durationThresholdUpward;
@property (nonatomic) int margin;
@property (nonatomic) int minMarginRequired;
@property (nonatomic) int minSamplesCount;
@property (nonatomic) int minSamplesCountFastBandwidthEstimation;
@property (nonatomic) double percentage;

- (double)durationThresholdDownward;
- (double)durationThresholdUpward;
- (int)margin;
- (int)minMarginRequired;
- (int)minSamplesCount;
- (int)minSamplesCountFastBandwidthEstimation;
- (double)percentage;
- (void)setDurationThresholdDownward:(double)arg1;
- (void)setDurationThresholdUpward:(double)arg1;
- (void)setMargin:(int)arg1;
- (void)setMinMarginRequired:(int)arg1;
- (void)setMinSamplesCount:(int)arg1;
- (void)setMinSamplesCountFastBandwidthEstimation:(int)arg1;
- (void)setPercentage:(double)arg1;

@end
