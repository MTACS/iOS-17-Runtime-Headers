
@interface AMSMetricsDatabase : NSObject <AMSSQLiteConnectionDelegate> {
    AMSSQLiteConnection * _connection;
    NSString * _containerId;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property (nonatomic, retain) AMSSQLiteConnection *connection;
@property (nonatomic, retain) NSString *containerId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly) Class superclass;

+ (id)sharedDatabaseWithContainerId:(id)arg1;

- (void).cxx_destruct;
- (id)_cachePath;
- (id)_lockedById;
- (void)_performTransaction:(id /* block */)arg1;
- (bool)cleanupInvalidIdentifiersWithError:(id*)arg1;
- (bool)clearIdentifierSyncStateWithError:(id*)arg1;
- (void)close;
- (id)connection;
- (bool)connectionNeedsResetForCorruption:(id)arg1;
- (id)containerId;
- (long long)countAllEventsWithLockKey:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (bool)dropAllEventsWithLockKey:(id)arg1 error:(id*)arg2;
- (bool)dropEvents:(id)arg1 error:(id*)arg2;
- (void)enumerateEventsWithTopic:(id)arg1 lockKey:(id)arg2 objectBlock:(id /* block */)arg3;
- (bool)enumerateUnsyncedIdentifierStoresUsingBlock:(id /* block */)arg1 error:(id*)arg2;
- (bool)enumerateUnsyncedIdentifiersUsingBlock:(id /* block */)arg1 error:(id*)arg2;
- (id)identifierForKey:(id)arg1 updateMaybe:(id /* block */)arg2 error:(id*)arg3;
- (id)identifierStoreForKey:(id)arg1 updateMaybe:(id /* block */)arg2 error:(id*)arg3;
- (id)initWithContainerId:(id)arg1;
- (bool)insertEvents:(id)arg1 error:(id*)arg2;
- (id)internalQueue;
- (id)lockAllEventsWithError:(id*)arg1;
- (bool)permanentlyRemoveIdentifierForKey:(id)arg1 error:(id*)arg2;
- (bool)removeCrossDeviceIdentifiersWithError:(id*)arg1;
- (bool)removeIdentifiersForAccount:(id)arg1 error:(id*)arg2;
- (void)setConnection:(id)arg1;
- (void)setContainerId:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (bool)unlockAllEventsWithKey:(id)arg1 error:(id*)arg2;
- (bool)unlockEvents:(id)arg1 error:(id*)arg2;

@end
