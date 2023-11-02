
@interface SNLPSSUSELFLoggingUtils : NSObject

+ (id)buildMetadataFromRequestId:(id)arg1;
+ (id)buildMetadataWithNlId:(id)arg1 andWithTrpId:(id)arg2 andWithResultCandidateId:(id)arg3;
+ (void)emitEvent:(id /* block */)arg1;
+ (void)emitEventBackgroundUpdate:(id)arg1 backgroundUpdateContextBuilder:(id /* block */)arg2;
+ (void)emitEventUserRequest:(id)arg1 userRequestContextBuilder:(id /* block */)arg2;
+ (id)generateRandomUUID;
+ (void)logBackgroundUpdateEnded:(id)arg1 locale:(id)arg2 appInfos:(id)arg3;
+ (void)logBackgroundUpdateFailed:(id)arg1;
+ (id)logBackgroundUpdateStarted:(int)arg1;
+ (void)logUserRequestEnded:(id)arg1 triggeredCacheEntryInfos:(id)arg2;
+ (void)logUserRequestFailed:(id)arg1;
+ (void)logUserRequestStarted:(id)arg1;

@end
