
@interface WebBookmarkCollection : NSObject <WBBookmarkProvider, WBDatabaseLockAcquisitorDelegate> {
    WBCollectionConfiguration * _configuration;
    struct unique_ptr<WebBookmarks::BookmarkSQLWriteTransaction, std::default_delete<WebBookmarks::BookmarkSQLWriteTransaction>> { 
        struct __compressed_pair<WebBookmarks::BookmarkSQLWriteTransaction *, std::default_delete<WebBookmarks::BookmarkSQLWriteTransaction>> { 
            struct BookmarkSQLWriteTransaction {} *__value_; 
        } __ptr_; 
    }  _currentTransaction;
    WBDatabaseLockAcquisitor * _databaseLockAcquisitor;
    struct sqlite3 { } * _db;
    bool  _dirty;
    int  _favoritesFolderIdentifier;
    long long  _lastObservedLocalMigrationState;
    struct __CFLocale { } * _locale;
    long long  _mergeMode;
    WebBookmark * _rootBookmark;
    SafariFetcherServerProxy * _safariFetcherServerProxy;
    bool  _setupFinished;
    WebBookmarkTitleWordTokenizer * _wordTokenizer;
}

@property (nonatomic, readonly) long long _cloudKitLocalMigrationState;
@property (nonatomic, readonly) bool _usesCloudKit;
@property (nonatomic, readonly, copy) NSData *accountHash;
@property (nonatomic, readonly) WebBookmark *bookmarksBarBookmark;
@property (nonatomic, readonly) WebBookmarkList *bookmarksBarList;
@property (nonatomic, readonly) WebBookmarkList *bookmarksNeedingIcons;
@property (nonatomic, readonly, copy) NSArray *changeList;
@property (nonatomic, readonly) WBCollectionConfiguration *configuration;
@property (nonatomic, readonly) bool containsOnlyStockBookmarks;
@property (nonatomic, readonly) long long currentRecordGeneration;
@property (nonatomic, readonly, copy) WBBookmarkDatabaseSyncData *databaseSyncData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WebBookmark *favoritesFolder;
@property (nonatomic, readonly) WebBookmarkList *favoritesFolderList;
@property (nonatomic, readonly) long long firstSkippedProfileDeviceGeneration;
@property (nonatomic, readonly) long long firstSkippedProfileGeneration;
@property (nonatomic, readonly) WebBookmark *frequentlyVisitedSitesFolder;
@property (nonatomic, readonly, copy) NSNumber *frequentlyVisitedSitesFolderBookmarkID;
@property (nonatomic, readonly) WebBookmarkList *frequentlyVisitedSitesList;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, readonly) bool hasInMemoryChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic) long long lastSyncedRecordGeneration;
@property (nonatomic, readonly) long long localMigrationState;
@property (getter=isMerging, nonatomic, readonly) bool merging;
@property (nonatomic, readonly, copy) NSArray *purgeableReadingListItems;
@property (nonatomic, readonly) unsigned long long purgeableSpace;
@property (nonatomic, readonly) WebBookmark *readingListFolder;
@property (nonatomic, readonly) int readingListFolderBookmarkID;
@property (nonatomic, readonly) WebBookmarkList *rollingListOfArchivedReadingListItems;
@property (nonatomic, readonly) unsigned long long rollingReadingListMaximumCount;
@property (nonatomic, readonly) WebBookmark *rootBookmark;
@property (nonatomic, readonly) WebBookmarkList *rootList;
@property (readonly) Class superclass;
@property (getter=isTransactionCurrentlyActive, nonatomic, readonly) bool transactionCurrentlyActive;
@property (nonatomic, readonly) WebBookmarkList *webFilterAllowedSites;
@property (nonatomic, readonly) WebBookmark *webFilterAllowedSitesFolder;
@property (nonatomic, readonly) int webFilterAllowedSitesFolderBookmarkID;

// Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks

