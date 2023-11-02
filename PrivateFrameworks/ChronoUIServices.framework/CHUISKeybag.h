
@interface CHUISKeybag : NSObject {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    struct _MKBEvent { } * _mkbRegistrationToken;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_isEffectivelyLocked;
    NSHashTable * _queue_observers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_queue_handleKeybagStatusChanged;
- (bool)_queue_isEffectivelyLocked;
- (void)addObserver:(id)arg1;
- (id)init;
- (bool)isEffectivelyLocked;
- (void)removeObserver:(id)arg1;

@end
