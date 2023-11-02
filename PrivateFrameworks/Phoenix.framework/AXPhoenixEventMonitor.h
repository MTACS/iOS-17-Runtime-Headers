
@interface AXPhoenixEventMonitor : NSObject {
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)enumerateObservers:(id /* block */)arg1;
- (void)enumerateObserversInQueue:(id /* block */)arg1;
- (id)init;
- (void)notifyObserver:(id)arg1;
- (id)observers;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setQueue:(id)arg1;

@end
