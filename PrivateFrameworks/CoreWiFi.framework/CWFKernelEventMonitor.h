
@interface CWFKernelEventMonitor : NSObject {
    id /* block */  _eventHandler;
    NSObject<OS_dispatch_queue> * _eventQueue;
    bool  _isMonitoringEvents;
    NSObject<OS_dispatch_source> * _keventSource;
    NSObject<OS_dispatch_queue> * _mutexQueue;
}

@property (copy) id /* block */ eventHandler;

- (void).cxx_destruct;
- (id)__descriptionForKernelEventCode:(unsigned long long)arg1;
- (void)dealloc;
- (id /* block */)eventHandler;
- (id)init;
- (unsigned long long)interfaceFlagsWithInterfaceName:(id)arg1;
- (bool)isMonitoringEvents;
- (void)setEventHandler:(id /* block */)arg1;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;

@end
