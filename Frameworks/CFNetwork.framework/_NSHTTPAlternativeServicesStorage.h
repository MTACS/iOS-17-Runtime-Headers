
@interface _NSHTTPAlternativeServicesStorage : NSObject {
    bool  _dbInitialized;
    bool  _garbageCollectionDispatched;
    bool  _isMemoryStore;
    NSURL * _path;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSMutableSet * clearEntries;
    struct sqlite3 { } * dbConnection;
    struct sqlite3_stmt { } * deleteExpiredEntriesStmt;
    struct sqlite3_stmt { } * deleteWithHostAndPortStmt;
    struct sqlite3_stmt { } * deleteWithRegistrableDomainStmt;
    struct sqlite3_stmt { } * deleteWithTimeStmt;
    struct sqlite3_stmt { } * insertEntriesStmt;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    NSMutableSet * memoryEntries;
    struct sqlite3_stmt { } * selectAllEntriesStmt;
    struct sqlite3_stmt { } * selectAllValidEntriesStmt;
    struct sqlite3_stmt { } * selectEntriesStmt;
    struct sqlite3_stmt { } * selectEntriesWithRegistrableDomainStmt;
    NSMutableDictionary * speculativeEntries;
    struct sqlite3_stmt { } * trimDbStmt;
}

@property (nonatomic, readonly) NSURL *path;

+ (id)sharedPersistentStore;

- (void).cxx_destruct;
- (id)HTTPServiceEntriesWithFilter:(id)arg1;
- (id)HTTPServiceEntriesWithRegistrableDomain:(id)arg1;
- (void)dealloc;
- (id)entries;
- (id)init;
- (id)initInMemoryStore;
- (id)initPersistentStoreWithURL:(id)arg1;
- (id)path;
- (void)removeHTTPAlternativeServiceEntriesCreatedAfterDate:(id)arg1;
- (void)removeHTTPAlternativeServiceEntriesWithHost:(id)arg1 port:(long long)arg2;
- (void)removeHTTPAlternativeServiceEntriesWithRegistrableDomain:(id)arg1;
- (void)storeHTTPServiceEntry:(id)arg1;

@end
