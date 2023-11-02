
@protocol _TVRCDeviceImpl <NSObject>

@required

- (NSDictionary *)alternateIdentifiers;
- (void)connect;
- (long long)connectionType;
- (void)disconnect;
- (NSString *)identifier;
- (TVRXKeyboardController *)keyboardController;
- (NSString *)model;
- (NSString *)name;
- (unsigned long long)pairingCapability;
- (void)sendButtonEvent:(TVRCButtonEvent *)arg1;
- (void)sendGameControllerEvent:(TVRCGameControllerEvent *)arg1;
- (void)sendTouchEvent:(TVRCTouchEvent *)arg1;
- (void)setAuthenticationSupported:(bool)arg1;
- (void)setDevice:(TVRXDevice *)arg1;
- (NSSet *)supportedButtons;
- (bool)supportsFindMyRemote;
- (bool)supportsTouchEvents;

@optional

- (long long)deviceAttentionState;
- (void)enableFindingSession:(bool)arg1;
- (NSString *)idsIdentifier;
- (bool)isPaired;
- (TVRCNowPlayingInfo *)nowPlayingInfo;
- (TVRCSiriRemoteInfo *)pairedRemoteInfo;
- (void)sendEvent:(void *)arg1 options:(void *)arg2 response:(void *)arg3; // needs 3 arg types, found 10: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, NSError *, void*
- (long long)siriRemoteFindingState;

@end
