
@interface BRCDirectoryItem : BRCLocalItem <BRCTopLevelShareable> {
    NSNumber * _childItemCount;
    long long  _mtime;
    bool  _needsDeleteForItemIDTransfer;
}

@property (nonatomic, readonly) BRCAliasItem *asBRAlias;
@property (nonatomic, readonly) BRCDirectoryItem *asDirectory;
@property (nonatomic, readonly) BRCDocumentItem *asDocument;
@property (nonatomic) long long mtime;
@property (nonatomic, readonly) NSString *unsaltedBookmarkData;

- (void).cxx_destruct;
- (bool)_deleteFromDB:(id)arg1 keepAliases:(bool)arg2;
- (id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id*)arg4;
- (id)_initWithLocalItem:(id)arg1;
- (id)_initWithRelativePath:(id)arg1 parentGlobalID:(id)arg2;
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
- (bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (bool)_insertRecursiveProperties;
- (void)_learnItemID:(id)arg1 serverItem:(id)arg2;
- (bool)_markChildrenLostForDeadParent;
- (void)_markLostDirectoryAsAlmostDead;
- (bool)_recomputeChildItemCount;
- (bool)_repopulateRecursivePropertiesIfNecessary;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)arg1;
- (id)_serverChildItemCount;
- (bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (bool)_updateRecursiveProperties;
- (id)asDirectory;
- (id)asShareableItem;
- (bool)changedAtRelativePath:(id)arg1 scanPackage:(bool)arg2;
- (id)childItemCount;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (id)collaborationIdentifierIfComputable;
- (bool)containsDirFault;
- (bool)containsFault;
- (bool)containsOverQuotaItems;
- (bool)containsPendingDeleteDocuments;
- (bool)containsPendingDownload;
- (bool)containsPendingUploadOrSyncUp;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainstLocalItem:(id)arg1;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (bool)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)folderRootStructureRecord;
- (bool)hasDeadChildren;
- (bool)hasLiveChildren;
- (bool)hasLostChildren;
- (bool)hasPendingLostChildren;
- (bool)hasShareIDAndIsOwnedByMe;
- (bool)isAppLibraryTrashFolder;
- (bool)isCrossZoneMoveTombstone;
- (bool)isDirectory;
- (bool)isDirectoryFault;
- (bool)isDirectoryWithPackageName;
- (bool)isShareableItem;
- (bool)isSharedByMeOrContainsSharedByMeItem;
- (bool)isSharedToMeOrContainsSharedToMeItem;
- (bool)markChildrenLost;
- (void)markNeedsDeleteForItemIDTransfer;
- (void)markRemovedFromFilesystemForServerEdit:(bool)arg1;
- (long long)mtime;
- (bool)possiblyContainsSharedItem;
- (void)prepareForSyncUpInZone:(id)arg1;
- (id)serverQuotaUsage;
- (void)setMtime:(long long)arg1;
- (bool)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 etagIfLoser:(id)arg3 stageFileName:(id)arg4 error:(id*)arg5;
- (void)transformIntoFSRoot;
- (bool)updateFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;
- (void)updateItemMetadataFromServerItem:(id)arg1 appliedSharingPermission:(bool)arg2;
- (bool)updateLocationAndMetaFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;

@end
