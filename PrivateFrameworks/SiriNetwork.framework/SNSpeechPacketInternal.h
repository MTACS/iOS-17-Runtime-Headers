
@interface SNSpeechPacketInternal : NSObject {
    void internalAceId;
    void internalRefId;
    void packetNumber;
    void packets;
}

@property (nonatomic, copy) NSString *internalAceId;
@property (nonatomic, copy) NSString *internalRefId;
@property (nonatomic) long long packetNumber;
@property (nonatomic, copy) NSArray *packets;

- (void).cxx_destruct;
- (bool)bufferingAllowedDuringActiveSession;
- (id)init;
- (id)internalAceId;
- (id)internalRefId;
- (bool)isProvisional;
- (bool)isRestartable;
- (bool)isRetryable;
- (void)logDiagnostics;
- (long long)packetNumber;
- (id)packets;
- (id)requestId;
- (id)serializedAceDataAndReturnError:(id*)arg1;
- (void)setInternalAceId:(id)arg1;
- (void)setInternalRefId:(id)arg1;
- (void)setPacketNumber:(long long)arg1;
- (void)setPackets:(id)arg1;
- (void)setSessionRequestId:(id)arg1;
- (bool)supportedByLocalSession;
- (bool)supportedByRemoteLimitedSession;

@end
