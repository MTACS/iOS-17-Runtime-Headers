
@interface CSActivationEventNotificationHandler : NSObject {
    NSMapTable * _delegates;
    CSActivationEvent * _pendingActivationEvent;
    id /* block */  _pendingCompletion;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMapTable *delegates;
@property (nonatomic, retain) CSActivationEvent *pendingActivationEvent;
@property (nonatomic, copy) id /* block */ pendingCompletion;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_hasPendingActivationForType:(unsigned long long)arg1;
- (bool)_isVoiceTriggerEvent:(id)arg1;
- (void)_notifyActivationEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)_startMonitoring;
- (void)_stopMonitoring;
- (void)dealloc;
- (id)delegates;
- (id)init;
- (void)notifyActivationEvent:(id)arg1 completion:(id /* block */)arg2;
- (id)pendingActivationEvent;
- (id /* block */)pendingCompletion;
- (id)queue;
- (void)setDelegate:(id)arg1 forType:(unsigned long long)arg2;
- (void)setDelegates:(id)arg1;
- (void)setPendingActivationEvent:(id)arg1;
- (void)setPendingCompletion:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)start;
- (void)stop;

@end
