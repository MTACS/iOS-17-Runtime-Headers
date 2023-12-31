
@protocol MPCPlayerSeekCommand <MPCPlayerCommand>

@required

- (MPCPlayerCommandRequest *)beginSeekWithDirection:(long long)arg1;
- (MPCPlayerCommandRequest *)changePositionToElapsedInterval:(double)arg1;
- (MPCPlayerCommandRequest *)endSeek;
- (MPCPlayerCommandRequest *)jumpByInterval:(double)arg1;
- (NSArray *)preferredBackwardJumpIntervals;
- (NSArray *)preferredForwardJumpIntervals;

@end
