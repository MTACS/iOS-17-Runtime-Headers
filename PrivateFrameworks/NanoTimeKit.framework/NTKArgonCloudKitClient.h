
@interface NTKArgonCloudKitClient : NSObject <NTKArgonFetcherProviding, NTKArgonPublisherProviding> {
    CKDatabase * _database;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSError * _recordZoneError;
    CKRecordZoneID * _recordZoneID;
    NSURL * _temporaryStorageURL;
    NSString * _zoneName;
}

@property (nonatomic, readonly) CKDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSError *recordZoneError;
@property (nonatomic, retain) CKRecordZoneID *recordZoneID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSURL *temporaryStorageURL;
@property (nonatomic, readonly, copy) NSString *zoneName;

+ (id)sharedClientQueue;

- (void).cxx_destruct;
- (void)_fetchNewRecordsSinceChangeToken:(id)arg1 forReason:(long long)arg2 attemptNumber:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)_publishRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)_unpublishRecordsOfType:(id)arg1 matchingPredicate:(id)arg2 completion:(id /* block */)arg3;
- (void)_unpublishRecordsWithPartialQueryOperation:(id)arg1 accumulatedRecords:(id)arg2 completion:(id /* block */)arg3;
- (id)database;
- (id)debugDescription;
- (void)fetchNewRecordsSinceChangeToken:(id)arg1 forReason:(long long)arg2 completion:(id /* block */)arg3;
- (id)initWithCloudKitDatabase:(id)arg1 temporaryStorageURL:(id)arg2 zoneName:(id)arg3;
- (id)initWithCloudKitDatabase:(id)arg1 zoneName:(id)arg2;
- (id)internalQueue;
- (void)publishKeyDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (id)recordZoneError;
- (id)recordZoneID;
- (void)requestIdentifierTokenForCurrentUserWithCompletion:(id /* block */)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setRecordZoneError:(id)arg1;
- (void)setRecordZoneID:(id)arg1;
- (id)temporaryStorageURL;
- (void)unpublishKeyDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (id)zoneName;

@end
