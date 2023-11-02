
@interface WFPersonalHotspotStateMonitor : NSObject {
    NSRunLoop * _callbackRunLoop;
    NSThread * _callbackThread;
    WFClient * _client;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property NSRunLoop *callbackRunLoop;
@property (nonatomic, retain) NSThread *callbackThread;
@property (nonatomic, retain) WFClient *client;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;

- (void).cxx_destruct;
- (void)_runManagerCallbackThread;
- (void)_spawnManagerCallbackThread;
- (void)asyncMISDiscoveryState:(id /* block */)arg1;
- (id)callbackRunLoop;
- (id)callbackThread;
- (id)client;
- (void)dealloc;
- (id)init;
- (id)internalQueue;
- (void)setCallbackRunLoop:(id)arg1;
- (void)setCallbackThread:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setMISDiscoveryState:(bool)arg1 immediateDisable:(bool)arg2;

@end
