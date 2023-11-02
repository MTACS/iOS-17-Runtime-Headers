
@interface DefaultGKVoiceChatService : NSObject <GKViceroyVoiceChatService> {
    GKVoiceChatServicePrivate * _service;
}

@property (nonatomic, readonly) float inputMeterLevel;
@property (getter=isInputMeteringEnabled) bool inputMeteringEnabled;
@property (getter=isMicrophoneMuted) bool microphoneMuted;
@property (nonatomic, readonly) float outputMeterLevel;
@property (getter=isOutputMeteringEnabled) bool outputMeteringEnabled;
@property float remoteParticipantVolume;
@property (nonatomic, retain) GKVoiceChatServicePrivate *service;

- (void).cxx_destruct;
- (bool)acceptCallID:(long long)arg1 error:(id*)arg2;
- (void)denyCallID:(long long)arg1;
- (id)getClient;
- (float)inputMeterLevel;
- (bool)isInputMeteringEnabled;
- (bool)isMicrophoneMuted;
- (bool)isOutputMeteringEnabled;
- (float)outputMeterLevel;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (float)remoteParticipantVolume;
- (id)service;
- (void)setClient:(id)arg1 gkVoiceChatService:(id)arg2;
- (void)setInputMeteringEnabled:(bool)arg1;
- (void)setMicrophoneMuted:(bool)arg1;
- (void)setOutputMeteringEnabled:(bool)arg1;
- (void)setRemoteParticipantVolume:(float)arg1;
- (void)setService:(id)arg1;
- (bool)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2;
- (void)stopVoiceChatWithParticipantID:(id)arg1;

@end
