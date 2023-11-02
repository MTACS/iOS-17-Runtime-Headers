
@protocol MPMusicPlayerControllerClient <NSObject>

@required

- (void)applyServerStateUpdateRecord:(MPMusicPlayerServerStateUpdateRecord *)arg1;
- (void)serverItemDidEnd;
- (void)serverPlaybackModeDidChangeAffectingQueue:(bool)arg1;
- (void)serverQueueDidEnd;
- (void)setServerNowPlaying:(MPMusicPlayerControllerNowPlaying *)arg1;
- (void)setServerQueueDescriptor:(MPMusicPlayerQueueDescriptor *)arg1;
- (void)setServerTimeSnapshot:(MPMusicPlayerControllerNowPlayingTimeSnapshot *)arg1;

@end
