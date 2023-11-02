
@interface AFSiriActivationHandlerFrontendProcess : NSObject <AFNotifyObserverDelegate, AFSiriActivationHandling> {
    AFNotifyObserver * _clientStateObserver;
    NSMutableDictionary * _clientStateTransitionHandlersByTimestamp;
    AFSiriActivationConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_waitUntilListeningForContext:(id)arg1 timeoutInterval:(double)arg2 completion:(id /* block */)arg3;
- (bool)handleContext:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;

@end
