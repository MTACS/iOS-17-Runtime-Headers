
@protocol TUCallCapabilitiesDelegate <NSObject>

@optional

- (void)didChangeFaceTimeAudioCallingSupport;
- (void)didChangeFaceTimeVideoCallingSupport;
- (void)didChangeTelephonyCallingSupport;

@end
