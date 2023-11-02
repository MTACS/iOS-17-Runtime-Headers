
@interface MRSetListeningModeMessage : MRProtocolMessage {
    NSString * _listeningMode;
    NSString * _outputDeviceUID;
}

@property (nonatomic, readonly) NSString *listeningMode;
@property (nonatomic, readonly) NSString *outputDeviceUID;

- (void).cxx_destruct;
- (id)initWithListeningMode:(id)arg1 outputDeviceUID:(id)arg2;
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;
- (id)listeningMode;
- (id)outputDeviceUID;
- (unsigned long long)type;

@end
