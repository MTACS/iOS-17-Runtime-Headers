
@interface MRExternalClientConnection : MRProtocolClientConnection {
    bool  _cryptoEnabled;
    MRCryptoPairingSession * _cryptoSession;
    bool  _registeredKeyboardUpdates;
    bool  _registeredToNowPlayingUpdates;
    bool  _registeredToOutputDeviceUpdates;
    bool  _registeredToSystemEndpointUpdates;
    bool  _registeredToVolumeUpdates;
    NSArray * _subscribedPlayerPaths;
    unsigned int  _voiceRecordingState;
}

@property (nonatomic) bool cryptoEnabled;
@property (nonatomic, retain) MRCryptoPairingSession *cryptoSession;
@property (nonatomic) bool registeredKeyboardUpdates;
@property (nonatomic) bool registeredToNowPlayingUpdates;
@property (nonatomic) bool registeredToOutputDeviceUpdates;
@property (nonatomic) bool registeredToSystemEndpointUpdates;
@property (nonatomic) bool registeredToVolumeUpdates;
@property (nonatomic, copy) NSArray *subscribedPlayerPaths;
@property (nonatomic) unsigned int voiceRecordingState;

- (void).cxx_destruct;
- (bool)cryptoEnabled;
- (id)cryptoSession;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;
- (bool)registeredKeyboardUpdates;
- (bool)registeredToNowPlayingUpdates;
- (bool)registeredToOutputDeviceUpdates;
- (bool)registeredToSystemEndpointUpdates;
- (bool)registeredToVolumeUpdates;
- (void)setCryptoEnabled:(bool)arg1;
- (void)setCryptoSession:(id)arg1;
- (void)setRegisteredKeyboardUpdates:(bool)arg1;
- (void)setRegisteredToNowPlayingUpdates:(bool)arg1;
- (void)setRegisteredToOutputDeviceUpdates:(bool)arg1;
- (void)setRegisteredToSystemEndpointUpdates:(bool)arg1;
- (void)setRegisteredToVolumeUpdates:(bool)arg1;
- (void)setSubscribedPlayerPaths:(id)arg1;
- (void)setVoiceRecordingState:(unsigned int)arg1;
- (id)subscribedPlayerPaths;
- (unsigned int)voiceRecordingState;

@end
