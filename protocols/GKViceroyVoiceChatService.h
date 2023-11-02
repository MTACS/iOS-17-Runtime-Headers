
@protocol GKViceroyVoiceChatService

@required

- (bool)acceptCallID:(long long)arg1 error:(id*)arg2;
- (void)denyCallID:(long long)arg1;
- (id)getClient;
- (float)inputMeterLevel;
- (bool)isInputMeteringEnabled;
- (bool)isMicrophoneMuted;
- (bool)isOutputMeteringEnabled;
- (float)outputMeterLevel;
- (void)receivedData:(NSData *)arg1 fromParticipantID:(NSString *)arg2;
- (float)remoteParticipantVolume;
- (void)setClient:(id)arg1 gkVoiceChatService:(id)arg2;
- (void)setInputMeteringEnabled:(bool)arg1;
- (void)setMicrophoneMuted:(bool)arg1;
- (void)setOutputMeteringEnabled:(bool)arg1;
- (void)setRemoteParticipantVolume:(float)arg1;
- (bool)startVoiceChatWithParticipantID:(NSString *)arg1 error:(id*)arg2;
- (void)stopVoiceChatWithParticipantID:(NSString *)arg1;

@end
