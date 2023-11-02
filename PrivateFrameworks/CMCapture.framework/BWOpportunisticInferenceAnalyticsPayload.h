
@interface BWOpportunisticInferenceAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    unsigned int  _facesProcessedCount;
    long long  _inferenceDeadlineOverdue;
    long long  _totalInferenceExecutionTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int facesProcessedCount;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inferenceDeadlineOverdue;
@property (readonly) Class superclass;
@property (nonatomic) long long totalInferenceExecutionTime;

- (id)eventDictionary;
- (id)eventName;
- (unsigned int)facesProcessedCount;
- (long long)inferenceDeadlineOverdue;
- (id)init;
- (void)reset;
- (void)setFacesProcessedCount:(unsigned int)arg1;
- (void)setInferenceDeadlineOverdue:(long long)arg1;
- (void)setTotalInferenceExecutionTime:(long long)arg1;
- (long long)totalInferenceExecutionTime;

@end
