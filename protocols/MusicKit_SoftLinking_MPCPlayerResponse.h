
@protocol MusicKit_SoftLinking_MPCPlayerResponse <NSObject>

@required

- (<MusicKit_SoftLinking_MPCPlayerPath> *)musicKit_playerPath;
- (<MusicKit_SoftLinking_MPCPlayerCommandRequest> *)musicKit_playerResponse_pauseCommandRequest;
- (<MusicKit_SoftLinking_MPCPlayerCommandRequest> *)musicKit_playerResponse_playCommandRequest;
- (long long)musicKit_playerResponse_state;
- (<MusicKit_SoftLinking_MPCPlayerCommandRequest> *)musicKit_playerResponse_stopCommandRequest;
- (<MusicKit_SoftLinking_MPCPlayerResponseTracklist> *)musicKit_playerResponse_tracklist;

@end
