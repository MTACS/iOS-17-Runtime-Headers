
@protocol MusicKit_SoftLinking_MPCPlayerSeekCommand <NSObject>

@required

- (<MusicKit_SoftLinking_MPCPlayerCommandRequest> *)musicKit_seekCommand_beginSeekCommandRequestWithDirection:(long long)arg1;
- (<MusicKit_SoftLinking_MPCPlayerCommandRequest> *)musicKit_seekCommand_changePositionCommandRequestToElapsedInterval:(double)arg1;
- (<MusicKit_SoftLinking_MPCPlayerCommandRequest> *)musicKit_seekCommand_endSeekCommandRequest;
- (<MusicKit_SoftLinking_MPCPlayerCommandRequest> *)musicKit_seekCommand_jumpCommandRequestByInterval:(double)arg1;
- (NSNumber *)musicKit_seekCommand_preferredBackwardJumpInterval;
- (NSNumber *)musicKit_seekCommand_preferredForwardJumpInterval;

@end
