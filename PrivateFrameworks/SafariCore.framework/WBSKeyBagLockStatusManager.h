
@interface WBSKeyBagLockStatusManager : NSObject {
    NSMutableSet * _handlers;
    NSObject<OS_dispatch_queue> * _internalQueue;
    int  _notifyTokenFirstUnlock;
    int  _notifyTokenLockStatusChanged;
}

@property (getter=isKeyBagEnabled, nonatomic, readonly) bool keyBagEnabled;
@property (nonatomic, readonly) long long keyBagLockStatus;
@property (getter=isLockedOrAboutToLock, nonatomic, readonly) bool lockedOrAboutToLock;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_descriptionOfKeyBagLockStatus:(long long)arg1;
- (void)_startObservingKeyBagLockStatusChanges;
- (void)_stopObservingKeyBagLockStatusChanges;
- (id)addKeyBagLockStatusChangedObserverWithHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (bool)isKeyBagEnabled;
- (bool)isLockedOrAboutToLock;
- (long long)keyBagLockStatus;
- (void)removeKeyBagLockStatusChangedObserver:(id)arg1;

@end
