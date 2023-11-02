
@interface PLImportSession : PLGenericAlbum <PLFileSystemAlbumMetadataPersistence> {
    bool  _albumShouldBeAutomaticallyDeleted;
    bool  _needsPersistenceUpdate;
}

@property (nonatomic) bool albumShouldBeAutomaticallyDeleted;
@property (nonatomic, retain) NSSet *assets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsPersistenceUpdate;
@property (readonly) Class superclass;

+ (id)albumWithImportSessionID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsWithImportSessionIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
+ (id)insertNewImportSessionAlbumWithImportSessionID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)validKindsForPersistence;

- (bool)_isAssetIncludedInImportDates:(id)arg1;
- (bool)_isDateAfterEndDate:(id)arg1;
- (bool)_isDateBeforeStartDate:(id)arg1;
- (id)_orderedBatchedAssets;
- (void)_updateEndDate:(id)arg1;
- (void)_updateStartDate:(id)arg1;
- (bool)albumShouldBeAutomaticallyDeleted;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)didSave;
- (bool)isEmpty;
- (bool)isValidForPersistence;
- (id)mutableAssets;
- (bool)needsPersistenceUpdate;
- (id)payloadForChangedKeys:(id)arg1;
- (void)persistMetadataToFileSystemWithPathManager:(id)arg1;
- (void)prepareForDeletion;
- (void)removePersistedFileSystemDataWithPathManager:(id)arg1;
- (void)revalidateImportDates;
- (void)setAlbumShouldBeAutomaticallyDeleted:(bool)arg1;
- (void)setNeedsPersistenceUpdate:(bool)arg1;
- (void)updateImportDatesFromAddedAsset:(id)arg1;
- (bool)validForPersistenceChangedForChangedKeys:(id)arg1;
- (void)willSave;

@end
