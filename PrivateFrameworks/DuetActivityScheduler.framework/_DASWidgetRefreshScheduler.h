
@interface _DASWidgetRefreshScheduler : NSObject {
    <_CDLocalContext> * _context;
    _DASScheduler * _dasScheduler;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _queue;
    <_DKKnowledgeSaving> * _store;
    _CDContextualKeyPath * _widgetOverrideKeypath;
}

@property (nonatomic, retain) <_CDLocalContext> *context;
@property (nonatomic, retain) _DASScheduler *dasScheduler;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) <_DKKnowledgeSaving> *store;
@property (nonatomic, retain) _CDContextualKeyPath *widgetOverrideKeypath;

+ (id)sharedScheduler;

- (void).cxx_destruct;
- (void)cancelActivity:(id)arg1;
- (id)context;
- (void)createRateLimitConfigurationWithName:(id)arg1 rateLimits:(id)arg2;
- (id)createRefreshActivityForWidgetBudgetID:(id)arg1 containingAppID:(id)arg2 refreshAfter:(id)arg3 refreshBefore:(id)arg4 widgetInfo:(id)arg5 refreshHandler:(id /* block */)arg6;
- (id)createRefreshActivityForWidgetID:(id)arg1 containingAppID:(id)arg2 refreshAfter:(id)arg3 refreshBefore:(id)arg4 widgetInfo:(id)arg5 refreshHandler:(id /* block */)arg6;
- (id)createRefreshActivityWithRateLimitConfigurationName:(id)arg1 forWidgetBudgetID:(id)arg2 withRemoteDeviceID:(id)arg3 containingAppID:(id)arg4 refreshAfter:(id)arg5 refreshBefore:(id)arg6 widgetInfo:(id)arg7 refreshHandler:(id /* block */)arg8;
- (id)createRefreshActivityWithWidgetParameters:(id)arg1;
- (id)createRefreshActivityWithWidgetParameters:(id)arg1 refreshHandler:(id /* block */)arg2;
- (id)createRefreshActivityWithWidgetParameters:(id)arg1 withRefreshHandler:(id /* block */)arg2;
- (id)dasScheduler;
- (id)decrementBudgetForWidgetID:(id)arg1 by:(double)arg2;
- (id)init;
- (id)log;
- (id)queue;
- (void)recordWidgetRefreshes:(id)arg1;
- (void)recordWidgetViews:(id)arg1;
- (void)setBudget:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDasScheduler:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setOverridesForWidgetBudgetIDs:(id)arg1;
- (void)setOverridesForWidgetIDs:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setSystemAddedWidgetBudgetIDs:(id)arg1;
- (void)setWidgetOverrideKeypath:(id)arg1;
- (id)store;
- (void)submitRefreshActivity:(id)arg1;
- (id)widgetOverrideKeypath;

@end
