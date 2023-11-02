
@interface NSSQLStoreRequestContext : NSObject {
    NSSQLiteConnection * _connection;
    NSManagedObjectContext * _context;
    NSError * _error;
    NSException * _exception;
    bool  _hasHistoryTracking;
    NSPersistentStoreRequest * _persistentStoreRequest;
    NSQueryGenerationToken * _queryGeneration;
    id  _result;
    NSSQLCore * _sqlCore;
    bool  _storeIsInMemory;
    NSNumber * _transactionID;
    bool  _useColoredLogging;
    bool  _useConcurrentFetching;
}

@property (nonatomic, readonly) bool isWritingRequest;
@property (nonatomic, readonly) NSPersistentStoreRequest *persistentStoreRequest;
@property (nonatomic, retain) id result;
@property (nonatomic, readonly) NSSQLRowCache *rowCache;

- (void)dealloc;
- (void)executeEpilogue;
- (void)executePrologue;
- (bool)executeRequestCore:(id*)arg1;
- (bool)executeRequestUsingConnection:(id)arg1;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (bool)isWritingRequest;
- (id)persistentStoreRequest;
- (id)result;
- (id)rowCache;
- (void)setResult:(id)arg1;

@end
