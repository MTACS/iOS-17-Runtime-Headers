
@protocol MusicKit_SoftLinking_MPCPlayerResetTracklistCommand <NSObject>

@required

- (<MusicKit_SoftLinking_MPCPlayerCommandRequest> *)musicKit_resetTracklistCommand_clearCommandRequest;
- (<MusicKit_SoftLinking_MPCPlayerCommandRequest> *)musicKit_resetTracklistCommand_clearUpNextItemsCommandRequest;
- (<MusicKit_SoftLinking_MPCPlayerCommandRequest> *)musicKit_resetTracklistCommand_replaceCommandRequestWithPlaybackIntent:(MusicKit_SoftLinking_MPCPlaybackIntent *)arg1 replaceIntent:(long long)arg2;

@end
