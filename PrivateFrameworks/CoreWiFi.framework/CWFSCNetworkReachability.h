
@interface CWFSCNetworkReachability : NSObject {
    id /* block */  _eventHandler;
    NSObject<OS_dispatch_queue> * _eventQueue;
    bool  _isMonitoringEvents;
    NSObject<OS_dispatch_queue> * _mutexQueue;
    struct __SCNetworkReachability { } * _reachabilityRef;
}

@property (copy) id /* block */ eventHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)eventHandler;
- (unsigned int)flags;
- (id)init;
- (bool)isMonitoringEvents;
- (void)setEventHandler:(id /* block */)arg1;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;

@end