+ (id)_cloudKitSyncMetadataFileNameWithCollectionType:(long long)arg1;
+ (id)_defaultDatabaseFileNameForConfiguration:(id)arg1;
+ (id)_deviceIdentifierForCloudKitWithCollectionType:(long long)arg1;
+ (bool)_isLockedSync;
+ (bool)_lockSync;
+ (void)_postBookmarksChangedSyncNotificationOnSyncQueue;
+ (bool)_removeCorruptedBookmarksDatabaseAtPath:(id)arg1;
+ (id)_syncFlags;
+ (id)_syncLockFileName;
+ (id)_uniqueExternalUUID;
+ (void)_unlockSync;
+ (id)bookmarkImagesDirectoryPath;
+ (id)collectionWithConfiguration:(id)arg1;
+ (id)databasePathForConfiguration:(id)arg1;
+ (id)deviceIdentifierForCloudKitWithCollectionType:(long long)arg1 generateIfNeeded:(bool)arg2;
+ (void)holdLockSync:(const void*)arg1;
+ (id)inMemoryChangeSet;
+ (id)inMemoryChangesFileURL;
+ (bool)isLockedSync;
+ (bool)isSyncAllowed;
+ (bool)lockSync;
+ (id)readingListArchivesDirectoryPath;
+ (unsigned long long)readingListArchivesDiskUsage;
+ (void)resetDeviceIdentifierForCloudKitWithCollectionType:(long long)arg1;
+ (id)safariBookmarkCollection;
+ (id)safariDirectoryPath;
+ (void)unholdLockSync:(const void*)arg1;
+ (void)unlockSync;
+ (void)unlockSyncAsynchronously;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_addBookmarkWithTitle:(id)arg1 address:(id)arg2 parentID:(int)arg3 orderIndex:(unsigned int)arg4 isFolder:(bool)arg5 externalUUID:(id)arg6 associatedBookmark:(id)arg7 updateParentChildCount:(bool)arg8 updateAncestorEntries:(bool)arg9 incrementGenerations:(bool)arg10;
- (void)_addBookmarksForReadingListMatchStatement:(id)arg1 normalizedQuery:(id)arg2 toArray:(id)arg3 maxResults:(int)arg4;
- (bool)_addChildrenOfID:(int)arg1 toCollection:(id)arg2 recursive:(bool)arg3 error:(id*)arg4;
- (void)_appendDuplicateBookmarkGroupsInBookmarks:(id)arg1 toGroups:(id)arg2 considerBookmarksWithSyncDataAsUnique:(bool)arg3 davHomePath:(id)arg4;
- (void)_applyInMemoryChange:(id)arg1 fromChangeSet:(id)arg2 updatedBookmarks:(id)arg3;
- (id)_applyInMemoryChanges:(id)arg1 postChangeNotification:(bool)arg2;
- (bool)_bookmark:(id)arg1 hasCurrentDAVHomePath:(id)arg2;
- (bool)_bookmark:(id)arg1 hasPriorityOverBookmarkForDeduplication:(id)arg2 prioritizeBookmarksWithSyncData:(bool)arg3 davHomePath:(id)arg4;
- (bool)_bookmark:(id)arg1 isDuplicateOfBookmark:(id)arg2;
- (id)_bookmarkDictionaryForSqliteRow:(struct sqlite3_stmt { }*)arg1 recursive:(bool)arg2 error:(id*)arg3;
- (bool)_bookmarkHasSyncedToServer:(id)arg1;
- (id)_bookmarkUUIDsInFolderWithID:(int)arg1;
- (id)_bookmarksFromStatementSelectingIDs:(const char *)arg1 withQuery:(id)arg2;
- (bool)_checkDatabaseIntegrity;
- (bool)_childrenOfParentBookmarkAreUnsyncable:(id)arg1;
- (bool)_clearAllSyncData;
- (bool)_clearAllSyncKeys;
- (bool)_clearAllTombstones;
- (bool)_clearAllTombstonesDuringOrBeforeLocalRecordGeneration:(long long)arg1;
- (void)_clearAndCreateAncestorTable;
- (void)_clearAndCreateBookmarksTables;
- (void)_clearAndCreateBookmarksTitleWordTable;
- (void)_clearCachedFavoritesFolderIdentifier;
- (bool)_clearChangeList;
- (bool)_clearFrequentlyVisitedSitesFolder:(bool)arg1;
- (bool)_clearSyncDataAfterICloudKeychainReset;
- (bool)_clearSyncKeysUnderBookmarkID:(int)arg1 isFolder:(bool)arg2;
- (bool)_clearTitleWordsForBookmarkID:(int)arg1;
- (bool)_clearTombstoneForBookmark:(id)arg1;
- (long long)_cloudKitLocalMigrationState;
- (void)_collectChangesOfType:(int)arg1 withClause:(id)arg2 intoArray:(id)arg3;
- (void)_createFreshDatabase;
- (void)_createInMemoryChangeSet;
- (void)_createRecoveredBookmarksFolderIfNeeded;
- (void)_createSchema;
- (void)_cullReadingListBookmarksList:(id)arg1 toSize:(unsigned long long)arg2;
- (id)_databaseTitleForSpecialID:(int)arg1;
- (bool)_deduplicateBookmarksForBookmarkDAVWithHomeURL:(id)arg1;
- (bool)_deduplicateBookmarksForSyncingAndTrackChanges:(bool)arg1 considerBookmarksWithSyncDataAsUnique:(bool)arg2;
- (bool)_deduplicateBookmarksWithRootFolder:(int)arg1 depth:(unsigned long long)arg2 trackChanges:(bool)arg3 considerBookmarksWithSyncDataAsUnique:(bool)arg4 davHomeURL:(id)arg5;
- (bool)_deleteAncestorTableEntriesForBookmarkID:(int)arg1;
- (bool)_deleteAndRebuildAncestorTableRecords;
- (bool)_deleteBookmark:(id)arg1 leaveTombstone:(bool)arg2;
- (bool)_deleteBookmark:(id)arg1 leaveTombstone:(bool)arg2 insertTombstoneBlock:(id /* block */)arg3;
- (bool)_deleteBookmark:(id)arg1 postChangeNotification:(bool)arg2 forApplyingInMemoryChanges:(bool)arg3;
- (void)_deleteBookmarkInMemory:(id)arg1;
- (bool)_deleteBookmarks:(id)arg1 leaveTombstone:(bool)arg2;
- (void)_deleteIconForBookmark:(id)arg1;
- (bool)_deleteRecursively:(int)arg1 descendantsOnly:(bool)arg2;
- (bool)_deleteSyncPropertyForKey:(id)arg1;
- (void)_enableAutoVacuum;
- (void)_enableForeignKeys;
- (bool)_ensureFolderChildrenCount:(id)arg1;
- (void)_enumerateBookmarksForMatchStatement:(id)arg1 normalizedQuery:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumerateContentsOfBookmarkFolder:(int)arg1 includingSubfolders:(bool)arg2 usingBlock:(id /* block */)arg3;
- (id)_errorForMostRecentSQLiteError;
- (id)_errorForMostRecentSQLiteErrorWithErrorCode:(long long)arg1;
- (int)_executeSQL:(id)arg1;
- (int)_executeSQLWithCString:(const char *)arg1;
- (id)_fastFetchBookmarksInBookmarkFolder:(int)arg1 includingHiddenBookmarks:(bool)arg2;
- (id)_fastFetchBookmarksInBookmarkFolder:(int)arg1 includingInMemoryChanges:(bool)arg2;
- (id)_fastFetchBookmarksInBookmarkFolder:(int)arg1 options:(unsigned long long)arg2 offset:(int)arg3 limit:(int)arg4;
- (id)_fastFetchBookmarksInBookmarkFolder:(int)arg1 options:(unsigned long long)arg2 offset:(int)arg3 limit:(int)arg4 includingInMemoryChanges:(bool)arg5;
- (int)_favoritesFolderIdentifier;
- (id)_fetchBookmarkIDsInFolder:(int)arg1 onlyFolders:(bool)arg2 includingHiddenBookmarks:(bool)arg3;
- (int)_finalizeStatementIfNotNull:(struct sqlite3_stmt { }*)arg1;
- (id)_firstBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(bool)arg2 inParent:(int)arg3;
- (id)_firstOrLastServerIDInFolderWithServerID:(id)arg1 isFirst:(bool)arg2;
- (id)_firstServerIDInFolderWithServerID:(id)arg1;
- (id)_folderContentsDidChangeNotificationName;
- (id)_generateNewServerIDForBookmark:(id)arg1;
- (id)_generateSyncPositionForOrderIndex:(unsigned int)arg1 inFolderWithID:(int)arg2 direction:(long long)arg3;
- (bool)_importBookmarksPlist:(id)arg1;
- (bool)_importSyncAnchorPlist:(id)arg1;
- (id)_inMemoryChangeSet;
- (bool)_incrementGeneration;
- (bool)_incrementRecordGeneration;
- (bool)_indexAllTitleWords;
- (bool)_indexBookmarkID:(int)arg1 title:(id)arg2;
- (bool)_insertAncestorTableEntriesForBookmarkID:(int)arg1 withAncestorIDs:(id)arg2;
- (bool)_insertAncestorTableEntriesForBookmarkID:(int)arg1 withParentID:(int)arg2;
- (bool)_insertTombsonesRecursivelyForRootFolder:(id)arg1 insertTombstoneBlock:(id /* block */)arg2;
- (bool)_insertTombstoneWithServerID:(id)arg1 itemType:(long long)arg2 subtype:(long long)arg3 syncData:(id)arg4;
- (int)_intFromExecutingSQL:(id)arg1;
- (bool)_isDatabaseWriteAllowed;
- (bool)_isTombstoneWithServerID:(id)arg1;
- (id)_lastServerIDInFolderWithServerID:(id)arg1;
- (bool)_markBookmarkID:(int)arg1 added:(bool)arg2;
- (bool)_markBookmarkID:(int)arg1 withSpecialID:(int)arg2;
- (bool)_markSpecialBookmarks;
- (bool)_mergeBookmark:(id)arg1 withOriginalBookmark:(id)arg2 prioritizeOriginalBookmarkAttributes:(bool)arg3 generateChangesIfNeeded:(bool)arg4;
- (long long)_mergeBookmarkIntoPersistedBookmark:(id)arg1 forAttributes:(unsigned long long)arg2;
- (id)_mergeCandidateBookmarkWithTitle:(id)arg1 address:(id)arg2 parent:(int)arg3 mergeMode:(long long)arg4;
- (id)_mergeCandidateFolderWithTitle:(id)arg1 parent:(int)arg2 mergeMode:(long long)arg3;
- (bool)_mergeChildrenOfID:(int)arg1 referencingBase:(id)arg2 error:(id*)arg3;
- (long long)_mergeMode;
- (void)_metaDataFileChanged:(id)arg1;
- (bool)_migrateBookmarksPlist:(id)arg1 syncAnchorPlist:(id)arg2;
- (void)_migrateSchemaVersion0ToVersion1;
- (void)_migrateSchemaVersion10ToVersion11;
- (void)_migrateSchemaVersion11And12And13ToVersion14;
- (void)_migrateSchemaVersion14ToVersion15;
- (void)_migrateSchemaVersion15ToVersion16;
- (void)_migrateSchemaVersion16AndVersion17AndVersion18ToVersion19;
- (void)_migrateSchemaVersion19And20ToVersion21;
- (void)_migrateSchemaVersion1And2ToVersion3;
- (void)_migrateSchemaVersion21ToVersion22;
- (void)_migrateSchemaVersion22ToVersion23;
- (void)_migrateSchemaVersion23ToVersion24;
- (void)_migrateSchemaVersion24ToVersion25;
- (void)_migrateSchemaVersion25ToVersion26;
- (void)_migrateSchemaVersion26ToVersion27;
- (void)_migrateSchemaVersion27ToVersion28;
- (void)_migrateSchemaVersion28ToVersion29;
- (void)_migrateSchemaVersion29ToVersion30;
- (void)_migrateSchemaVersion30ToVersion31;
- (void)_migrateSchemaVersion31ToVersion32;
- (void)_migrateSchemaVersion32ToVersion33;
- (void)_migrateSchemaVersion33ToVersion34;
- (void)_migrateSchemaVersion34ToVersion35;
- (void)_migrateSchemaVersion35ToVersion36;
- (void)_migrateSchemaVersion36ToVersion37;
- (void)_migrateSchemaVersion37ToVersion38;
- (void)_migrateSchemaVersion38ToVersion39;
- (void)_migrateSchemaVersion39Or40ToVersion41;
- (void)_migrateSchemaVersion3ToVersion4;
- (void)_migrateSchemaVersion41ToVersion42;
- (void)_migrateSchemaVersion42ToVersion43;
- (void)_migrateSchemaVersion43ToVersion44;
- (void)_migrateSchemaVersion44ToVersion45;
- (void)_migrateSchemaVersion45ToVersion46;
- (void)_migrateSchemaVersion46ToVersion47;
- (void)_migrateSchemaVersion47ToVersion48;
- (void)_migrateSchemaVersion48ToVersion49;
- (void)_migrateSchemaVersion49ToVersion50;
- (void)_migrateSchemaVersion4ToVersion5;
- (void)_migrateSchemaVersion50ToVersion51;
- (void)_migrateSchemaVersion51ToVersion52;
- (void)_migrateSchemaVersion52ToVersion53;
- (void)_migrateSchemaVersion53ToVersion54;
- (void)_migrateSchemaVersion54ToVersion55;
- (void)_migrateSchemaVersion5ToVersion6;
- (void)_migrateSchemaVersion6ToVersion7;
- (void)_migrateSchemaVersion7ToVersion8;
- (void)_migrateSchemaVersion8ToVersion9;
- (void)_migrateSchemaVersion9ToVersion10;
- (bool)_migrateToCurrentSchema;
- (bool)_moveBookmark:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (bool)_moveBookmark:(id)arg1 toFolderWithID:(int)arg2;
- (bool)_moveBookmark:(id)arg1 toFolderWithID:(int)arg2 detectCycles:(bool)arg3;
- (bool)_moveBookmark:(id)arg1 toFolderWithID:(int)arg2 orderIndex:(unsigned int)arg3 detectCycles:(bool)arg4 incrementGeneration:(bool)arg5 shouldMerge:(bool)arg6 generateSyncPositionIfNeeded:(bool)arg7;
- (bool)_needsDeduplicationForBookmarkDAVWithHomeURL:(id)arg1;
- (void)_normalizeDatabaseURLs;
- (void)_normalizeSearchString:(struct __CFString { }*)arg1;
- (bool)_openDatabaseAtPath:(id)arg1 checkIntegrity:(bool)arg2 error:(id*)arg3;
- (bool)_orderChildrenWithServerIDs:(id)arg1 inFolderWithServerID:(id)arg2 excludeDeletedBookmarks:(bool)arg3;
- (unsigned int)_orderIndexForBookmarkInsertedIntoParent:(int)arg1 insertAtBeginning:(bool)arg2;
- (id)_orderedWhereClauseForArchiveMode:(long long)arg1;
- (id)_orderedWhereClauseForArchiveMode:(long long)arg1 automaticArchivingEnabled:(bool)arg2;
- (id)_parentIdentifiersOfBookmarksNeedingIcons;
- (bool)_performOSVersionUpgradesFromPreviousVersion:(id)arg1;
- (bool)_performSafariVersionUpgradesFromPreviousVersion:(id)arg1;
- (id)_positionAfterBookmark:(id)arg1;
- (id)_positionAfterOrderIndex:(unsigned int)arg1 inFolderWithID:(int)arg2;
- (id)_positionBeforeBookmark:(id)arg1;
- (id)_positionBeforeOrderIndex:(unsigned int)arg1 inFolderWithID:(int)arg2;
- (void)_postBookmarksChangedSyncNotification;
- (void)_postBookmarksDidReloadNotification;
- (void)_postBookmarksDidReloadNotificationAndStartReadingListFetcherIfChangesWereMade;
- (void)_postBookmarksFolderContentsDidChangeNotification:(int)arg1;
- (void)_postBookmarksSpecialFoldersDidChangeNotification;
- (struct sqlite3_stmt { }*)_prefixSearch:(id)arg1 usingColumns:(const char *)arg2 maxCount:(unsigned int)arg3;
- (bool)_primaryCollection;
- (id)_primaryRecordZoneID;
- (id)_readingListItemsWhere:(id)arg1 filteredBy:(id)arg2 withInMemoryFilter:(id)arg3;
- (bool)_rebuildAncestorTable;
- (bool)_recalculateCachedChildrenCountAndOrderIndices;
- (void)_registerForSyncBookmarksFileChangedNotification;
- (bool)_reindexBookmarkID:(int)arg1 title:(id)arg2;
- (bool)_reorderBookmark:(id)arg1 afterBookmark:(id)arg2;
- (bool)_reorderBookmark:(id)arg1 toIndex:(unsigned int)arg2;
- (bool)_reorderBookmark:(id)arg1 toIndex:(unsigned int)arg2 generateSyncPositionIfNeeded:(bool)arg3;
- (void)_rerunMigrationsIfNecessary;
- (bool)_restoreBookmarkBarIfMissing;
- (bool)_restoreMissingSpecialBookmarksWithChangeNotification:(bool)arg1;
- (void)_restoreOrMergeAllowedSitesFolderAndContentsWithWebFilterAllowedSites:(id)arg1 ensureChildCount:(bool)arg2 postChangeNotification:(bool)arg3;
- (void)_restoreOrMergeReadingListFolderWithChangeNotification:(bool)arg1;
- (id)_rootFolderHiddenChildrenClause;
- (id)_rootServerIDForRecordZoneID:(id)arg1;
- (id)_safariFetcherServerProxy;
- (bool)_saveAndMoveBookmark:(id)arg1 toFolderID:(int)arg2;
- (bool)_saveAndMoveBookmark:(id)arg1 toFolderID:(int)arg2 orderIndex:(unsigned int)arg3;
- (bool)_saveAndMoveBookmarks:(id)arg1 toFolderID:(int)arg2;
- (bool)_saveBookmark:(id)arg1 startReadingListFetcher:(bool)arg2 forApplyingInMemoryChanges:(bool)arg3;
- (bool)_saveBookmark:(id)arg1 withSpecialID:(int)arg2 updateGenerationIfNeeded:(bool)arg3;
- (struct sqlite3_stmt { }*)_selectBookmarksWhere:(id)arg1;
- (struct sqlite3_stmt { }*)_selectBookmarksWhere:(id)arg1 returnType:(long long)arg2;
- (id)_serverIDAfterServerID:(id)arg1;
- (id)_serverIDAtOrderIndex:(unsigned int)arg1 inFolderWithServerID:(id)arg2;
- (id)_serverIDBeforeServerID:(id)arg1;
- (id)_serverIDForBookmarkID:(int)arg1 generateIfNeeded:(bool)arg2;
- (id)_serverIDOfSiblingBookmarkWithServerID:(id)arg1 immediatelyBeforeOrAfter:(bool)arg2;
- (void)_setMergeMode:(long long)arg1;
- (bool)_setSyncData:(id)arg1 forBookmark:(id)arg2;
- (bool)_setSyncKey:(id)arg1 forBookmark:(id)arg2;
- (void)_setSyncNotificationType:(long long)arg1;
- (void)_setupInMemoryChangeSet;
- (bool)_setupWithPath:(id)arg1 checkIntegrity:(bool)arg2;
- (bool)_setupWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3 checkIntegrity:(bool)arg4;
- (bool)_shouldGenerateNewServerIDWhenClearingSyncDataForBookmark:(id)arg1;
- (void)_simulateCrashWithDescription:(id)arg1;
- (int)_specialIDForBookmarkBeingSaved:(id)arg1;
- (int)_specialIDForBookmarkTitle:(id)arg1;
- (struct sqlite3_stmt { }*)_sqliteStatementWithQuery:(id)arg1;
- (int)_sqliteStatementWithQuery:(id)arg1 runInBlock:(id /* block */)arg2;
- (void)_startReadingListFetcher;
- (bool)_syncAdd:(id)arg1 toParent:(int)arg2 withOrderIndex:(unsigned int)arg3 error:(id*)arg4;
- (id)_syncDataBlobForBookmarkServerID:(id)arg1;
- (id)_syncDataForBookmarkID:(int)arg1;
- (id)_syncDataForBookmarkServerID:(id)arg1;
- (id)_syncKeysForServerIDs:(id)arg1;
- (bool)_syncPropertyExistsForKey:(id)arg1;
- (bool)_syncSetString:(id)arg1 forKey:(id)arg2 updatedExistingKey:(bool*)arg3;
- (long long)_syncType;
- (id)_tableExpressionForArchiveMode:(long long)arg1;
- (void)_test_preventPeriodicallyApplyingInMemoryChangesToDatabase;
- (bool)_trackChangesInMemoryIfDatabaseWriteIsNotAllowed;
- (bool)_unsafeOpenDatabaseAtPath:(id)arg1 checkIntegrity:(bool)arg2 error:(id*)arg3;
- (bool)_unsafeOrderChildrenWithServerIDs:(id)arg1 inFolderWithServerID:(id)arg2 excludeDeletedBookmarks:(bool)arg3;
- (bool)_updateBookmarks:(id)arg1 inFolderWithID:(int)arg2;
- (bool)_updateCachedChildCountForParentID:(int)arg1 inDirection:(int)arg2;
- (bool)_updateDatabaseIfNewerOSVersionWasLaunched;
- (bool)_updateDatabaseIfNewerSafariVersionWasLaunched;
- (bool)_updateDatabaseIfNewerVersion:(id)arg1 wasLaunchedForSyncStringKey:(id)arg2 upgradeSelector:(SEL)arg3 versionType:(id)arg4;
- (bool)_updateHiddenAncestorCountForBookmarksUnderFolderID:(int)arg1 addingOffset:(int)arg2;
- (void)_updateSyncNotificationType;
- (long long)_userVersion;
- (bool)_usesCloudKit;
- (bool)_verifyAllTablesExist:(int*)arg1;
- (id)accountHash;
- (id)activeParticipantsInTabGroupWithServerID:(id)arg1;
- (id)activeParticipantsInTabWithServerID:(id)arg1;
- (void)addBookmarkInMemory:(id)arg1 toFolderWithID:(int)arg2;
- (id)allSyncDataForKeysWithPrefix:(id)arg1;
- (id)allSyncingAttributesForBookmark:(id)arg1;
- (id)applyInMemoryChanges:(id)arg1;
- (bool)applyInMemoryChangesToDatabase;
- (bool)beginSyncTransaction;
- (id)bookmarkAtPath:(id)arg1;
- (bool)bookmarkContainsLeafBookmark:(id)arg1;
- (int)bookmarkIDForServerID:(id)arg1 excludeDeletedBookmarks:(bool)arg2;
- (int)bookmarkIDWithSpecialID:(int)arg1;
- (int)bookmarkIdentifierOfAncestorWithAnySubtypeInSubtypes:(id)arg1 forBookmark:(id)arg2;
- (int)bookmarkIdentifierOfAncestorWithSubtype:(long long)arg1 forBookmark:(id)arg2;
- (int)bookmarkIdentifierOfFolderAncestorWithSubtype:(long long)arg1 forBookmark:(id)arg2;
- (bool)bookmarkIsFavoritesFolder:(id)arg1;
- (bool)bookmarkIsFrequentlyVisitedSite:(id)arg1;
- (bool)bookmarkIsInFavoritesFolder:(id)arg1;
- (bool)bookmarkRequiresParent:(id)arg1 specialID:(int)arg2;
- (id)bookmarkWithID:(int)arg1;
- (id)bookmarkWithID:(int)arg1 includingInMemoryChanges:(bool)arg2;
- (id)bookmarkWithServerID:(id)arg1 excludeDeletedBookmarks:(bool)arg2;
- (id)bookmarkWithSpecialID:(int)arg1;
- (id)bookmarkWithUUID:(id)arg1;
- (id)bookmarksBarBookmark;
- (id)bookmarksBarList;
- (id)bookmarksDictionary;
- (id)bookmarksMatchingString:(id)arg1;
- (id)bookmarksNeedingIcons;
- (id)bookmarksWithSubtype:(long long)arg1;
- (id)changeList;
- (bool)cleanUpReadingListArchives;
- (bool)clearAllReadingListArchives;
- (bool)clearAllSyncData;
- (void)clearCarrierBookmarks;
- (bool)clearChangesDuringOrBeforeLocalRecordGeneration:(long long)arg1;
- (bool)clearChangesForBookmark:(id)arg1;
- (bool)clearChangesForChangeRecords:(id)arg1 lastSyncedRecordGeneration:(long long)arg2;
- (void)clearFirstSkippedProfileDeviceGeneration;
- (void)clearFirstSkippedProfileGeneration;
- (bool)clearFrequentlyVisitedSitesFolder;
- (bool)clearReadingListArchiveWithUUID:(id)arg1;
- (bool)clearSyncDataAfterICloudKeychainReset;
- (void)commitSyncTransaction;
- (id)configuration;
- (bool)containsOnlyStockBookmarks;
- (unsigned long long)countReadingListBookmarksNeedingArchiveInMode:(long long)arg1;
- (unsigned long long)countReadingListBookmarksNeedingArchiveInMode:(long long)arg1 automaticArchivingEnabled:(bool)arg2;
- (id)currentDeviceIdentifier;
- (long long)currentRecordGeneration;
- (id)currentTabServerIDPresenceForParticipant:(id)arg1 getTabGroupServerID:(id*)arg2;
- (id)currentTabServerIDPresenceForParticipant:(id)arg1 inTabGroupWithServerID:(id)arg2;
- (id)databaseHealthInformation;
- (void)databaseLockAcquisitor:(id)arg1 acquiredLock:(bool)arg2;
- (id)databaseSyncData;
- (void)dealloc;
- (bool)deduplicateBookmarks;
- (bool)deduplicateBookmarksWithRootFolder:(int)arg1 depth:(unsigned long long)arg2;
- (bool)deleteAllFavoriteIcons;
- (void)deleteArchiveForReadingListBookmarkWithID:(int)arg1;
- (bool)deleteBookmark:(id)arg1;
- (bool)deleteBookmark:(id)arg1 leaveTombstone:(bool)arg2;
- (bool)deleteBookmark:(id)arg1 postChangeNotification:(bool)arg2;
- (void)deleteBookmarkInMemory:(id)arg1;
- (bool)deleteBookmarks:(id)arg1 postChangeNotification:(bool)arg2;
- (void)deleteBookmarksInMemory:(id)arg1 inFolder:(int)arg2;
- (void)deleteFrequentlyVisitedSitesFolder;
- (id)descendantsOfBookmarkFolder:(id)arg1;
- (void)didSkipProfileDeviceWithGeneration:(long long)arg1;
- (void)didSkipProfileWithGeneration:(long long)arg1;
- (void)enumerateBookmarks:(bool)arg1 andReadingListItems:(bool)arg2 matchingString:(id)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateDescendantsOfBookmark:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateDescendantsOfBookmarkID:(int)arg1 usingBlock:(id /* block */)arg2;
- (id)fastFetchBookmarksInBookmarkList:(id)arg1;
- (id)favoritesFolder;
- (id)favoritesFolderList;
- (id)firstReadingListBookmarkNeedingArchiveInMode:(long long)arg1;
- (id)firstReadingListBookmarkNeedingArchiveInMode:(long long)arg1 automaticArchivingEnabled:(bool)arg2;
- (id)firstReadingListBookmarkWithURLMatchingString:(id)arg1 prefixMatch:(bool)arg2;
- (long long)firstSkippedProfileDeviceGeneration;
- (long long)firstSkippedProfileGeneration;
- (bool)fixCachedNumberOfChildrenIfNeeded;
- (void)fixRecoveredBookmarksIfNeeded;
- (id)frequentlyVisitedSitesFolder;
- (id)frequentlyVisitedSitesFolderBookmarkID;
- (id)frequentlyVisitedSitesList;
- (id)generateSyncPositionForBookmark:(id)arg1;
- (unsigned long long)generation;
- (bool)getBookmarkType:(bool*)arg1 andSubtype:(long long*)arg2 forBookmarkWithID:(int)arg3;
- (bool)hasInMemoryChanges;
- (int)identifierOfBookmarkWithUUID:(id)arg1;
- (bool)incrementalVacuumIfNeeded;
- (unsigned long long)indexOfReadingListBookmark:(id)arg1 countingOnlyUnread:(bool)arg2;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 checkIntegrity:(bool)arg2;
- (id)initWithPath:(id)arg1 migratingBookmarksPlist:(id)arg2 syncAnchorPlist:(id)arg3;
- (bool)isEmpty;
- (bool)isMerging;
- (bool)isTransactionCurrentlyActive;
- (long long)lastSyncedRecordGeneration;
- (unsigned long long)leafChildCountForBookmarksInFolderWithID:(int)arg1;
- (id)leafChildCountForFoldersInFolderWithID:(int)arg1;
- (id)listWithID:(int)arg1;
- (id)listWithID:(int)arg1 skipOffset:(unsigned int)arg2;
- (id)listWithID:(int)arg1 skipOffset:(unsigned int)arg2 includeHidden:(bool)arg3;
- (id)listWithID:(int)arg1 skipOffset:(unsigned int)arg2 includeHidden:(bool)arg3 includeDescendantsAsChildren:(bool)arg4 filteredUsingString:(id)arg5;
- (id)listWithSpecialID:(int)arg1;
- (long long)localMigrationState;
- (void)localeSettingsChanged;
- (void)logRegulatoryBookmarksRead;
- (bool)maintainsSyncMetadata;
- (bool)markAllFavoritesAsNeedingIcons;
- (bool)markArchivedReadingListItemsAsNonRecoverable;
- (bool)markAttributesAsModified:(unsigned long long)arg1 forBookmark:(id)arg2;
- (void)markChildrenInFolderAsRead:(id)arg1;
- (bool)markWebContentFilterAllowsAllReadingListItems;
- (bool)mergeWithBookmarksDictionary:(id)arg1 clearHidden:(bool)arg2 clearSyncData:(bool)arg3 error:(id*)arg4;
- (bool)mergeWithBookmarksDictionary:(id)arg1 clearHidden:(bool)arg2 error:(id*)arg3;
- (bool)migrateReadingListIconsFromDatabaseToBookmarkImagesDirectory;
- (unsigned long long)modifiedAttributesOfBookmark:(id)arg1;
- (id)modifiedSyncingAttributesForBookmark:(id)arg1;
- (void)modifyBookmarkInMemory:(id)arg1;
- (bool)moveBookmark:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (bool)moveBookmark:(id)arg1 toFolderWithID:(int)arg2;
- (bool)moveBookmark:(id)arg1 toFolderWithID:(int)arg2 orderIndex:(unsigned int)arg3;
- (void)moveBookmarkInMemory:(id)arg1 toFolderWithID:(int)arg2;
- (id)nextChangeAfterLocalRecordGeneration:(long long)arg1;
- (long long)nextDatabaseSyncChangeID;
- (unsigned int)orderIndexOfBookmark:(id)arg1;
- (unsigned int)orderIndexOfBookmark:(id)arg1 withSyncPosition:(id)arg2 inFolderWithID:(int)arg3;
- (int)parentIdentifierOfBookmarkWithID:(int)arg1;
- (bool)performDatabaseUpdatesWithTransaction:(id /* block */)arg1 applyInMemoryChanges:(bool)arg2 secureDelete:(bool)arg3;
- (bool)performDatabaseUpdatesWithTransaction:(id /* block */)arg1 secureDelete:(bool)arg2;
- (void)persistChangesWithCompletion:(id /* block */)arg1;
- (void)postBookmarksDidReloadNotification;
- (id)presenceTabUUIDForParticipant:(id)arg1 inTabGroupWithServerID:(id)arg2;
- (unsigned long long)purge:(unsigned long long)arg1;
- (id)purgeableReadingListItems;
- (unsigned long long)purgeableSpace;
- (id)readingListBookmarksMatchingString:(id)arg1 maxResults:(unsigned int)arg2 onlyArchivedBookmarks:(bool)arg3;
- (id)readingListBookmarksNeedingArchiveInMode:(long long)arg1;
- (id)readingListBookmarksNeedingArchiveInMode:(long long)arg1 automaticArchivingEnabled:(bool)arg2;
- (id)readingListFolder;
- (int)readingListFolderBookmarkID;
- (id)readingListWithUnreadOnly:(bool)arg1;
- (id)readingListWithUnreadOnly:(bool)arg1 filteredUsingString:(id)arg2;
- (bool)removeAllSyncDataForKeyWithPrefix:(id)arg1;
- (void)removePersistedInMemoryBookmarkChangesFile;
- (bool)removePresenceForParticipant:(id)arg1 inTabGroupWithServerID:(id)arg2;
- (bool)removeUnusedPresenceRecords;
- (bool)reorderBookmark:(id)arg1 toIndex:(unsigned int)arg2;
- (void)reorderBookmarkInMemory:(id)arg1 afterBookmark:(id)arg2;
- (bool)reorderList:(id)arg1 moveBookmarkAtIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)replaceBookmarksInMemory:(id)arg1 inFolderWithID:(int)arg2;
- (void)restoreOrMergeAllowedSitesFolderAndContentsWithChangeNotification:(bool)arg1;
- (bool)rollOutLastReadingListItem;
- (void)rollOutReadingListItemIfNeededToMakeRoomForOneNewItem;
- (void)rollbackSyncTransaction;
- (id)rollingListOfArchivedReadingListItems;
- (unsigned long long)rollingReadingListMaximumCount;
- (id)rootBookmark;
- (id)rootList;
- (void)saveAndMoveBookmark:(id)arg1 toFolderID:(int)arg2;
- (void)saveArchiveForReadingListBookmarkWithID:(int)arg1;
- (void)saveArchivesForReadingListBookmarks:(id)arg1;
- (bool)saveBookmark:(id)arg1;
- (bool)saveBookmark:(id)arg1 incrementGenerations:(bool)arg2;
- (bool)saveBookmark:(id)arg1 startReadingListFetcher:(bool)arg2;
- (bool)saveBookmarks:(id)arg1 postNotification:(bool)arg2;
- (bool)saveDatabaseSyncData:(id)arg1;
- (void)saveIconWithData:(id)arg1 urlString:(id)arg2 forBookmark:(id)arg3;
- (void)saveMinimumAPISyncVersionOfDescendantItemsForItem:(id)arg1 includingAncestorItem:(bool)arg2;
- (id)serverIDForBookmarkID:(int)arg1;
- (id)serverIDsInFolderWithServerID:(id)arg1 excludeDeletedBookmarks:(bool)arg2;
- (void)setFavoritesFolder:(id)arg1 localOnly:(bool)arg2;
- (void)setFavoritesFolderIdentifier:(int)arg1 postChangeNotification:(bool)arg2;
- (void)setLastSyncedRecordGeneration:(long long)arg1;
- (bool)setLocalMigrationState:(long long)arg1 generateDeviceIdentifierIfNeeded:(bool)arg2;
- (bool)setPresenceInTabWithServerID:(id)arg1 tabGroupWithServerID:(id)arg2 forParticipant:(id)arg3;
- (bool)setServerID:(id)arg1 forBookmark:(id)arg2;
- (bool)setSyncData:(id)arg1 forKey:(id)arg2;
- (bool)shouldFetchIconForBookmark:(id)arg1;
- (id)subfoldersOfID:(int)arg1;
- (long long)subtypeOfBookmarkWithID:(int)arg1;
- (long long)subtypeOfBookmarkWithServerID:(id)arg1;
- (id)syncDataForBookmark:(id)arg1;
- (id)syncDataForBookmarkID:(int)arg1;
- (id)syncDataForKey:(id)arg1;
- (bool)syncSetString:(id)arg1 forKey:(id)arg2;
- (id)syncStringForKey:(id)arg1;
- (id)syncableBookmarksIDsInFolderWithBookmarkID:(int)arg1;
- (void)test_restoreMissingSpecialBookmarks;
- (bool)truncateWAL;
- (bool)updateAccountHash:(id)arg1;
- (bool)updateBookmarkSyncPositionIfNeeded:(id)arg1;
- (bool)updateBookmarks:(id)arg1 inFolderWithID:(int)arg2 secureDelete:(bool)arg3;
- (bool)updateDatabaseSyncDataUsingBlock:(id /* block */)arg1;
- (bool)updateReadingListWebFilterStatusForUnsetItemsOnly:(bool)arg1;
- (void)updateSelectedFavoritesFolderWithBookmarkID:(int)arg1 wasFavoritesFolder:(bool)arg2 isFavoritesFolder:(bool)arg3;
- (bool)updateSyncDataForBookmark:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)updateSyncDataForBookmarkWithRecordName:(id)arg1 excludeDeletedBookmarks:(bool)arg2 usingBlock:(id /* block */)arg3;
- (bool)vacuum;
- (id)validBookmarkUUIDsFromUUIDs:(id)arg1;
- (id)webFilterAllowedSites;
- (id)webFilterAllowedSitesFolder;
- (int)webFilterAllowedSitesFolderBookmarkID;

// Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI

+ (id)mainBookmarkCollection;

- (id)bookmarksInFavoritesList;
- (void)receivedBookmarksDidChangeNotification:(id)arg1;

@end