
@interface CDPDCircleStateObserver : NSObject <CDPDXPCEventListener> {
    int  _circleChangeToken;
    NSMutableArray * _circleObservers;
    NSObject<OS_dispatch_queue> * _eventQueue;
    bool  _isObserving;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (const char *)_notificationName;
- (void)_sendCircleStatusChangedForContext:(id)arg1;
- (void)_sendCircleViewStatusChangedForContext:(id)arg1;
- (void)dealloc;
- (void)eventReceived:(const char *)arg1 eventValue:(unsigned long long)arg2;
- (id)init;
- (void)observeChangeToState:(unsigned long long)arg1 circleProxy:(id)arg2 handler:(id /* block */)arg3;
- (void)observeCircleStateWithCircleProxy:(id)arg1 changeHandler:(id /* block */)arg2;
- (void)registerListener:(id)arg1;
- (void)stopObservingCircleStatusChange;

@end
