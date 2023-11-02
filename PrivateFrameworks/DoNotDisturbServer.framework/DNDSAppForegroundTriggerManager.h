
@interface DNDSAppForegroundTriggerManager : NSObject <DNDSBiomeTriggerManager> {
    NSObject<OS_dispatch_queue> * _biomeQueue;
    NSObject<OS_dispatch_queue> * _coalescingQueue;
    NSObject<OS_dispatch_source> * _coalescingTimer;
    DNDSAppForegroundTriggerConfiguration * _currentTriggerConfiguration;
    <DNDSAppForegroundTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> * _dataSource;
    NSObject<OS_os_transaction> * _eventCoalescingTransaction;
    BMStoreEvent * _latestEvent;
    NSMutableDictionary * _sinks;
}

@property (nonatomic) <DNDSAppForegroundTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_coalescingQueue_coalesceWithTriggerConfiguration:(id)arg1 event:(id)arg2;
- (void)_coalescingQueue_refreshWithTriggerConfiguration:(id)arg1;
- (void)_coalescingQueue_resetCoalescingTimer;
- (void)_configureAppForegroundTriggerWithConfiguration:(id)arg1;
- (void)_refreshIfNeccessaryForEvent:(id)arg1;
- (void)_refreshWithTriggerConfiguration:(id)arg1 event:(id)arg2;
- (id)dataSource;
- (id)init;
- (void)refresh;
- (void)setDataSource:(id)arg1;

@end
