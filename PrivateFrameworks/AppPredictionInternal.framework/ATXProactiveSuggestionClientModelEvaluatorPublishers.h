
@interface ATXProactiveSuggestionClientModelEvaluatorPublishers : NSObject <ATXProactiveSuggestionClientModelEvaluatorPublishers> {
    NSNumber * _endTime;
    NSNumber * _startTime;
}

@property (nonatomic, readonly) BPSPublisher *clientModelCacheUpdatePublisher;
@property (nonatomic, readonly, copy) NSNumber *endTime;
@property (nonatomic, readonly) BPSPublisher *shadowCandidatePublisher;
@property (nonatomic, readonly, copy) NSNumber *startTime;
@property (nonatomic, readonly) BPSPublisher *uiPublisher;

- (void).cxx_destruct;
- (id)clientModelCacheUpdatePublisher;
- (id)endTime;
- (id)initWithStartTime:(id)arg1 endTime:(id)arg2;
- (id)shadowCandidatePublisher;
- (id)startTime;
- (id)uiPublisher;

@end
