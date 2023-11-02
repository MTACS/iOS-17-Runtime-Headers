
@interface NWStatsAppEventListener : NSObject {
    Class  _RBSProcessMonitorClass;
    Class  _RBSProcessPredicateClass;
    Class  _RBSProcessStateDescriptorClass;
    <NWAppStateEventListenerDelegate> * _appStateDelegate;
    RBSProcessMonitor * _appStateMonitor;
    NSObject<OS_dispatch_queue> * _queue;
    void * _runningBoradDylibHandle;
}

@property (nonatomic) <NWAppStateEventListenerDelegate> *appStateDelegate;
@property (nonatomic, retain) RBSProcessMonitor *appStateMonitor;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_applicationStateMonitorInit;
- (id)appStateDelegate;
- (id)appStateMonitor;
- (void)cleanupAppStateMonitor;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id)queue;
- (void)setAppStateDelegate:(id)arg1;
- (void)setAppStateMonitor:(id)arg1;

@end
