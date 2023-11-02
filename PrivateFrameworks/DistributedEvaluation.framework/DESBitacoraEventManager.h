
@interface DESBitacoraEventManager : DESEventManager

+ (void)_sendBitacoraEventForBundleID:(id)arg1 event:(id)arg2 identifiers:(id)arg3;
+ (void)_sendBitacoraEventForEvent:(id)arg1 identifiers:(id)arg2;
+ (void)initialize;
+ (void)sendEventActivityScheduled;
+ (void)sendEventTaskCompletedForBundleID:(id)arg1 identifiers:(id)arg2 error:(id)arg3;
+ (void)sendEventTaskFetchedForBundleID:(id)arg1 identifiers:(id)arg2;
+ (void)sendEventTaskSchedulingFailedForBundleID:(id)arg1 identifiers:(id)arg2 error:(id)arg3;
+ (void)sendEventTaskSchedulingSucceededForBundleID:(id)arg1 identifiers:(id)arg2;

@end
