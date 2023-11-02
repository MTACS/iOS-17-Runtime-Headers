
@protocol ATXProactiveSuggestionClientModelEvaluatorPublishers

@required

- (BPSPublisher *)clientModelCacheUpdatePublisher;
- (BPSPublisher *)shadowCandidatePublisher;
- (BPSPublisher *)uiPublisher;

@end
