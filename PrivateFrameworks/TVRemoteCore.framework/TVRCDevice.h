
@interface TVRCDevice : NSObject {
    <TVRCDeviceDelegate> * _delegate;
    TVRCDeviceState * _deviceState;
    NSString * _identifier;
    TVRCDeviceInfo * _info;
    TVRCKeyboardController * _keyboardController;
    long long  _siriRemoteFindingState;
}

@property (nonatomic, readonly) long long classification;
@property (nonatomic, readonly) long long connectionState;
@property (nonatomic, readonly) long long connectionType;
@property (nonatomic) <TVRCDeviceDelegate> *delegate;
@property (nonatomic, retain) TVRCDeviceState *deviceState;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) TVRCDeviceInfo *info;
@property (nonatomic, retain) TVRCKeyboardController *keyboardController;
@property (nonatomic, readonly, copy) NSString *model;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) TVRCNowPlayingInfo *nowPlayingInfo;
@property (getter=isPaired, nonatomic, readonly) bool paired;
@property (nonatomic, readonly) TVRCSiriRemoteInfo *pairedRemoteInfo;
@property (nonatomic, readonly) unsigned long long pairingCapability;
@property (nonatomic, readonly) long long siriRemoteFindingState;
@property (nonatomic, readonly, copy) NSSet *supportedButtons;
@property (nonatomic, readonly) bool supportsFindMyRemote;
@property (nonatomic, readonly) bool supportsTouchEvents;

- (void).cxx_destruct;
- (void)_connectWithConnectionContext:(long long)arg1;
- (void)_deviceEncounteredAuthChallengeType:(long long)arg1 attributes:(long long)arg2 codeToEnterOnDevice:(id)arg3 throttleSeconds:(long long)arg4;
- (void)_deviceUpdatedState:(id)arg1;
- (void)_disconnectDeviceDueToConnectionInterruption;
- (void)_sendRTIDataPayload:(id)arg1;
- (long long)classification;
- (void)connect;
- (void)connectWithConnectionContext:(long long)arg1;
- (long long)connectionState;
- (long long)connectionType;
- (bool)containsIdentifier:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)deviceState;
- (void)disconnectWithType:(unsigned long long)arg1;
- (void)enableFindingSession:(bool)arg1;
- (void)enableTVRemoteOnLockscreen:(bool)arg1;
- (id)identifier;
- (id)info;
- (id)initWithDeviceIdentifier:(id)arg1;
- (bool)isEqualToDevice:(id)arg1;
- (bool)isInEditingSession;
- (bool)isPaired;
- (id)keyboardController;
- (id)model;
- (id)name;
- (id)nowPlayingInfo;
- (id)pairedRemoteInfo;
- (unsigned long long)pairingCapability;
- (void)sendButtonEvent:(id)arg1;
- (void)sendGameControllerEvent:(id)arg1;
- (void)sendTouchEvent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceState:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setKeyboardController:(id)arg1;
- (long long)siriRemoteFindingState;
- (id)supportedButtons;
- (bool)supportsFindMyRemote;
- (bool)supportsTouchEvents;

@end
