
@protocol HFAudioPlayerDelegate <NSObject>

@optional

- (void)audioPlayer:(HFAudioPlayer *)arg1 didPausePlaybackWithReason:(NSString *)arg2;
- (void)audioPlayer:(HFAudioPlayer *)arg1 didUpdateAveragePower:(double)arg2;
- (void)audioPlayer:(HFAudioPlayer *)arg1 didUpdatePlaybackTime:(double)arg2;
- (void)audioPlayerDidFinishPlayback:(HFAudioPlayer *)arg1 withError:(NSError *)arg2;
- (void)audioPlayerDidResumePlayback:(HFAudioPlayer *)arg1;
- (void)audioPlayerDidStopPlayback:(HFAudioPlayer *)arg1;

@end
