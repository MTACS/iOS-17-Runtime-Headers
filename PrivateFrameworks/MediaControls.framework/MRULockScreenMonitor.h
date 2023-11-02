
@interface MRULockScreenMonitor : NSObject {
    bool  _deviceLocked;
    int  _mobileKeyBagLockStatusNotifyToken;
    NSHashTable * _weakObservers;
}

@property (getter=isDeviceLocked, nonatomic, readonly) bool deviceLocked;
@property (nonatomic) int mobileKeyBagLockStatusNotifyToken;
@property (nonatomic, readonly) NSArray *observers;
@property (nonatomic, retain) NSHashTable *weakObservers;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)_init;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (bool)isDeviceLocked;
- (int)mobileKeyBagLockStatusNotifyToken;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setDeviceLocked:(bool)arg1;
- (void)setMobileKeyBagLockStatusNotifyToken:(int)arg1;
- (void)setWeakObservers:(id)arg1;
- (void)updateDeviceLocked;
- (id)weakObservers;

@end
