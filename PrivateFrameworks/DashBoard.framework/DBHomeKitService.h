
@interface DBHomeKitService : NSObject <DBHomeKitEntity, HMAccessoryDelegate> {
    NSDictionary * _characteristics;
    NSDictionary * _characteristicsByType;
    DBHome * _home;
    NSUUID * _homeUniqueIdentifier;
    bool  _lastWritten;
    CARObserverHashTable * _observers;
    HMService * _service;
}

@property (nonatomic, readonly) NSDictionary *characteristics;
@property (nonatomic, readonly) NSDictionary *characteristicsByType;
@property (nonatomic, readonly) bool current;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) bool hasError;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) DBHome *home;
@property (nonatomic, readonly) NSUUID *homeUniqueIdentifier;
@property (nonatomic, readonly) bool interactive;
@property (nonatomic) bool lastWritten;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) CARObserverHashTable *observers;
@property (nonatomic, readonly) bool pendingRead;
@property (nonatomic, readonly) bool pendingWrite;
@property (nonatomic, readonly) bool reachable;
@property (nonatomic, retain) HMService *service;
@property (nonatomic, readonly) NSString *stateDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) bool usable;

+ (void)load;
+ (id)observerProtocol;
+ (void)registerServiceClass:(Class)arg1;
+ (id)registeredServiceClasses;
+ (id)serviceType;
+ (id)serviceWithHome:(id)arg1 service:(id)arg2;

- (void).cxx_destruct;
- (void)_characteristicDidUpdate:(id)arg1;
- (bool)_shouldUpdateLastUsedForCharacteristic:(id)arg1;
- (bool)_tracksLastUsed;
- (void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)accessoryDidUpdateServices:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)characteristicForName:(id)arg1;
- (id)characteristicForType:(id)arg1;
- (id)characteristics;
- (id)characteristicsByType;
- (bool)current;
- (id)description;
- (double)distance;
- (bool)hasError;
- (id)home;
- (id)homeUniqueIdentifier;
- (id)initWithHome:(id)arg1 service:(id)arg2;
- (bool)interactive;
- (bool)lastWritten;
- (id)managedCharacteristics;
- (id)name;
- (id)observers;
- (bool)pendingRead;
- (bool)pendingWrite;
- (bool)reachable;
- (void)refreshCharacteristicValues;
- (void)removeObserver:(id)arg1;
- (id)service;
- (id)serviceType;
- (void)setLastWritten:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)setService:(id)arg1;
- (id)stateDescription;
- (id)type;
- (id)uniqueIdentifier;
- (bool)usable;

@end
