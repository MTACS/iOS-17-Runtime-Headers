
@interface TIDebugValue : NSObject {
    float  defaultValue;
    float  stepSize;
    float  sweepMax;
    float  sweepMin;
    float  sweepValue;
}

@property (nonatomic) float defaultValue;
@property (nonatomic) float stepSize;
@property (nonatomic) float sweepMax;
@property (nonatomic) float sweepMin;
@property (nonatomic) float sweepValue;

- (float)defaultValue;
- (void)setDefaultValue:(float)arg1;
- (void)setStepSize:(float)arg1;
- (void)setSweepMax:(float)arg1;
- (void)setSweepMin:(float)arg1;
- (void)setSweepValue:(float)arg1;
- (float)stepSize;
- (float)sweepMax;
- (float)sweepMin;
- (float)sweepValue;

@end
