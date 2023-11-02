
@interface AFDeviceRingerSwitchObserver : NSObject <AFNotifyObserverDelegate> {
    bool  _isActive;
    NSHashTable * _listeners;
    AFNotifyObserver * _notifyObserver;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

+ (id)sharedObserver;

- (void).cxx_destruct;
- (void)_updateStateWithNotifyState:(unsigned long long)arg1;
- (void)addListener:(id)arg1;
- (id)init;
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)removeListener:(id)arg1;
- (long long)state;

@end
