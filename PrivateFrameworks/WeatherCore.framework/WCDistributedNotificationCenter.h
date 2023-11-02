
@interface WCDistributedNotificationCenter : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataSynchronizationLock;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } dataSynchronizationLock;
@property (nonatomic, retain) NSHashTable *observers;

+ (id)defaultCenter;

- (void).cxx_destruct;
- (void)_notifyObserversOfPreferencesChange;
- (void)addObserver:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })dataSynchronizationLock;
- (id)init;
- (id)observers;
- (void)postWeatherLocationAuthorizationDidUpdateNotification;
- (void)postWeatherSavedLocationsDidUpdateNotification;
- (void)removeObserver:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)weatherPrefsDidGetUpdated:(id)arg1;

@end
