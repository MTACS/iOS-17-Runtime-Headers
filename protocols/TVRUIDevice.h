
@protocol TVRUIDevice <NSObject>

@required

- (void)connect;
- (void)connectWithConnectionContext:(long long)arg1;
- (NSString *)debugName;
- (<TVRUIDeviceDelegate> *)delegate;
- (void)disconnectSystemInitiated;
- (void)disconnectUserInitiated;
- (void)disconnectWithTimeOut;
- (bool)hasIdentifier:(NSString *)arg1;
- (NSString *)identifier;
- (bool)isConnected;
- (bool)isConnecting;
- (bool)isEqualToDevice:(id <TVRUIDevice>)arg1;
- (bool)isLegacyAppleTV;
- (bool)isPaired;
- (NSString *)model;
- (NSString *)name;
- (void)setDelegate:(id <TVRUIDeviceDelegate>)arg1;
- (bool)supportsDonatingIntents;
- (bool)supportsModernConnections;
- (bool)supportsTouchEvents;

@optional

- (void)cancelAuthenitcationChallenge;
- (bool)captionsEnabled;
- (long long)classification;
- (NSString *)currentText;
- (NSDictionary *)deviceContextInformation;
- (void)enableFindingSession:(bool)arg1;
- (void)enableTVRemoteOnLockscreen:(bool)arg1;
- (id)keyboardAttributes;
- (TVRCNowPlayingInfo *)nowPlayingInfo;
- (TVRCSiriRemoteInfo *)pairedRemoteInfo;
- (void)sendAuthenticationCode:(NSString *)arg1;
- (void)sendButtonEvent:(TVRUIButtonEvent *)arg1;
- (void)sendReturnKey;
- (void)sendText:(NSString *)arg1;
- (void)sendTextInputPayload:(id)arg1;
- (void)sendTouchEvent:(TVRUITouchEvent *)arg1;
- (bool)supportsCaptionsToggle;
- (bool)supportsFindMyRemote;
- (bool)supportsGuide;
- (bool)supportsLaunchingApplications;
- (bool)supportsMute;
- (bool)supportsPaging;
- (bool)supportsPower;
- (bool)supportsSiri;
- (bool)supportsVolumeControl;

@end
