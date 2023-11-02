
@interface MDMRSELFLoggingUtils : NSObject

+ (id)createMentionDetectorEvaluatedEvent:(id)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;
+ (id)createMentionDetectorEvaluatedTier1Event:(id)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;
+ (id)createMentionResolverEvaluatedEvent:(id)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;
+ (id)createMentionResolverEvaluatedTier1Event:(id)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;
+ (bool)emitEvent:(id)arg1;
+ (bool)emitMentionDetectorEvaluatedEventWithResponse:(id)arg1 WithNlId:(id)arg2 andWithTrpId:(id)arg3 andWithResultCandidateId:(id)arg4 andWithRequester:(int)arg5;
+ (bool)emitMentionResolverEvaluatedEventWithResponse:(id)arg1 WithNlId:(id)arg2 andWithTrpId:(id)arg3 andWithResultCandidateId:(id)arg4 andWithRequester:(int)arg5;

@end
