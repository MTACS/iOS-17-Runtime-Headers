
@interface _MPCPlayerSeekCommand : _MPCPlayerItemCommand <MPCPlayerSeekCommand> {
    NSArray * _preferredBackwardJumpIntervals;
    NSArray * _preferredForwardJumpIntervals;
    bool  _prefersNegativeBackwardSkipIntervals;
    unsigned long long  _seekSupport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *preferredBackwardJumpIntervals;
@property (nonatomic, copy) NSArray *preferredForwardJumpIntervals;
@property (nonatomic) bool prefersNegativeBackwardSkipIntervals;
@property (nonatomic, readonly) unsigned long long seekSupport;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_seekCommandWithMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2;
- (id)beginSeekWithDirection:(long long)arg1;
- (id)changePositionToElapsedInterval:(double)arg1;
- (id)endSeek;
- (id)initWithResponse:(id)arg1 seekSupport:(unsigned long long)arg2;
- (id)jumpByInterval:(double)arg1;
- (id)preferredBackwardJumpIntervals;
- (id)preferredForwardJumpIntervals;
- (bool)prefersNegativeBackwardSkipIntervals;
- (unsigned long long)seekSupport;
- (void)setPreferredBackwardJumpIntervals:(id)arg1;
- (void)setPreferredForwardJumpIntervals:(id)arg1;
- (void)setPrefersNegativeBackwardSkipIntervals:(bool)arg1;

@end
