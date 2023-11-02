
@protocol CSAudioSessionControllerDelegate <NSObject>

@optional

- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(NSDictionary *)arg2;
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionOwnerLostNotification:(NSDictionary *)arg2;
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionOwnerResetNotification:(NSDictionary *)arg2;
- (void)audioSessionController:(CSAudioSessionController *)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(NSDictionary *)arg2;

@end
