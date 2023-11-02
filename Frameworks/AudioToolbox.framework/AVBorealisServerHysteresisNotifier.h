
@interface AVBorealisServerHysteresisNotifier : NSObject {
    NSMutableArray * _portsToMonitor;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableArray *portsToMonitor;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)addPortToMonitor:(unsigned long long)arg1 hysteresisDurationSeconds:(float)arg2 notificationBlock:(id /* block */)arg3;
- (void)dealloc;
- (id)getPortManagerForType:(unsigned long long)arg1;
- (id)initWithSerialQueue:(id)arg1;
- (bool)isPortActive:(unsigned long long)arg1 activePortsToken:(unsigned long long)arg2;
- (id)portsToMonitor;
- (void)processState:(unsigned long long)arg1;
- (id)queue;
- (void)removePortToMonitor:(unsigned long long)arg1;
- (void)sendState:(id)arg1;
- (void)setPortsToMonitor:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)stateChanged:(bool)arg1;
- (void)stateChanged:(bool)arg1 forPort:(id)arg2;

@end
