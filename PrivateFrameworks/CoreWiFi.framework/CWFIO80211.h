
@interface CWFIO80211 : NSObject {
    id /* block */  _eventHandler;
    NSObject<OS_dispatch_queue> * _eventQueue;
    bool  _isMonitoringEvents;
    NSObject<OS_dispatch_queue> * _mutexQueue;
    struct IONotificationPort { } * _portRef;
    struct IONotificationPort { } * _portRefVirtual;
    unsigned int  _publishIO80211SkywalkInterface;
    unsigned int  _publishIO80211VirtualInterface;
    unsigned int  _terminatedIO80211SkywalkInterface;
    unsigned int  _terminatedIO80211VirtualInterface;
}

@property (copy) id /* block */ eventHandler;

- (void).cxx_destruct;
- (id)IO80211ControllerInfo;
- (id)IO80211InterfaceInfo:(id)arg1 error:(id*)arg2;
- (id)__IO80211InfoMatchingService:(unsigned int)arg1;
- (void)dealloc;
- (id /* block */)eventHandler;
- (id)init;
- (bool)isMonitoringEvents;
- (void)setEventHandler:(id /* block */)arg1;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;

@end
