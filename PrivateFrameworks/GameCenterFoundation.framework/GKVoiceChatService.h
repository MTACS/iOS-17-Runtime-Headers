
@interface GKVoiceChatService : NSObject {
    <GKViceroyVoiceChatService> * _voiceChatService;
}

@property <GKVoiceChatClient> *client;
@property (readonly) float inputMeterLevel;
@property (getter=isInputMeteringEnabled, nonatomic) bool inputMeteringEnabled;
@property (getter=isMicrophoneMuted, nonatomic) bool microphoneMuted;
@property (readonly) float outputMeterLevel;
@property (getter=isOutputMeteringEnabled, nonatomic) bool outputMeteringEnabled;
@property (nonatomic) float remoteParticipantVolume;
@property (nonatomic, retain) <GKViceroyVoiceChatService> *voiceChatService;

+ (id)defaultVoiceChatService;
+ (void)initialize;
+ (bool)isVoIPAllowed;

- (void).cxx_destruct;
- (bool)acceptCallID:(long long)arg1 error:(id*)arg2;
- (id)client;
- (void)denyCallID:(long long)arg1;
- (id)init;
- (float)inputMeterLevel;
- (bool)isInputMeteringEnabled;
- (bool)isMicrophoneMuted;
- (bool)isOutputMeteringEnabled;
- (float)outputMeterLevel;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (float)remoteParticipantVolume;
- (void)setClient:(id)arg1;
- (void)setInputMeteringEnabled:(bool)arg1;
- (void)setMicrophoneMuted:(bool)arg1;
- (void)setOutputMeteringEnabled:(bool)arg1;
- (void)setRemoteParticipantVolume:(float)arg1;
- (void)setVoiceChatService:(id)arg1;
- (bool)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2;
- (void)stopVoiceChatWithParticipantID:(id)arg1;
- (id)voiceChatService;

@end
