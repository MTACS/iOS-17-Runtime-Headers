
@interface WeatherCloudPersistence : NSObject <WeatherPreferencesPersistence> {
    NSUbiquitousKeyValueStore * _activeCloudStore;
    <WeatherCloudPersistenceDelegate> * _delegate;
    NSUbiquitousKeyValueStore * _encryptedStore;
    WeatherCloudMigrator * _migrator;
    NSUbiquitousKeyValueStore * _nonEncryptedStore;
}

@property (nonatomic, retain) NSUbiquitousKeyValueStore *activeCloudStore;
@property (readonly, copy) NSString *debugDescription;
@property <WeatherCloudPersistenceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSUbiquitousKeyValueStore *encryptedStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WeatherCloudMigrator *migrator;
@property (nonatomic, retain) NSUbiquitousKeyValueStore *nonEncryptedStore;
@property (readonly) Class superclass;

+ (id)cloudPersistenceWithDelegate:(id)arg1;
+ (bool)processIsWhitelistedForSync;

- (void).cxx_destruct;
- (id)activeCloudStore;
- (id)arrayForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (void)cloudCitiesChangedExternally:(id)arg1;
- (id)delegate;
- (id)dictionaryForKey:(id)arg1;
- (id)encryptedStore;
- (void)encryptedStoreChanged:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (bool)isInitialSyncNotification:(id)arg1;
- (id)migrator;
- (id)nonEncryptedStore;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setActiveCloudStore:(id)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEncryptedStore:(id)arg1;
- (void)setNonEncryptedStore:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (bool)synchronize;
- (void)synchronizeWithCompletionHandler:(id /* block */)arg1;

@end
