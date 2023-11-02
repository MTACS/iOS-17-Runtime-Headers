
@interface SiriNLUExternalTypesConverter : NSObject

+ (id)convertFromAsrHypothesis:(id)arg1;
+ (id)convertFromAsrOutputs:(id)arg1;
+ (id)convertFromAsrTokenInformation:(id)arg1;
+ (id)convertFromAsrTokens:(id)arg1;
+ (id)convertFromContext:(id)arg1;
+ (id)convertFromDouble:(double)arg1;
+ (id)convertFromEntityCandidate:(id)arg1;
+ (id)convertFromEntityCandidates:(id)arg1;
+ (id)convertFromMatchingSpan:(id)arg1;
+ (id)convertFromMatchingSpans:(id)arg1;
+ (id)convertFromNluLegacyNLContext:(id)arg1;
+ (id)convertFromNluRequest:(id)arg1;
+ (id)convertFromNluResponse:(id)arg1;
+ (id)convertFromNluTurnContext:(id)arg1;
+ (id)convertFromNluTurnInput:(id)arg1;
+ (id)convertFromNumber:(id)arg1;
+ (id)convertFromRRAnnotation:(id)arg1;
+ (id)convertFromRRAnnotations:(id)arg1;
+ (id)convertFromRRGroupIdentifer:(id)arg1;
+ (id)convertFromRepetitionResult:(id)arg1;
+ (id)convertFromRepetitionResults:(id)arg1;
+ (id)convertFromString:(id)arg1;
+ (id)convertFromTask:(id)arg1;
+ (id)convertFromTasks:(id)arg1;
+ (id)convertFromUUID:(id)arg1;
+ (id)convertFromUserParse:(id)arg1;
+ (id)convertFromUserParses:(id)arg1;
+ (id)convertParser:(id)arg1;
+ (id)convertfromRequestID:(id)arg1;

@end
