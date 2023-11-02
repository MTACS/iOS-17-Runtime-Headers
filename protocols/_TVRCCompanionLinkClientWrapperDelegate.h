
@protocol _TVRCCompanionLinkClientWrapperDelegate <NSObject>

@required

- (void)connectedToDevice:(TVRCRPCompanionLinkClientWrapper *)arg1;
- (void)deviceEncounteredAuthenticationChallenge:(TVRXDeviceAuthenticationChallenge *)arg1;
- (void)deviceSupportsFindMyRemote:(bool)arg1;
- (void)deviceUpdateSiriRemoteFindingState;
- (void)deviceUpdatedAttentionState;
- (void)deviceUpdatedNowPlayingInfo:(TVRCRPCompanionLinkClientWrapper *)arg1;
- (void)deviceUpdatedPairedRemoteInfo:(TVRCRPCompanionLinkClientWrapper *)arg1;
- (void)deviceUpdatedSupportedButtons:(TVRCRPCompanionLinkClientWrapper *)arg1;
- (void)disconnectedFromDevice:(TVRCRPCompanionLinkClientWrapper *)arg1 error:(NSError *)arg2;

@end
