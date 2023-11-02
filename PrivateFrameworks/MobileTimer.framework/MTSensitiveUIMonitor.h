
@interface MTSensitiveUIMonitor : NSObject {
    bool  _hideSensitiveUI;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _needPrefsUpdate;
    int  _notifyToken;
    MTObserverStore * _observers;
}

@property (nonatomic) bool hideSensitiveUI;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic) bool needPrefsUpdate;
@property (nonatomic) int notifyToken;
@property (nonatomic, retain) MTObserverStore *observers;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_handleNotification;
- (bool)_hideSensitiveUI;
- (bool)_isVendorRelease;
- (void)_withLock:(id /* block */)arg1;
- (void)addSensitiveUIObserver:(id)arg1;
- (void)dealloc;
- (bool)hideSensitiveUI;
- (id)init;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (bool)needPrefsUpdate;
- (int)notifyToken;
- (id)observers;
- (void)registerForNotifications;
- (void)removeSensitiveUIObserver:(id)arg1;
- (void)setHideSensitiveUI:(bool)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setNeedPrefsUpdate:(bool)arg1;
- (void)setNotifyToken:(int)arg1;
- (void)setObservers:(id)arg1;
- (bool)shouldHideForSensitivity:(long long)arg1;
- (void)unregisterForNotifications;

@end
