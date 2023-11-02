
@protocol TVRCDeviceDelegate <NSObject>

@optional

- (void)device:(TVRCDevice *)arg1 disconnectedForReason:(long long)arg2 error:(NSError *)arg3;
- (void)device:(TVRCDevice *)arg1 encounteredAuthenticationChallenge:(TVRCDeviceAuthenticationChallenge *)arg2;
- (void)device:(TVRCDevice *)arg1 removedSupportedButtons:(NSSet *)arg2 added:(NSSet *)arg3;
- (void)device:(TVRCDevice *)arg1 supportsFindMyRemote:(bool)arg2;
- (void)device:(TVRCDevice *)arg1 updatedNowPlayingInfo:(TVRCNowPlayingInfo *)arg2;
- (void)device:(TVRCDevice *)arg1 updatedSiriRemoteFindingSessionState:(long long)arg2;
- (void)deviceBeganConnecting:(TVRCDevice *)arg1;
- (void)deviceConnected:(TVRCDevice *)arg1;
- (void)deviceNameChanged:(TVRCDevice *)arg1;
- (bool)deviceShouldAllowConnectionAuthentication:(TVRCDevice *)arg1;

@end
