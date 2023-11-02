
@protocol IMInternalAVAudioPlayerDelegate <NSObject>

@optional

- (void)internalAVAudioPlayerDidFinishPlaying:(IMInternalAVAudioPlayer *)arg1 successfully:(bool)arg2;
- (void)internalAVAudioPlayerDidPrepareAudioForPlaying:(IMInternalAVAudioPlayer *)arg1 successfully:(bool)arg2;

@end
