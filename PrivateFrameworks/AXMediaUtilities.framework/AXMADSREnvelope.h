
@interface AXMADSREnvelope : NSObject {
    double  _attackLevel;
    double  _attackMS;
    double  _decayMS;
    double  _releaseMS;
    double  _sustainLevel;
    double  _sustainMS;
}

@property (nonatomic) double attackLevel;
@property (nonatomic) double attackMS;
@property (nonatomic) double decayMS;
@property (nonatomic, readonly) double lengthMS;
@property (nonatomic) double releaseMS;
@property (nonatomic) double sustainLevel;
@property (nonatomic) double sustainMS;

+ (id)defaultEnvelope;

- (double)attackLevel;
- (double)attackMS;
- (id)copy;
- (double)decayMS;
- (id)init;
- (id)initWithAttackDuration:(double)arg1 attackLevel:(double)arg2 decayDuration:(double)arg3 sustainDuration:(double)arg4 sustainLevel:(double)arg5 releaseDuration:(double)arg6;
- (double)lengthMS;
- (double)levelForTime:(double)arg1;
- (double)releaseMS;
- (void)setAttackLevel:(double)arg1;
- (void)setAttackMS:(double)arg1;
- (void)setDecayMS:(double)arg1;
- (void)setReleaseMS:(double)arg1;
- (void)setSustainLevel:(double)arg1;
- (void)setSustainMS:(double)arg1;
- (double)sustainLevel;
- (double)sustainMS;

@end
