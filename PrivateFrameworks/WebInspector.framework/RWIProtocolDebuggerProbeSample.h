
@interface RWIProtocolDebuggerProbeSample : RWIProtocolJSONObject

@property (nonatomic) int batchId;
@property (nonatomic, retain) RWIProtocolRuntimeRemoteObject *payload;
@property (nonatomic) int probeId;
@property (nonatomic) int sampleId;
@property (nonatomic) double timestamp;

- (int)batchId;
- (id)initWithProbeId:(int)arg1 sampleId:(int)arg2 batchId:(int)arg3 timestamp:(double)arg4 payload:(id)arg5;
- (id)payload;
- (int)probeId;
- (int)sampleId;
- (void)setBatchId:(int)arg1;
- (void)setPayload:(id)arg1;
- (void)setProbeId:(int)arg1;
- (void)setSampleId:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
