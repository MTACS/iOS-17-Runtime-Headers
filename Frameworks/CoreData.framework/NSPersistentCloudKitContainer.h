
@interface NSPersistentCloudKitContainer : NSPersistentContainer <NSCloudKitMirroringDelegateProgressProvider> {
    NSManagedObjectContext * _metadataContext;
    long long  _operationTimeout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)discoverDefaultContainerIdentifier;

- (void)_loadStoreDescriptions:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)acceptShareInvitationsFromMetadata:(id)arg1 intoPersistentStore:(id)arg2 completion:(id /* block */)arg3;
- (void)acceptShareInvitationsFromURLs:(id)arg1 intoPersistentStore:(id)arg2 completion:(id /* block */)arg3;
- (bool)assignManagedObjects:(id)arg1 toCloudKitRecordZone:(id)arg2 inPersistentStore:(id)arg3 error:(id*)arg4;
- (bool)canDeleteRecordForManagedObjectWithID:(id)arg1;
- (bool)canModifyManagedObjectsInStore:(id)arg1;
- (bool)canUpdateRecordForManagedObjectWithID:(id)arg1;
- (void)dealloc;
- (void)eventUpdated:(id)arg1;
- (void)fetchParticipantsMatchingLookupInfos:(id)arg1 intoPersistentStore:(id)arg2 completion:(id /* block */)arg3;
- (id)fetchSharesInPersistentStore:(id)arg1 error:(id*)arg2;
- (id)fetchSharesMatchingObjectIDs:(id)arg1 error:(id*)arg2;
- (id)initWithName:(id)arg1 managedObjectModel:(id)arg2;
- (bool)initializeCloudKitSchemaWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (void)persistUpdatedShare:(id)arg1 inPersistentStore:(id)arg2 completion:(id /* block */)arg3;
- (void)purgeObjectsAndRecordsInZoneWithID:(id)arg1 inPersistentStore:(id)arg2 completion:(id /* block */)arg3;
- (id)recordForManagedObjectID:(id)arg1;
- (id)recordIDForManagedObjectID:(id)arg1;
- (id)recordIDsForManagedObjectIDs:(id)arg1;
- (id)recordsForManagedObjectIDs:(id)arg1;
- (void)setPersistentStoreDescriptions:(id)arg1;
- (void)shareManagedObjects:(id)arg1 toShare:(id)arg2 completion:(id /* block */)arg3;

@end
