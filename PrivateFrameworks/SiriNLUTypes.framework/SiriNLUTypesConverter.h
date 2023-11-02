
@interface SiriNLUTypesConverter : NSObject

+ (id)convertAsrHypothesis:(id)arg1;
+ (id)convertAsrOutputs:(id)arg1;
+ (id)convertAsrTokenInformation:(id)arg1;
+ (id)convertAsrTokens:(id)arg1;
+ (id)convertEntityCandidate:(id)arg1;
+ (id)convertEntityCandidates:(id)arg1;
+ (id)convertLegacyNLContext:(id)arg1;
+ (id)convertMatchingSpan:(id)arg1;
+ (id)convertMatchingSpans:(id)arg1;
+ (id)convertNLContext:(id)arg1;
+ (id)convertParser:(id)arg1;
+ (id)convertRRAnnotation:(id)arg1;
+ (id)convertRRAnnotations:(id)arg1;
+ (id)convertRRGroupIdentifer:(id)arg1;
+ (id)convertRepetitionResult:(id)arg1;
+ (id)convertRepetitionResults:(id)arg1;
+ (id)convertRequest:(id)arg1;
+ (id)convertRequestID:(id)arg1;
+ (id)convertResponse:(id)arg1;
+ (id)convertResponseStatus:(id)arg1;
+ (void)convertRewrittenUtterance:(id)arg1;
+ (id)convertTask:(id)arg1;
+ (id)convertTasks:(id)arg1;
+ (id)convertTurnContext:(id)arg1;
+ (id)convertTurnInput:(id)arg1;
+ (id)convertTurnInputs:(id)arg1;
+ (id)convertUUID:(id)arg1;
+ (id)convertUserParse:(id)arg1;
+ (id)convertUserParses:(id)arg1;

@end
