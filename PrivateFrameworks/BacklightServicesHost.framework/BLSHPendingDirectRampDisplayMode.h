
@interface BLSHPendingDirectRampDisplayMode : BLSHPendingTwoPhaseUpdateDisplayMode {
    double  _duration;
    long long  _rampBeginDisplayMode;
    bool  _readyToStart;
}

@property double duration;
@property (readonly) long long rampBeginDisplayMode;
@property (getter=isReadyToStart) bool readyToStart;

- (id)description;
- (double)duration;
- (id)initWithRampBeginDisplayMode:(long long)arg1 targetDisplayMode:(long long)arg2;
- (bool)isDirectRamp;
- (bool)isReadyToStart;
- (long long)rampBeginDisplayMode;
- (id)rampOperation;
- (void)setDuration:(double)arg1;
- (void)setReadyToStart:(bool)arg1;
- (id)updateOperation;

@end
