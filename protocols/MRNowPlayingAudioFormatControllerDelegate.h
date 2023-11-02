
@protocol MRNowPlayingAudioFormatControllerDelegate <NSObject>

@optional

- (void)nowPlayingAudioFormatController:(MRNowPlayingAudioFormatController *)arg1 didChangeAudioFormatApplication:(MRNowPlayingAudioFormatApplication *)arg2;
- (void)nowPlayingAudioFormatController:(MRNowPlayingAudioFormatController *)arg1 didChangeAudioFormatContentInfo:(MRNowPlayingAudioFormatContentInfo *)arg2;
- (void)nowPlayingAudioFormatController:(MRNowPlayingAudioFormatController *)arg1 didChangeAudioFormatDescription:(NSString *)arg2;
- (void)nowPlayingAudioFormatController:(MRNowPlayingAudioFormatController *)arg1 didChangeBestAvailableAudioFormat:(long long)arg2;
- (void)nowPlayingAudioFormatController:(MRNowPlayingAudioFormatController *)arg1 didChangeBundleID:(NSString *)arg2 displayName:(NSString *)arg3;
- (void)nowPlayingAudioFormatController:(MRNowPlayingAudioFormatController *)arg1 didChangeIsEligibleForSpatialization:(bool)arg2;
- (void)nowPlayingAudioFormatController:(MRNowPlayingAudioFormatController *)arg1 didChangeMultichannel:(bool)arg2;

@end
