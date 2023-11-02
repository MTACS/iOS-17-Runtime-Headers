
@interface HDSPSleepStorage : NSObject <HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPNotificationObserver, HDSPSource, HDSPSyncedUserDefaultsExternalChangeDelegate> {
    HDSPSyncedDefaultsConfiguration * _configuration;
    HDSPEnvironment * _environment;
    HKSPObserverSet * _observers;
    HDSPSyncedDefaults * _syncedDefaults;
}

@property (nonatomic, readonly) unsigned long long cloudStorageDataVersion;
@property (nonatomic, readonly) HDSPSyncedDefaultsConfiguration *configuration;
@property (nonatomic, readonly) unsigned long long dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dontNotify;
@property (nonatomic, readonly) bool dontSync;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long localDataVersion;
@property (nonatomic, readonly) bool needsMigration;
@property (nonatomic, readonly) HKSPObserverSet *observers;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDSPSyncedDefaults *syncedDefaults;

+ (id)standardConfiguration;

- (void).cxx_destruct;
- (id)_loadObjectOfClass:(Class)arg1 allowedClasses:(id)arg2 propertiesToLoad:(id)arg3 error:(id*)arg4;
- (bool)_removeObjectProperties:(id)arg1 error:(id*)arg2;
- (bool)_saveObject:(id)arg1 error:(id*)arg2;
- (bool)_saveObjectChanges:(id)arg1 versionKey:(id)arg2 currentVersion:(unsigned long long)arg3 error:(id*)arg4;
- (void)addObserver:(id)arg1;
- (unsigned long long)cloudStorageDataVersion;
- (id)configuration;
- (unsigned long long)dataVersion;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (id)environment;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 configuration:(id)arg2 syncedDefaults:(id)arg3;
- (id)loadSleepEventRecord:(id*)arg1;
- (id)loadSleepSchedule:(id*)arg1;
- (id)loadSleepScheduleModel:(id*)arg1;
- (id)loadSleepSettings:(id*)arg1;
- (unsigned long long)localDataVersion;
- (bool)needsMigration;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (id)observers;
- (void)performInitialSyncWithCompletion:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (bool)removeSleepEventRecordWithError:(id*)arg1;
- (bool)removeSleepScheduleWithError:(id*)arg1;
- (bool)removeSleepSettingsWithError:(id*)arg1;
- (void)resetCloudStorage;
- (void)saveDataVersion;
- (bool)saveSleepEventRecord:(id)arg1 error:(id*)arg2;
- (bool)saveSleepEventRecordChanges:(id)arg1 error:(id*)arg2;
- (bool)saveSleepSchedule:(id)arg1 error:(id*)arg2;
- (bool)saveSleepScheduleChanges:(id)arg1 error:(id*)arg2;
- (bool)saveSleepScheduleModel:(id)arg1 error:(id*)arg2;
- (bool)saveSleepSettings:(id)arg1 error:(id*)arg2;
- (bool)saveSleepSettingsChanges:(id)arg1 error:(id*)arg2;
- (id)sourceIdentifier;
- (id)syncedDefaults;
- (void)syncedUserDefaultsDidChangeExternally:(id)arg1;

@end
