
@protocol CKAudioPlayerDelegate <NSObject>

@required

- (void)audioPlayerCurrentTimeDidChange:(CKAudioPlayer *)arg1;
- (void)audioPlayerDidGetInterrupted;

@optional

- (void)audioPlayerDidPrepareAudioToPlay:(CKAudioPlayer *)arg1 successfully:(bool)arg2;

@end
