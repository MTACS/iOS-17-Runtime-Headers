
@interface _UIDictationTelephonyMonitor : NSObject <CXCallObserverDelegate> {
    id /* block */  _activityChanged;
    CXCallObserver * _callObserver;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _telephonyActivity;
}

@property (copy) id /* block */ activityChanged;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool telephonyActivity;

- (void).cxx_destruct;
- (void)_backgroundInit;
- (void)_backgroundReset;
- (id /* block */)activityChanged;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (id)init;
- (void)setActivityChanged:(id /* block */)arg1;
- (void)start;
- (bool)telephonyActivity;

@end
