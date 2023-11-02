
@interface SNSpeechPacket : NSObject <SNSessionObject> {
    SNSpeechPacketInternal * _underlyingSpeechPacket;
}

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long packetNumber;
@property (nonatomic, retain) NSArray *packets;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, retain) SNSpeechPacketInternal *underlyingSpeechPacket;

- (void).cxx_destruct;
- (id)aceId;
- (bool)bufferingAllowedDuringActiveSession;
- (id)init;
- (bool)isProvisional;
- (bool)isRestartable;
- (bool)isRetryable;
- (void)logDiagnostics;
- (long long)packetNumber;
- (id)packets;
- (id)refId;
- (id)requestId;
- (id)serializedAceDataError:(id*)arg1;
- (void)setAceId:(id)arg1;
- (void)setPacketNumber:(long long)arg1;
- (void)setPackets:(id)arg1;
- (void)setRefId:(id)arg1;
- (void)setSessionRequestId:(id)arg1;
- (void)setUnderlyingSpeechPacket:(id)arg1;
- (bool)supportedByLocalSession;
- (bool)supportedByRemoteLimitedSession;
- (id)underlyingSpeechPacket;

@end
