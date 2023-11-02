
@interface HFProxControlActivityClientManager : NSObject {
    NSUUID * _accessoryID;
    NSObject<OS_dispatch_queue> * _dataModelUpdateQueue;
    bool  _hasStartedMonitoringUpdates;
    NSUUID * _homeID;
    NSOrderedSet * _lastActivities;
    PCDisambiguationContext * _lastDisambiguationContext;
    NSObject * _lastIdentifier;
    NSHashTable * _observers;
    PCRemoteActivityClient * _proxControlActivityClient;
    bool  _useSAConfig;
}

@property (nonatomic, retain) NSUUID *accessoryID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dataModelUpdateQueue;
@property (nonatomic) bool hasStartedMonitoringUpdates;
@property (nonatomic, retain) NSUUID *homeID;
@property (nonatomic, copy) NSOrderedSet *lastActivities;
@property (nonatomic, retain) PCDisambiguationContext *lastDisambiguationContext;
@property (nonatomic, retain) NSObject *lastIdentifier;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) PCRemoteActivityClient *proxControlActivityClient;
@property (nonatomic) bool useSAConfig;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_notifyObserversForUpdatedActivities:(id)arg1 forProxControlID:(id)arg2 disambiguationContext:(id)arg3;
- (void)_resetProxClient;
- (id)_setupProxControlClient;
- (id)accessoryID;
- (void)addObserver:(id)arg1;
- (id)dataModelUpdateQueue;
- (bool)hasStartedMonitoringUpdates;
- (id)homeID;
- (id)init;
- (void)invalidateProxClient;
- (id)lastActivities;
- (id)lastDisambiguationContext;
- (id)lastIdentifier;
- (id)observers;
- (id)proxControlActivityClient;
- (void)removeObserver:(id)arg1;
- (void)setAccessoryID:(id)arg1;
- (void)setDataModelUpdateQueue:(id)arg1;
- (void)setHasStartedMonitoringUpdates:(bool)arg1;
- (void)setHomeID:(id)arg1;
- (void)setLastActivities:(id)arg1;
- (void)setLastDisambiguationContext:(id)arg1;
- (void)setLastIdentifier:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setProxControlActivityClient:(id)arg1;
- (void)setUseSAConfig:(bool)arg1;
- (id)startMonitoringUpdatesForAccessoryID:(id)arg1 homeID:(id)arg2;
- (id)startMonitoringUpdatesForMediaRemoteIdentifier:(id)arg1;
- (bool)useSAConfig;
- (void)userTappedCloseButton;
- (void)userTappedDisambiguationButtonForContext:(id)arg1;

@end
