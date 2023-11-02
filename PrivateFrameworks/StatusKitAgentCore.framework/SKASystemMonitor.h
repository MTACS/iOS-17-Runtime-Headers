
@interface SKASystemMonitor : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _ivarLock;
    NSHashTable * _listeners;
    bool  _underFirstLock;
}

@property (nonatomic, readonly) bool isUnderFirstDataProtectionLock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } ivarLock;
@property (nonatomic, retain) NSHashTable *listeners;
@property (nonatomic) bool underFirstLock;

+ (id)logger;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_deliverNotificationSelectorToListeners:(SEL)arg1;
- (bool)_deviceStillUnderFirstLock;
- (void)_listenForKeyBagChangeNotifications;
- (void)_updateLockState;
- (void)addListener:(id)arg1;
- (id)init;
- (bool)isUnderFirstDataProtectionLock;
- (struct os_unfair_lock_s { unsigned int x1; })ivarLock;
- (id)listeners;
- (void)removeListener:(id)arg1;
- (void)setIvarLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setListeners:(id)arg1;
- (void)setUnderFirstLock:(bool)arg1;
- (bool)underFirstLock;

@end
