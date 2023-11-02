
@protocol TVRUIDeviceDelegate <NSObject>

@required

- (void)device:(id <TVRUIDevice>)arg1 beganTextEditingWithAttributes:(id)arg2 initialText:(NSString *)arg3;
- (void)device:(id <TVRUIDevice>)arg1 didEncounterAuthenticationThrottle:(long long)arg2;
- (void)device:(id <TVRUIDevice>)arg1 didUpdateAttributes:(id)arg2;
- (void)device:(id <TVRUIDevice>)arg1 didUpdateNowPlayingInfo:(TVRCNowPlayingInfo *)arg2;
- (void)device:(id <TVRUIDevice>)arg1 didUpdateSiriRemoteFindingSessionState:(long long)arg2;
- (void)device:(id <TVRUIDevice>)arg1 didUpdateText:(NSString *)arg2;
- (void)device:(id <TVRUIDevice>)arg1 endedTextEditingWithAttributes:(id)arg2 endingText:(NSString *)arg3;
- (void)device:(id <TVRUIDevice>)arg1 hasCaptionsEnabled:(bool)arg2;
- (void)device:(id <TVRUIDevice>)arg1 hasGuideButtonEnabled:(bool)arg2;
- (void)device:(id <TVRUIDevice>)arg1 hidesMediaControls:(NSArray *)arg2;
- (void)device:(id <TVRUIDevice>)arg1 needsMediaControls:(NSArray *)arg2;
- (void)device:(id <TVRUIDevice>)arg1 supportsFindMyRemote:(bool)arg2;
- (void)device:(id <TVRUIDevice>)arg1 supportsSiri:(bool)arg2 volumeControl:(bool)arg3;
- (void)device:(id <TVRUIDevice>)arg1 supportsVolumeControl:(bool)arg2;
- (void)deviceBeganConnecting:(id <TVRUIDevice>)arg1;
- (void)deviceDidConnect:(id <TVRUIDevice>)arg1;
- (void)deviceDidDisconnect:(id <TVRUIDevice>)arg1 reason:(long long)arg2 error:(NSError *)arg3;
- (void)deviceDidEncounterAuthenticationChallenge:(id <TVRUIDevice>)arg1 passwordType:(unsigned long long)arg2 passcode:(NSString *)arg3;

@end
