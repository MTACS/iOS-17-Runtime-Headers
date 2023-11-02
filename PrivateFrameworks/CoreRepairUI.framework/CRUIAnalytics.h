
@interface CRUIAnalytics : NSObject {
    NSObject<OS_dispatch_queue> * serialAsyncQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)sendAnalyticsForRepairHistoryMismatch;
- (void)sendAsyncAnalyticsForEventIfNeeded:(id)arg1 moduleName:(id)arg2;

@end
