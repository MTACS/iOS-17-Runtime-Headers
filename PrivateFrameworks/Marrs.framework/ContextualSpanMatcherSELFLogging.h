
@interface ContextualSpanMatcherSELFLogging : NSObject

+ (id)createContextualSpanMatcherEndedEvent:(id)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;
+ (id)createContextualSpanMatcherEndedTier1Event:(id)arg1 withNLXMetadata:(id)arg2 andLinkId:(id)arg3;
+ (bool)emitContextualSpanMatcherEndedEventWithResponse:(id)arg1 WithNlId:(id)arg2 andWithTrpId:(id)arg3 andWithResultCandidateId:(id)arg4 andWithRequester:(int)arg5;
+ (bool)emitEvent:(id)arg1;

@end
