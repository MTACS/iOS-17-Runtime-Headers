
@protocol CSAudioAlertProvidingDelegate <NSObject>

@required

- (void)audioAlertProvidingDidFinishAlertPlayback:(id <CSAudioAlertProviding>)arg1 ofType:(long long)arg2 error:(NSError *)arg3;

@end
