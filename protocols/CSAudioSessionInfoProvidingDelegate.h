
@protocol CSAudioSessionInfoProvidingDelegate <NSObject>

@optional

- (void)audioSessionInfoProvider:(id <CSAudioSessionInfoProviding>)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionInfoProvider:(id <CSAudioSessionInfoProviding>)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionInfoProvider:(id <CSAudioSessionInfoProviding>)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionInfoProvider:(id <CSAudioSessionInfoProviding>)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(NSDictionary *)arg2;

@end
