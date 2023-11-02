
@interface DEDFeedbackAnalytics : NSObject

+ (void)logDataLoadWithContentItemCount:(unsigned long long)arg1 formItemsCount:(unsigned long long)arg2 teamCount:(unsigned long long)arg3 errorsCount:(unsigned long long)arg4 startedAt:(double)arg5 endedAt:(double)arg6;
+ (void)logEventWithRequest:(id)arg1 httpStatusCode:(long long)arg2 nsurlErrorCode:(long long)arg3 success:(bool)arg4 startedAt:(double)arg5 endedAt:(double)arg6;
+ (void)logFBKBugSessionStartWithDeviceType:(id)arg1 isRemote:(bool)arg2 success:(bool)arg3 errorCode:(long long)arg4 startedAt:(double)arg5 getSessionEndedAt:(double)arg6 showExtensionsEndedAt:(double)arg7 getStatusEndedAt:(double)arg8;

@end
