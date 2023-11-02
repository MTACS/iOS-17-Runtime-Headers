
@interface PFCloudKitStoreComparisonCache : NSObject {
    bool  _checkCloudKitMetadata;
    NSPersistentStore * _otherStore;
    NSManagedObjectContext * _otherStoreMoc;
    NSPersistentStore * _store;
    NSManagedObjectContext * _storeMoc;
    NSMutableDictionary * _storeUUIDToStoreCache;
}

@property (nonatomic, readonly) bool checkCloudKitMetadata;
@property (nonatomic, readonly) NSPersistentStore *otherStore;
@property (nonatomic, readonly) NSManagedObjectContext *otherStoreMoc;
@property (nonatomic, readonly) NSPersistentStore *store;
@property (nonatomic, readonly) NSManagedObjectContext *storeMoc;

- (void)_setCheckCloudKitMetadata:(bool)arg1;
- (bool)checkCloudKitMetadata;
- (long long)databaseScopeForStoreWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)deriveIdentifierForNonCloudObjectID:(id)arg1;
- (id)identifiersForStore:(id)arg1;
- (id)identityRecordNameForStoreWithIdentifier:(id)arg1;
- (id)initWithStore:(id)arg1 otherStore:(id)arg2;
- (id)metadataForObjectWithID:(id)arg1;
- (id)mirroredRelationshipForObject:(id)arg1 relatedToObject:(id)arg2 byRelationship:(id)arg3;
- (id)mtmKeysForRecordZone:(id)arg1 inStore:(id)arg2;
- (id)mtmKeysForStore:(id)arg1;
- (id)objectIDForIdentifier:(id)arg1 inStore:(id)arg2;
- (id)objectIDForRecordID:(id)arg1 inStore:(id)arg2;
- (id)otherStore;
- (id)otherStoreMoc;
- (bool)populate:(id*)arg1;
- (id)recordIDForObjectID:(id)arg1;
- (id)recordIDsRelatedToRecordID:(id)arg1 byRelationshipNamed:(id)arg2 inStore:(id)arg3;
- (id)recordIdsForStore:(id)arg1;
- (id)sharedZoneIDsForStore:(id)arg1;
- (id)store;
- (id)storeMoc;

@end
