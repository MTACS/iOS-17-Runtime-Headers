
@interface PLConversation : PLGenericAlbum <PLCreateFromSearchableItem> {
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
@property (nonatomic) unsigned short syndicate;

+ (id)albumWithConversationID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsWithConversationIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)createOrUpdateObjectFromSearchableItem:(id)arg1 library:(id)arg2 fullIndexSyncStartDate:(id)arg3 createIfNeeded:(bool)arg4 didCreate:(bool*)arg5 isSyndicatable:(bool*)arg6 error:(id*)arg7;
+ (id)entityName;
+ (id)insertNewConversationAlbumWithConversationID:(id)arg1 inManagedObjectContext:(id)arg2;

- (bool)_isAssetIncludedInConversationDates:(id)arg1;
- (bool)_isDateAfterEndDate:(id)arg1;
- (bool)_isDateBeforeStartDate:(id)arg1;
- (id)_orderedBatchedAssets;
- (void)_updateAssetSyndicationState:(unsigned short)arg1;
- (void)_updateEndDate:(id)arg1;
- (void)_updateStartDate:(id)arg1;
- (bool)albumShouldBeAutomaticallyDeleted;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (unsigned long long)count;
- (bool)isEmpty;
- (id)mutableAssets;
- (bool)needsPersistenceUpdate;
- (void)setAlbumShouldBeAutomaticallyDeleted:(bool)arg1;
- (void)setNeedsPersistenceUpdate:(bool)arg1;
- (void)updateConversationDatesFromAddedAsset:(id)arg1;
- (void)willSave;

@end
