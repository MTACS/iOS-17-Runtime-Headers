
@protocol OKAudioPlaylistDelegate <NSObject>

@required

- (void)audioFinishedPlayingWithAVAsset:(AVAsset *)arg1;
- (void)audioStartedPlayingWithAVAsset:(AVAsset *)arg1;

@end
