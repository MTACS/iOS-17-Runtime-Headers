
@interface SAIntentGroupSiriKitMetrics : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *intentTypeName;
@property (nonatomic, copy) NSString *interactionId;
@property (nonatomic, copy) NSString *metricsStateOrigin;
@property (nonatomic, copy) NSString *resultCandidateId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *taskId;
@property (nonatomic, copy) NSNumber *taskStepStartTime;
@property (nonatomic, copy) NSString *turnId;

+ (id)siriKitMetrics;
+ (id)siriKitMetricsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intentTypeName;
- (id)interactionId;
- (id)metricsStateOrigin;
- (id)resultCandidateId;
- (void)setIntentTypeName:(id)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setMetricsStateOrigin:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)setTaskId:(id)arg1;
- (void)setTaskStepStartTime:(id)arg1;
- (void)setTurnId:(id)arg1;
- (id)taskId;
- (id)taskStepStartTime;
- (id)turnId;

@end
