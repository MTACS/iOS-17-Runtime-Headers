
@interface AnalyticsStoreMOHandler : NSObject {
    AnalyticsPersistenceManager * _persistenceManager;
    AnalyticsStoreMOContext * _storeMOContext;
    unsigned long long  _storeType;
}

@property (nonatomic, retain) AnalyticsPersistenceManager *persistenceManager;
@property (nonatomic, retain) AnalyticsStoreMOContext *storeMOContext;
@property (nonatomic) unsigned long long storeType;

- (void).cxx_destruct;
- (void)ageOutManagedObjectsOlderThan:(double)arg1;
- (id)initWithType:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)managedObjectContext;
- (void)performBlockOnManagedObjectContext:(id)arg1 block:(id /* block */)arg2;
- (void)performBlockOnManagedObjectContextForNSData:(id)arg1 withDate:(id)arg2 block:(id /* block */)arg3;
- (void)performPruneBasedOnStoreSizeAndSave;
- (id)persistenceManager;
- (void)pruneManagedObjects;
- (void)saveManagedObjectContext;
- (bool)setBssManagedObjectPropertyValueForKeyWithoutSave:(id)arg1 forKey:(id)arg2 withValue:(id)arg3;
- (bool)setNetworkManagedObjectPropertyValueForKeyWithoutSave:(id)arg1 forKey:(id)arg2 withValue:(id)arg3;
- (void)setPersistenceManager:(id)arg1;
- (void)setStoreMOContext:(id)arg1;
- (void)setStoreType:(unsigned long long)arg1;
- (id)storeMOContext;
- (unsigned long long)storeType;
- (void)updateManagedObjectContextWithoutSave;

@end
