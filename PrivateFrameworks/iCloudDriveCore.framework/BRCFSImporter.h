
@interface BRCFSImporter : NSObject <BRCModule, BRCSuspendable> {
    BRCFairSource * _childPropagationSource;
    unsigned long long  _currentPropagationMinRowID;
    BRFileObjectID * _currentPropagationObject;
    bool  _isCancelled;
    BRCAccountSessionFPFS * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_changeBasicFieldsOnItem:(id)arg1 fields:(unsigned long long)arg2 template:(id)arg3;
- (void)_childPropagationSchedule;
- (void)_cleanItemBatchAfterMigrationToFPFSIfNecessary;
- (id)_createAndInsertNewItemWithImportObject:(id)arg1 parentItem:(id)arg2 fields:(unsigned long long)arg3 templateItem:(id)arg4 fileURL:(id)arg5 options:(unsigned long long)arg6 additionalAttrs:(id)arg7 importBookmark:(id)arg8 stillPendingFields:(unsigned long long*)arg9 error:(id*)arg10;
- (id)_createBaseItemWithImportObject:(id)arg1 importBookmark:(id)arg2 parentItem:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5;
- (id)_findCollidingItemWithTemplateItem:(id)arg1 parentItem:(id)arg2 logicalName:(id)arg3 error:(id*)arg4;
- (id)_globalItemByDocumentID:(unsigned int)arg1;
- (id)_globalItemByFileID:(unsigned long long)arg1;
- (id)_handleCollisionIfNecessaryWithTemplateItem:(id)arg1 parentItem:(id)arg2 logicalName:(id)arg3 fileURL:(id)arg4 options:(unsigned long long)arg5 error:(id*)arg6;
- (bool)_isDesktopOrDocumentsItem:(id)arg1;
- (unsigned char)_itemTypeToFileObjectIDType:(BOOL)arg1 itemID:(id)arg2;
- (void)_learnEtagsIfNecessaryWithItem:(id)arg1 changedFields:(unsigned long long)arg2 baseVersion:(id)arg3;
- (id)_locateMatchingItemForTemplateItem:(id)arg1 parentItem:(id)arg2 logicalName:(id)arg3 options:(unsigned long long)arg4 fileURL:(id)arg5 fields:(unsigned long long*)arg6 shouldReject:(bool*)arg7 additionalAttrs:(id)arg8 importBookmark:(id)arg9 stillPendingFields:(unsigned long long*)arg10 error:(id*)arg11;
- (id)_locateTemplateItemFromFPFSMigration:(id)arg1 fields:(unsigned long long*)arg2 documentHasChanges:(bool*)arg3;
- (void)_markNextChildBatchDead:(id)arg1 persistedState:(id)arg2 batchSize:(int)arg3;
- (id)_parseImportBookmark:(id)arg1 templateItem:(id)arg2 fileURL:(id)arg3;
- (void)_processIngestBatch:(id)arg1 minRowID:(unsigned long long)arg2;
- (bool)_processParentAndFilenameIfNecessaryWithLocalItem:(id)arg1 changedFields:(unsigned long long)arg2 templateItem:(id)arg3 error:(id*)arg4;
- (void)_propagateDirectoryMergeOrCrossZoneMove:(id)arg1 persistedState:(id)arg2 batchSize:(int)arg3;
- (void)_propagateFieldsToNextChildBatch:(id)arg1 persistedState:(id)arg2 minRowID:(unsigned long long)arg3 batchSize:(int)arg4;
- (void)_reportBouncingForMigration:(id)arg1 existingItem:(id)arg2;
- (bool)_shouldRejectItemWithName:(id)arg1 templateItem:(id)arg2 existingItem:(id)arg3 options:(unsigned long long)arg4 shouldRemoveItemFromDrive:(bool*)arg5;
- (bool)_trashItem:(id)arg1 error:(id*)arg2;
- (void)_updateCiconiaDatabaseForBouncing:(id)arg1 existingItem:(id)arg2;
- (void)_updateFPFSMigrationStatsForBouncing:(id)arg1 existingItem:(id)arg2;
- (void)cancel;
- (unsigned short)capabilityToMoveItem:(id)arg1 toNewParentItem:(id)arg2 error:(id*)arg3;
- (bool)changeItem:(id)arg1 baseVersion:(id)arg2 changedFields:(unsigned long long)arg3 newValues:(id)arg4 contents:(id)arg5 additionalAttrs:(id)arg6 clearCKInfoOnSyncUp:(bool)arg7 stillPendingFields:(unsigned long long*)arg8 error:(id*)arg9;
- (void)close;
- (id)createAndImportNewDirectoryWithLogicalName:(id)arg1 parentItem:(id)arg2 error:(id*)arg3;
- (id)getOrCreateTrashItemInAppLibrary:(id)arg1 error:(id*)arg2;
- (id)importAppLibraryRootFromTemplateItem:(id)arg1;
- (id)importNewItemAtURL:(id)arg1 logicalName:(id)arg2 parentItem:(id)arg3 templateItem:(id)arg4 fields:(unsigned long long)arg5 options:(unsigned long long)arg6 additionalItemAttributes:(id)arg7 importBookmark:(id)arg8 stillPendingFields:(unsigned long long*)arg9 error:(id*)arg10;
- (id)initWithAccountSession:(id)arg1;
- (bool)isCancelled;
- (bool)isFPFSMigrationInProgress;
- (void)resume;
- (void)signal;
- (void)suspend;
- (bool)trashItem:(id)arg1 parentItemInTrash:(id)arg2 error:(id*)arg3;

@end
