
@protocol MusicKit_SoftLinking_MPCPlayerResponseItem <NSObject>

@required

- (NSString *)musicKit_playerResponseItem_contentItemIdentifier;
- (float)musicKit_playerResponseItem_defaultRate;
- (double)musicKit_playerResponseItem_duration;
- (double)musicKit_playerResponseItem_elapsedTime;
- (double)musicKit_playerResponseItem_endTime;
- (bool)musicKit_playerResponseItem_isLiveContent;
- (bool)musicKit_playerResponseItem_isLoading;
- (bool)musicKit_playerResponseItem_isPlaceholder;
- (<MusicKit_SoftLinking_MPNowPlayingInfoAudioFormat> *)musicKit_playerResponseItem_nowPlayingAudioFormat;
- (float)musicKit_playerResponseItem_rate;
- (<MusicKit_SoftLinking_MPCPlayerCommandRequest> *)musicKit_playerResponseItem_removeCommandRequest;
- (<MusicKit_SoftLinking_MPCPlayerSeekCommand> *)musicKit_playerResponseItem_seekCommand;
- (double)musicKit_playerResponseItem_startTime;
- (id)musicKit_playerResponseItem_underlyingModelObject;

@end
