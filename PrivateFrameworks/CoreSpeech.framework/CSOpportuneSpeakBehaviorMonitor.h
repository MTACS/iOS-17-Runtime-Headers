
@interface CSOpportuneSpeakBehaviorMonitor : NSObject {
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)notifyDidStartStreamWithContext:(id)arg1 audioProviderUUID:(id)arg2 successfully:(bool)arg3 option:(id)arg4;
- (void)notifyDidStopStream:(id)arg1;
- (void)notifyWillStartStreamWithContext:(id)arg1 audioProviderUUID:(id)arg2 option:(id)arg3;
- (void)notifyWillStopStream:(id)arg1;
- (id)observers;
- (id)queue;
- (void)registerObserver:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
