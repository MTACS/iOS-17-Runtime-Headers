
@protocol APRKMediaPlayerMessagingDelegate <NSObject>

@required

- (void)mediaPlayer:(APRKMediaPlayer *)arg1 didGenerateFPSSecureStopRecordPayload:(NSDictionary *)arg2;
- (void)mediaPlayer:(APRKMediaPlayer *)arg1 wantsToPostNotification:(NSString *)arg2 withPayload:(id)arg3;
- (void)mediaPlayer:(APRKMediaPlayer *)arg1 wantsToSendUpstreamMessageWithDictionary:(NSDictionary *)arg2;
- (void)mediaPlayerNeedsTLSInfo:(APRKMediaPlayer *)arg1;

@end
