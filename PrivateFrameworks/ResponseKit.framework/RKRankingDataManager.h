
@interface RKRankingDataManager : NSObject {
    NSManagedObjectContext * _managedObjectContext;
    NSPersistentStore * _persistentStore;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
}

@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSPersistentStore *persistentStore;
@property (nonatomic, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void).cxx_destruct;
- (id)fetchRankingInfoForCategory:(id)arg1;
- (id)fetchRankingInfoFromDB;
- (void)flushRankingData;
- (unsigned long long)getNumberOfEntriesInDB;
- (id)initWithDatabaseFilename:(id)arg1;
- (id)initWithLanguageID:(id)arg1;
- (void)insertRankingInfoFromDictionary:(id)arg1;
- (void)insertRankingInfoFromDictionary:(id)arg1 withDate:(id)arg2;
- (id)managedObjectContext;
- (id)persistentStore;
- (id)persistentStoreCoordinator;
- (void)pruneUserDatabase;
- (void)resetRankingData;
- (void)setManagedObjectContext:(id)arg1;
- (void)setPersistentStore:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;

@end
