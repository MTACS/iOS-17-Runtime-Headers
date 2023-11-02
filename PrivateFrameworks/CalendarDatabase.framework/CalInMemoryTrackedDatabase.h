
@interface CalInMemoryTrackedDatabase : NSObject {
    NSHashTable * _clients;
    CalDatabaseInMemoryChangeTracking * _database;
}

@property (nonatomic, readonly) NSHashTable *clients;
@property (nonatomic, readonly) CalDatabaseInMemoryChangeTracking *database;
@property (nonatomic, readonly) bool hasClients;

- (void).cxx_destruct;
- (id)clients;
- (id)database;
- (bool)hasClients;
- (id)init;

@end
