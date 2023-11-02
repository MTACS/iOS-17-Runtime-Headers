
@interface MRSetConversationDetectionEnabledMessage : MRProtocolMessage {
    bool  _enabled;
    NSString * _outputDeviceUID;
}

@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSString *outputDeviceUID;

- (void).cxx_destruct;
- (bool)enabled;
- (id)initWithOutputDeviceUID:(id)arg1 enabled:(bool)arg2;
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;
- (id)outputDeviceUID;
- (unsigned long long)type;

@end
