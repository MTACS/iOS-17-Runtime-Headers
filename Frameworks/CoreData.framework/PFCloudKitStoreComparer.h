
@interface PFCloudKitStoreComparer : NSObject {
    PFCloudKitArchivingUtilities * _archivingUtilities;
    PFCloudKitStoreComparisonCache * _cache;
    bool  _onlyCompareSharedZones;
}

@property (nonatomic, readonly) PFCloudKitArchivingUtilities *archivingUtilities;
@property (nonatomic, readonly) PFCloudKitStoreComparisonCache *cache;
@property (nonatomic) bool onlyCompareSharedZones;

+ (id)trimExcessiveValuesForLog:(id)arg1;

- (id)archivingUtilities;
- (id)cache;
- (bool)compareAttributesOnObject:(id)arg1 toObject:(id)arg2 error:(id*)arg3;
- (bool)compareCloudKitMetadataOfStore:(id)arg1 toStore:(id)arg2 error:(id*)arg3;
- (bool)compareContentOfStore:(id)arg1 toStore:(id)arg2 error:(id*)arg3;
- (bool)compareDatabaseScopeAndIdentityInStore:(id)arg1 toStore:(id)arg2 error:(id*)arg3;
- (bool)compareObjectsInStore:(id)arg1 toStore:(id)arg2 error:(id*)arg3;
- (bool)compareRelationshipsOfRecordID:(id)arg1 withStoreObject:(id)arg2 andOtherObject:(id)arg3 error:(id*)arg4;
- (void)dealloc;
- (bool)ensureContentsMatch:(id*)arg1;
- (bool)ensureContentsOfStore:(id)arg1 matchContentsOfStore:(id)arg2 error:(id*)arg3;
- (bool)ensureMirroredRelationshipsMatchForStore:(id)arg1 otherStore:(id)arg2 error:(id*)arg3;
- (bool)ensureMoveReceiptsMatchForStore:(id)arg1 otherStore:(id)arg2 error:(id*)arg3;
- (bool)ensureStoresAgreeOnCloudKitTables:(id)arg1 error:(id*)arg2;
- (id)getObjectMatchingRecordID:(id)arg1 fromStore:(id)arg2 withManagedObjectContext:(id)arg3;
- (id)getRecordIDsForRelationship:(id)arg1 onObject:(id)arg2;
- (id)initWithStore:(id)arg1 otherStore:(id)arg2;
- (bool)isValue:(id)arg1 equalToValue:(id)arg2 forAttribute:(id)arg3;
- (bool)onlyCompareSharedZones;
- (void)setOnlyCompareSharedZones:(bool)arg1;
- (bool)validateValue:(id)arg1 againstOtherValue:(id)arg2 forIgnoredAttribute:(id)arg3;

@end
