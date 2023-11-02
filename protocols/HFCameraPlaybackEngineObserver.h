
@protocol HFCameraPlaybackEngineObserver <NSObject>

@optional

- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didRemoveEvents:(NSArray *)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdateClipPlayer:(AVPlayer *)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdateEvents:(NSArray *)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdateLiveCameraSource:(HMCameraSource *)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdateMicrophoneEnabled:(bool)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdatePlaybackError:(NSError *)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdatePlaybackPosition:(HFCameraPlaybackPosition *)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdateScrubbingStatus:(bool)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdateStreamAudioEnabled:(bool)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdateStreamAudioVolume:(bool)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (void)playbackEngine:(HFCameraPlaybackEngine *)arg1 didUpdateTimelineState:(unsigned long long)arg2;

@end
