
@protocol CKInternalAudioPlayerDelegate <NSObject>

@optional

- (void)internalAudioPlayerDidFinishPlaying:(CKInternalAudioPlayer *)arg1 successfully:(bool)arg2;
- (void)internalAudioPlayerDidPrepareAudioForPlaying:(CKInternalAudioPlayer *)arg1 successfully:(bool)arg2;

@end
