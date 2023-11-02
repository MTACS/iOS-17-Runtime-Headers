
@protocol IMAudioPlayerDelegate <NSObject>

@required

- (void)audioPlayerCurrentTimeDidChange:(IMAudioPlayer *)arg1;

@optional

- (void)audioPlayerDidPrepareAudioToPlay:(IMAudioPlayer *)arg1 successfully:(bool)arg2;

@end
