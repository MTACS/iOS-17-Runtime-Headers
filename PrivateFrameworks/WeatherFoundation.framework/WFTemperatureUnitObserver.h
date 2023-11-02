
@interface WFTemperatureUnitObserver : NSObject {
    NSMutableDictionary * _blockObserversForUUID;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataSynchronizationLock;
    NSHashTable * _observerObjects;
    NSObject<OS_dispatch_queue> * _temperatureUnitUpdateQueue;
    int  _userTemperatureUnit;
}

@property (retain) NSMutableDictionary *blockObserversForUUID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property struct os_unfair_lock_s { unsigned int x1; } dataSynchronizationLock;
@property (retain) NSHashTable *observerObjects;
@property (readonly) int temperatureUnit;
@property (retain) NSObject<OS_dispatch_queue> *temperatureUnitUpdateQueue;
@property int userTemperatureUnit;

+ (id)sharedObserver;

- (void).cxx_destruct;
- (id)_init;
- (void)_updateTemperatureUnit;
- (id)addBlockObserver:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (id)blockObserversForUUID;
- (id)callbackQueue;
- (struct os_unfair_lock_s { unsigned int x1; })dataSynchronizationLock;
- (void)dealloc;
- (id)init;
- (id)observerObjects;
- (void)q_notifyObserversOfUpdatedTemperatureUnit:(int)arg1;
- (void)q_updateTemperatureUnit;
- (void)removeAllObservers;
- (bool)removeBlockObserverWithHandle:(id)arg1;
- (bool)removeObserver:(id)arg1;
- (void)setBlockObserversForUUID:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setDataSynchronizationLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setObserverObjects:(id)arg1;
- (void)setTemperatureUnitUpdateQueue:(id)arg1;
- (void)setUserTemperatureUnit:(int)arg1;
- (int)temperatureUnit;
- (id)temperatureUnitUpdateQueue;
- (int)userTemperatureUnit;

@end
