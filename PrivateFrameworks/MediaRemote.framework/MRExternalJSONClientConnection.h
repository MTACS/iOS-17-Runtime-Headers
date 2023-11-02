
@interface MRExternalJSONClientConnection : MRExternalClientConnection {
    NSDictionary * _artwork;
    NSDictionary * _deviceInfo;
    NSDictionary * _playbackQueue;
    NSDictionary * _playerPath;
    NSDictionary * _supportedCommands;
    NSDictionary * _volume;
}

- (void).cxx_destruct;
- (id)_createProtocolMessage:(Class)arg1 underlyingCodableMessage:(id)arg2;
- (id)_encodeDeviceInfo:(id)arg1;
- (id)_encodeVolumeDidChange:(id)arg1;
- (id)_processDeviceInfo:(id)arg1;
- (id)_processSetState:(id)arg1;
- (id)_protocolMessageFromData:(id)arg1;
- (id)dataForMessage:(id)arg1;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;

@end
