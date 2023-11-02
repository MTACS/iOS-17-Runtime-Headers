
@interface DNDSKeybag : NSObject <DNDSKeybagStateProviding> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    struct _MKBEvent { } * _mbkEvent;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_hasUnlockedSinceBoot;
    NSHashTable * _queue_observers;
    bool  _queue_priorityHasUnlockedSinceBoot;
    NSHashTable * _queue_priorityObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasUnlockedSinceBoot;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLocked;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_beginObservingKeybag;
- (bool)_hasUnlockedSinceBootForObserver:(id)arg1;
- (void)_queue_handleFirstUnlock;
- (void)_queue_handleKeybagStatusChanged;
- (void)addObserver:(id)arg1;
- (void)addPriorityObserver:(id)arg1;
- (void)dealloc;
- (bool)hasUnlockedSinceBoot;
- (bool)hasUnlockedSinceBootForObserver:(id)arg1;
- (id)init;
- (bool)isLocked;
- (void)removeObserver:(id)arg1;

@end
