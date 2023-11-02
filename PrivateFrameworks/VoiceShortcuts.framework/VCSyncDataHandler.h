
@interface VCSyncDataHandler : NSObject <VCSyncDataHandling> {
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _servicesTable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly, copy) NSArray *services;
@property (nonatomic, readonly) NSHashTable *servicesTable;
@property (readonly) Class superclass;

+ (Class)changeClass;
+ (int)messageType;

- (void).cxx_destruct;
- (bool)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id*)arg3;
- (bool)deleteSyncedData:(id*)arg1;
- (void)deregisterSyncService:(id)arg1;
- (id)init;
- (bool)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id*)arg4;
- (id)queue;
- (void)registerSyncService:(id)arg1;
- (void)requestFullResync;
- (void)requestSync;
- (bool)resetSyncStateForService:(id)arg1 error:(id*)arg2;
- (id)services;
- (id)servicesTable;
- (id)unsyncedChangesForSyncService:(id)arg1 metadata:(id*)arg2 error:(id*)arg3;

@end
