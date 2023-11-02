
@interface TVRCRapportDeviceImpl : NSObject <_TVRCCompanionLinkClientWrapperDelegate, _TVRCDeviceImpl> {
    TVRXDevice * _device;
    TVRCRPCompanionLinkClientWrapper * _deviceWrapper;
    TVRXKeyboardController * _keyboardController;
    TVRCRapportRemoteTextInputKeyboardImpl * _keyboardImpl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) TVRXDevice *device;
@property (nonatomic, retain) TVRCRPCompanionLinkClientWrapper *deviceWrapper;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TVRXKeyboardController *keyboardController;
@property (nonatomic, retain) TVRCRapportRemoteTextInputKeyboardImpl *keyboardImpl;
@property (readonly) Class superclass;

+ (id)implWithDevice:(id)arg1;

- (void).cxx_destruct;
- (void)_setupKeyboardController;
- (id)alternateIdentifiers;
- (void)connect;
- (void)connectedToDevice:(id)arg1;
- (long long)connectionType;
- (id)device;
- (long long)deviceAttentionState;
- (void)deviceEncounteredAuthenticationChallenge:(id)arg1;
- (void)deviceSupportsFindMyRemote:(bool)arg1;
- (void)deviceUpdateSiriRemoteFindingState;
- (void)deviceUpdatedAttentionState;
- (void)deviceUpdatedNowPlayingInfo:(id)arg1;
- (void)deviceUpdatedPairedRemoteInfo:(id)arg1;
- (void)deviceUpdatedSupportedButtons:(id)arg1;
- (id)deviceWrapper;
- (void)disconnect;
- (void)disconnectedFromDevice:(id)arg1 error:(id)arg2;
- (void)enableFindingSession:(bool)arg1;
- (id)identifier;
- (id)idsIdentifier;
- (id)initWithDevice:(id)arg1;
- (bool)isPaired;
- (id)keyboardController;
- (id)keyboardImpl;
- (id)model;
- (id)name;
- (id)nowPlayingInfo;
- (id)pairedRemoteInfo;
- (unsigned long long)pairingCapability;
- (void)sendButtonEvent:(id)arg1;
- (void)sendEvent:(id)arg1 options:(id)arg2 response:(id /* block */)arg3;
- (void)sendGameControllerEvent:(id)arg1;
- (void)sendTouchEvent:(id)arg1;
- (void)setAuthenticationSupported:(bool)arg1;
- (void)setDevice:(id)arg1;
- (void)setDeviceWrapper:(id)arg1;
- (void)setKeyboardController:(id)arg1;
- (void)setKeyboardImpl:(id)arg1;
- (long long)siriRemoteFindingState;
- (id)supportedButtons;
- (bool)supportsFindMyRemote;
- (bool)supportsTouchEvents;

@end
