
@interface IMEventListener : NSObject {
    id /* block */  _completionBlock;
    id /* block */  _didInvokeCompletion;
    unsigned long long  _eventCount;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    id  _target;
    double  _timeLastEventReceived;
    double  _timeListeningStarted;
    double  _timeListeningStopped;
    double  _timeout;
    double  _timerStart;
    id /* block */  _willInvokeCompletion;
    bool  _willRepeat;
}

@property (copy) id /* block */ completionBlock;
@property (copy) id /* block */ didInvokeCompletion;
@property (readonly) double elapsedWaitingTime;
@property (readonly) unsigned long long eventCount;
@property (getter=isListening, readonly) bool listening;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;
@property id target;
@property (readonly) double timeLastEventReceived;
@property (readonly) double timeListeningStarted;
@property (readonly) double timeListeningStopped;
@property double timeout;
@property (nonatomic) double timerStart;
@property (copy) id /* block */ willInvokeCompletion;
@property (nonatomic) bool willRepeat;

+ (id)_mutableListenerDictionary;
+ (id)allListeners;
+ (id)eventListener;
+ (id)eventListenerWithNotificationName:(id)arg1 object:(id)arg2;

- (void).cxx_destruct;
- (void)_addToListeners;
- (void)_cancelTimeoutTimer;
- (void)_didReceiveEvent:(bool)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)_dispatchStartEventBlock:(id /* block */)arg1;
- (void)_handleTimeout:(id)arg1;
- (void)_invokeCompletion:(bool)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)_removeFromListeners;
- (void)_reset;
- (void)_startListening;
- (void)_startTimeoutTimerIfNeeded;
- (void)_stopListening;
- (id /* block */)completionBlock;
- (id)createResult:(bool)arg1 userInfo:(id)arg2 error:(id)arg3;
- (id /* block */)didInvokeCompletion;
- (double)elapsedWaitingTime;
- (unsigned long long)eventCount;
- (bool)isListening;
- (void)reset;
- (id)semaphore;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDidInvokeCompletion:(id /* block */)arg1;
- (void)setTarget:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setTimerStart:(double)arg1;
- (void)setWillInvokeCompletion:(id /* block */)arg1;
- (void)setWillRepeat:(bool)arg1;
- (void)startListening;
- (void)startListeningForEventTarget:(id)arg1 completion:(id /* block */)arg2;
- (void)startListeningForEventTarget:(id)arg1 sendStartingEvent:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)stopListening;
- (id)target;
- (double)timeLastEventReceived;
- (double)timeListeningStarted;
- (double)timeListeningStopped;
- (double)timeout;
- (double)timerStart;
- (void)waitForCompletion;
- (id /* block */)willInvokeCompletion;
- (bool)willRepeat;
- (void)willReset;
- (void)willStartListening;
- (void)willStopListening;

@end