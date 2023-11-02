
@interface ATXMemoryPressureMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSObject<OS_dispatch_source> * _memoryMonitoringSource;
    NSHashTable * _observers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)_currentMemoryPressureType;
- (void)_notifyObserversOfMemoryPressureType:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
