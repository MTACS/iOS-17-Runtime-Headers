
@interface DNDSWorkoutTriggerManager : NSObject <DNDSBiomeTriggerManager> {
    NPSDomainAccessor * _accessor;
    NSObject<OS_dispatch_queue> * _biomeQueue;
    <DNDSWorkoutTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> * _dataSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NPSManager * _npsManager;
    NSObject<OS_dispatch_queue> * _npsQueue;
    NSMutableDictionary * _sinks;
}

@property (nonatomic) <DNDSWorkoutTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accessor;
- (id)_assertionIdentifierForHealthKitWorkoutEvent:(id)arg1;
- (void)_configureWorkoutTriggerWithMode:(id)arg1;
- (bool)_isWorkoutDNDNanoPreferenceEnabled;
- (bool)_isWorkoutTriggerEnabledForModeConfiguration:(id)arg1;
- (void)_migrateWorkoutDNDNanoPreference;
- (void)_npsQueue_refreshForNanoPreferenceChange;
- (void)_refresh;
- (void)_refreshForNanoPreferenceChange;
- (void)_refreshMigratingIfNecessary;
- (void)_refreshWithMode:(id)arg1 event:(id)arg2;
- (void)_setWorkoutDNDNanoPreferenceEnabled:(bool)arg1;
- (void)_updateNanoPreferencesForRefreshWithModeConfiguration:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)init;
- (void)pairedDeviceDidChange;
- (void)refresh;
- (void)refreshMigratingIfNecessary;
- (void)setDataSource:(id)arg1;

@end
