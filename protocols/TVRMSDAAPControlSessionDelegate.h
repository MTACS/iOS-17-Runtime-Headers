
@protocol TVRMSDAAPControlSessionDelegate <NSObject>

@required

- (void)controlSession:(id <TVRMSDAAPControlSession>)arg1 artworkDataDidBecomeAvailable:(NSData *)arg2 identifier:(NSString *)arg3;
- (void)controlSession:(id <TVRMSDAAPControlSession>)arg1 didUpdateAudioRoutes:(NSArray *)arg2;
- (void)controlSession:(id <TVRMSDAAPControlSession>)arg1 didUpdateKeyboardEditingInfo:(TVRMSKeyboardInfo *)arg2;
- (void)controlSession:(id <TVRMSDAAPControlSession>)arg1 didUpdateNowPlayingInfo:(TVRMSNowPlayingInfo *)arg2;
- (void)controlSession:(id <TVRMSDAAPControlSession>)arg1 didUpdateVolume:(float)arg2;
- (void)controlSession:(id <TVRMSDAAPControlSession>)arg1 keyboardEditingDidBegin:(TVRMSKeyboardInfo *)arg2;
- (void)controlSession:(id <TVRMSDAAPControlSession>)arg1 keyboardEditingDidEnd:(TVRMSKeyboardInfo *)arg2;
- (void)controlSessionDidEnd:(id <TVRMSDAAPControlSession>)arg1;

@end
