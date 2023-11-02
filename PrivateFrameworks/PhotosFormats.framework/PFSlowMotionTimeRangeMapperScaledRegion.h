
@interface PFSlowMotionTimeRangeMapperScaledRegion : NSObject {
    float  _rampInEndTime;
    float  _rampInStartTime;
    float  _rampOutEndTime;
    float  _rampOutStartTime;
    float  _rate;
}

@property (nonatomic) float rampInEndTime;
@property (nonatomic) float rampInStartTime;
@property (nonatomic) float rampOutEndTime;
@property (nonatomic) float rampOutStartTime;
@property (nonatomic) float rate;

- (float)rampInEndTime;
- (float)rampInStartTime;
- (float)rampOutEndTime;
- (float)rampOutStartTime;
- (float)rate;
- (void)setRampInEndTime:(float)arg1;
- (void)setRampInStartTime:(float)arg1;
- (void)setRampOutEndTime:(float)arg1;
- (void)setRampOutStartTime:(float)arg1;
- (void)setRate:(float)arg1;

@end
