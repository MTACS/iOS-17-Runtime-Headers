
@interface WeatherCloudPreferences : NSObject <WeatherCloudPersistenceDelegate> {
    <WeatherPreferencesPersistence> * _cloudStore;
    WeatherPreferences * _localPreferences;
    <SynchronizedDefaultsDelegate> * _syncDelegate;
}

@property (nonatomic, retain) <WeatherPreferencesPersistence> *cloudStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) WeatherPreferences *localPreferences;
@property (readonly) Class superclass;
@property (nonatomic) <SynchronizedDefaultsDelegate> *syncDelegate;

- (void).cxx_destruct;
- (void)_synchronize:(bool)arg1;
- (bool)areCloudCities:(id)arg1 equalToLocalCities:(id)arg2;
- (id)citiesByEnforcingSizeLimitOnResults:(id)arg1;
- (void)cloudCitiesChangedExternally:(id)arg1;
- (void)cloudPersistenceDidSynchronize:(id)arg1;
- (id)cloudRepresentationFromCities:(id)arg1;
- (id)cloudStore;
- (void)forceSync;
- (id)initWithLocalPreferences:(id)arg1;
- (id)initWithLocalPreferences:(id)arg1 persistence:(id)arg2;
- (id)localPreferences;
- (id)prepareLocalCitiesForReconciliation:(id)arg1 isInitialSync:(bool)arg2;
- (void)purgeLegacyCloudCities;
- (id)reconcileCloudCities:(id)arg1 withLocal:(id)arg2 isInitialSync:(bool)arg3;
- (void)saveCitiesToCloud:(id)arg1;
- (void)setCloudStore:(id)arg1;
- (void)setCloudStoreCities:(id)arg1;
- (void)setLocalPreferences:(id)arg1;
- (void)setSyncDelegate:(id)arg1;
- (bool)shouldWriteCitiesToCloud:(id)arg1;
- (id)syncDelegate;
- (void)updateLocalStoreWithRemoteChanges:(id)arg1;

@end
