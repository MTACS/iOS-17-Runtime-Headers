
@interface MCMVolumeChangeMonitor : NSObject <MCMVolumeChangeMonitor> {
    NSURL * _mountPointURL;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    unsigned int  _notifier;
    NSHashTable * _observers;
    bool  _started;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *mountPointURL;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic) bool started;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callbackWithVolume:(unsigned int)arg1 notificationType:(unsigned int)arg2 margs:(void*)arg3;
- (unsigned long long)_changeEventStart:(unsigned long long)arg1 end:(unsigned long long)arg2 targetActiveState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4 newState:(unsigned long long)arg5;
- (void)_notifyObserver:(id)arg1 events:(unsigned long long)arg2 newVolumeState:(unsigned long long)arg3;
- (void)_notifyObserversIfNeededWithOldState:(unsigned long long)arg1 newState:(unsigned long long)arg2;
- (void)_notifyObserversOfEvents:(unsigned long long)arg1 newVolumeState:(unsigned long long)arg2;
- (id)_volumesToMonitor;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithWorkloop:(id)arg1 mountPointURL:(id)arg2;
- (id)mountPointURL;
- (id)notificationQueue;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)start;
- (bool)started;
- (unsigned long long)state;

@end
