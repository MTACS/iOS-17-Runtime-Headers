
@interface BUManagedRestrictionsProvider : NSObject <BURestrictionsProviding, MCProfileConnectionObserver> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _isAccountModificationAllowed;
    bool  _isBookStoreAllowed;
    bool  _isExplicitContentAllowed;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAccountModificationAllowed;
@property (nonatomic) bool isBookStoreAllowed;
@property (nonatomic) bool isExplicitContentAllowed;
@property (nonatomic, retain) NSHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentObserversCopy;
- (void)_uq_notifyObserversForAccountModificationRestrictionsChange;
- (void)_uq_notifyObserversForBookStoreRestrictionsChange;
- (void)_uq_notifyObserversForExplicitContentRestrictionsChange;
- (void)_uq_updateRestrictionsIfNeeded;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isAccountModificationAllowed;
- (bool)isBookStoreAllowed;
- (bool)isExplicitContentAllowed;
- (id)observers;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)setIsAccountModificationAllowed:(bool)arg1;
- (void)setIsBookStoreAllowed:(bool)arg1;
- (void)setIsExplicitContentAllowed:(bool)arg1;
- (void)setObservers:(id)arg1;

@end
