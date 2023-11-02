
@interface CDMMentionResolverServiceUtils : NSObject

+ (id)buildMRRequestWithCurTurn:(id)arg1 tokenChain:(id)arg2 mdResponse:(id)arg3 contextualSpanMatcherResponse:(id)arg4 embedding:(id)arg5 utterance:(id)arg6 turnIndex:(unsigned long long)arg7 nluRequestId:(id)arg8 resultCandidateId:(id)arg9 cdmRequestId:(id)arg10;
+ (id)includeWhitespaceInIndices:(id)arg1 tokenchain:(id)arg2;
+ (void)logMRRequestToFile:(id)arg1;
+ (void)logMRResponseToFile:(id)arg1;

@end
