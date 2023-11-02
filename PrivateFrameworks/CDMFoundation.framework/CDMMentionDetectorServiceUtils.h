
@interface CDMMentionDetectorServiceUtils : NSObject

+ (id)buildMDRequestWithUtterance:(id)arg1 tokenChain:(id)arg2 embedding:(id)arg3 nluRequestId:(id)arg4 resultCandidateId:(id)arg5 cdmRequestId:(id)arg6;
+ (void)logMDRequestToFile:(id)arg1;
+ (void)logMDResponseToFile:(id)arg1;

@end
