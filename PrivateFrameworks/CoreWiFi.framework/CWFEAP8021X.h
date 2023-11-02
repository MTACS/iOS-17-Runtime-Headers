
@interface CWFEAP8021X : NSObject {
    id /* block */  _eventHandler;
    NSObject<OS_dispatch_queue> * _eventQueue;
    NSString * _interfaceName;
    bool  _isMonitoringEvents;
    NSObject<OS_dispatch_queue> * _mutexQueue;
    struct __SCDynamicStore { } * _storeRef;
}

@property (copy) id /* block */ eventHandler;
@property (nonatomic, readonly, copy) NSString *interfaceName;

- (void).cxx_destruct;
- (void)__startEventMonitoring;
- (id)clientStatus:(id*)arg1;
- (id)controlMode:(id*)arg1;
- (id)controlState:(id*)arg1;
- (void)dealloc;
- (id /* block */)eventHandler;
- (id)init;
- (id)initWithInterfaceName:(id)arg1;
- (id)interfaceName;
- (bool)isMonitoringEvents;
- (void)setEventHandler:(id /* block */)arg1;
- (void)startEventMonitoring;
- (void)stopEventMonitoring;
- (id)supplicantState:(id*)arg1;

@end
