
@interface AnalyticsStoreMOContext : NSObject {
    NSManagedObjectContext * _managedObjectContext;
    AnalyticsPersistenceManager * _persistenceManager;
    AnalyticsStoreDescriptor * _storeDescriptor;
}

@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) AnalyticsPersistenceManager *persistenceManager;
@property (nonatomic, retain) AnalyticsStoreDescriptor *storeDescriptor;

- (void).cxx_destruct;
- (id)initWithStoreDescriptor:(id)arg1;
- (id)managedObjectContext;
- (id)persistenceManager;
- (void)setManagedObjectContext:(id)arg1;
- (void)setPersistenceManager:(id)arg1;
- (void)setStoreDescriptor:(id)arg1;
- (id)storeDescriptor;
- (bool)storeNeedsImmediatePruning:(unsigned long long)arg1;

@end
