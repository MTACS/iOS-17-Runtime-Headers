
@interface MTIDCloudKitStore : NSObject <MTIDCloudKitLocalDBDelegate, MTIDSecretStore, MTIDSyncEngineDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _canSyncBetweenDevices;
    NSString * _containerIdentifier;
    NSMutableDictionary * _generatedDates;
    MTIDCloudKitLocalDB * _localDB;
    MTIDCloudKitPromiseManager * _promiseManager;
    MTIDSyncEngine * _syncEngine;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property bool canSyncBetweenDevices;
@property (nonatomic, retain) NSString *containerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *generatedDates;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MTIDCloudKitLocalDB *localDB;
@property (nonatomic, retain) MTIDCloudKitPromiseManager *promiseManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) MTIDSyncEngine *syncEngine;

+ (id)keyOfReferenceDate:(id)arg1;
+ (id)recordZoneID;
+ (id)referenceDateOfRecord:(id)arg1;
+ (id)referenceRecordIDForScheme:(id)arg1 dsId:(id)arg2;
+ (id)spanRecordIDForScheme:(id)arg1 referenceRecordID:(id)arg2 serialNumber:(unsigned long long)arg3;
+ (id)spanRecordKeyWithReferenceRecord:(id)arg1 serialNumber:(unsigned long long)arg2;
+ (bool)updateRecord:(id)arg1 isSpanRecord:(bool)arg2 scheme:(id)arg3 expectedKey:(id)arg4 expiration:(id)arg5 reset:(bool)arg6;

- (void).cxx_destruct;
- (void)_generateFutureRecordsForScheme:(id)arg1 referenceRecord:(id)arg2;
- (id)accessQueue;
- (void)accountDidChangeWithUserRecordID:(id)arg1;
- (bool)canSyncBetweenDevices;
- (void)clearLocalData;
- (void)cloudKitLocalDB:(id)arg1 didChangeRecord:(id)arg2;
- (id)containerIdentifier;
- (id)debugInfo;
- (void)fetchChangesIfNeeded;
- (void)generateFutureRecordsForScheme:(id)arg1 referenceRecord:(id)arg2;
- (id)generatedDates;
- (id)initWithContainerIdentifer:(id)arg1 enableSync:(bool)arg2;
- (id)localDB;
- (id)maintainSchemes:(id)arg1 options:(id)arg2;
- (id)promiseForRecordWithID:(id)arg1 timeout:(double)arg2 qualityOfService:(long long)arg3 existingOnly:(bool)arg4 updateRecordMaybe:(id /* block */)arg5;
- (id)promiseManager;
- (void)recordWasDeleted:(id)arg1;
- (void)recordWasFailedToSave:(id)arg1;
- (void)recordWasFetched:(id)arg1;
- (void)recordWasSaved:(id)arg1;
- (id)recordWithID:(id)arg1;
- (id)recordWithID:(id)arg1 qualityOfService:(long long)arg2 updateRecordMaybe:(id /* block */)arg3 error:(id*)arg4;
- (id)referenceRecordForScheme:(id)arg1 dsId:(id)arg2 date:(id)arg3 reset:(bool)arg4 timeout:(double)arg5 existingOnly:(bool)arg6 qualityOfService:(long long)arg7;
- (id)resetSchemes:(id)arg1 options:(id)arg2;
- (id)secretForScheme:(id)arg1 options:(id)arg2;
- (void)setAccessQueue:(id)arg1;
- (void)setCanSyncBetweenDevices:(bool)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setGeneratedDates:(id)arg1;
- (void)setLocalDB:(id)arg1;
- (void)setPromiseManager:(id)arg1;
- (void)setSyncEngine:(id)arg1;
- (id)spanRecordForScheme:(id)arg1 span:(id)arg2 timeout:(double)arg3 existingOnly:(bool)arg4 qualityOfService:(long long)arg5 referenceRecord:(id)arg6;
- (id)syncEngine;
- (void)syncEngineDidStartWithError:(id)arg1;
- (id)syncForSchemes:(id)arg1 options:(id)arg2;

@end
