
@interface CSAccessorySiriClientBehaviorMonitor : NSObject {
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_init;
- (id)init;
- (void)notifyDidStartStreamWithContext:(id)arg1 successfully:(bool)arg2 option:(id)arg3 withEventUUID:(id)arg4 forAccessory:(id)arg5;
- (void)notifyDidStopStream:(id)arg1 reason:(unsigned long long)arg2 withEventUUID:(id)arg3 forAccessory:(id)arg4;
- (void)notifyWillStartStreamWithContext:(id)arg1 option:(id)arg2 forAccessory:(id)arg3;
- (void)notifyWillStopStream:(id)arg1 reason:(unsigned long long)arg2 forAccessory:(id)arg3;
- (id)observers;
- (id)queue;
- (void)registerObserver:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
