
@interface IDSQRProtoMessage : NSObject {
    IDSQRProtoH3Message * _message;
    double  _startTime;
    unsigned long long  _transactionID;
}

@property (nonatomic, readonly) int messageType;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long transactionID;

+ (id)dataWithEmptyUnAllocBindResponse;

- (void).cxx_destruct;
- (bool)_setupAllocbindRequest:(id)arg1 candidatePair:(id)arg2 options:(id)arg3;
- (bool)_setupInfoRequest:(id)arg1 candidatePair:(id)arg2 options:(id)arg3;
- (bool)_setupParticipantUpdateRequest:(id)arg1 candidatePair:(id)arg2 options:(id)arg3;
- (bool)_setupPluginControlRequest:(id)arg1 candidatePair:(id)arg2 options:(id)arg3;
- (bool)_setupPutmaterialRequest:(id)arg1 candidatePair:(id)arg2 options:(id)arg3;
- (bool)_setupRegisterAckRequest:(id)arg1 candidatePair:(id)arg2 options:(id)arg3;
- (bool)_setupRegisterRequest:(id)arg1 candidatePair:(id)arg2 options:(id)arg3;
- (bool)_setupSessionInfoRequest:(id)arg1 candidatePair:(id)arg2 options:(id)arg3;
- (bool)_setupStatsRequest:(id)arg1 candidatePair:(id)arg2 options:(id)arg3;
- (bool)_setupTestRequest:(id)arg1 candidatePair:(id)arg2 options:(id)arg3;
- (bool)_setupUnallocbindRequest:(id)arg1 candidatePair:(id)arg2 options:(id)arg3;
- (id)allocbindResponse;
- (id)data;
- (id)diagnosticIndication;
- (id)errorIndication;
- (id)getMaterialResponse;
- (id)goAwayIndication;
- (id)infoResponse;
- (id)initWithData:(id)arg1;
- (id)initWithType:(int)arg1 candidatePair:(id)arg2 options:(id)arg3;
- (int)messageType;
- (id)participantUpdateIndication;
- (id)participantUpdateResponse;
- (id)pluginControlIndication;
- (id)pluginControlResponse;
- (id)putMaterialIndication;
- (id)putMaterialResponse;
- (id)reallocateIndication;
- (id)registerIndication;
- (id)registerResponse;
- (id)sessionInfoIndication;
- (id)sessionInfoResponse;
- (void)setStartTime:(double)arg1;
- (void)setTransactionID:(unsigned long long)arg1;
- (double)startTime;
- (id)statsResponse;
- (id)testResponse;
- (unsigned long long)transactionID;
- (id)unallocbindResponse;

@end
