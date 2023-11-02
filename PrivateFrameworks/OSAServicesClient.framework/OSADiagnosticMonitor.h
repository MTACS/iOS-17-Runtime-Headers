
@interface OSADiagnosticMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSMutableArray * _eventObservers;
    NSMutableSet * _observedEventTypes;
    NSMutableSet * _observedWriteTypes;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _serverConnection;
    NSMutableArray * _writeObservers;
}

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)addEventObserver:(id)arg1 forTypes:(id)arg2;
- (void)addWriteObserver:(id)arg1 forTypes:(id)arg2;
- (void)didWriteLog:(id)arg1;
- (id)init;
- (void)q_addEventObserver:(id)arg1 forTypes:(id)arg2;
- (void)q_addWriteObserver:(id)arg1 forTypes:(id)arg2;
- (void)q_computeEventObserverTypes;
- (void)q_computeWriteObserverTypes;
- (void)q_registerForEventTypes;
- (void)q_registerForWriteTypes;
- (void)q_removeEventObserver:(id)arg1 andComputeObservedTypes:(bool)arg2;
- (void)q_removeWriteObserver:(id)arg1 andComputeObservedTypes:(bool)arg2;
- (id)q_serverConnection;
- (void)q_teardownServerConnectionIfNoMoreObservers;
- (void)receivedLogEvent:(id)arg1;
- (void)removeEventObserver:(id)arg1;
- (void)removeWriteObserver:(id)arg1;
- (void)willWriteLog:(id)arg1;

@end
