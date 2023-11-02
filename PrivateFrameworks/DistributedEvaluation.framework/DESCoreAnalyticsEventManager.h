
@interface DESCoreAnalyticsEventManager : DESEventManager

+ (void)_sendCoreAnalyticsEvent:(id)arg1 eventPayloadBuilder:(id /* block */)arg2;
+ (void)sendEventActivityShouldDeferWithActivityID:(id)arg1 connectionDuration:(float)arg2;
+ (void)sendEventAttachmentDownloadsBundleID:(id)arg1 duration:(float)arg2 success:(bool)arg3 downloadedAttachmentCount:(unsigned long long)arg4;
+ (void)sendEventDeferForBundleID:(id)arg1 deadlineStr:(id)arg2;
+ (void)sendEventDeleteRecordForBundleID:(id)arg1 removedCount:(unsigned long long)arg2;
+ (void)sendEventErrorForBundleID:(id)arg1 error:(id)arg2;
+ (void)sendEventEvaluationCompletedForBundleID:(id)arg1 duration:(float)arg2 deferralTime:(float)arg3 wasDeferred:(bool)arg4 success:(bool)arg5 error:(id)arg6;
+ (void)sendEventEvaluationForBundleID:(id)arg1 evaluationID:(id)arg2 duration:(float)arg3 deferred:(bool)arg4 success:(bool)arg5 error:(id)arg6 downloadedAttachmentCount:(unsigned long long)arg7;
+ (void)sendEventEvaluationSessionFinishForBundleID:(id)arg1 success:(bool)arg2;
+ (void)sendEventEvaluationSessionStartForBundleID:(id)arg1;
+ (void)sendEventFetchPolicyForBundleID:(id)arg1 success:(bool)arg2;
+ (void)sendEventMaintenanceWithActivityID:(id)arg1 intervalSincePostedEvent:(double)arg2 shouldSkip:(bool)arg3 lockState:(int)arg4;
+ (void)sendEventRecipeExpiredForBundleID:(id)arg1 deferralTime:(float)arg2;
+ (void)sendEventRecipeFetchedForBundleID:(id)arg1 evaluationID:(id)arg2 error:(id)arg3;
+ (void)sendEventRecordsMatchedForBundleID:(id)arg1;
+ (void)sendEventWriteRecordForBundleID:(id)arg1;

@end
