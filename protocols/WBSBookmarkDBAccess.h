
@protocol WBSBookmarkDBAccess <NSObject>

@required

- (bool)addItem:(void*)arg1 underFolderWithServerId:(NSString *)arg2 database:(void*)arg3;
- (void)beginMergingChangesWithDatabase:(void*)arg1;
- (long long)bookmarkTypeForChange:(void*)arg1;
- (long long)bookmarkTypeWithBookmark:(void*)arg1;
- (bool)changeIsDAVMoveChange:(void*)arg1;
- (bool)changeIsMoveChange:(void*)arg1;
- (int)changeTypeForChange:(void*)arg1;
- (void)clearAllSyncDataWithDatabase:(void*)arg1;
- (void)clearChangesWithChangeToken:(void*)arg1 database:(void*)arg2;
- (void)clearlAllLocalBookmarksForAutomatedTestingWithDatabase:(void*)arg1;
- (void)closeDatabase:(void*)arg1 shouldSave:(bool)arg2;
- (NSData *)copyAccountHashWithDatabase:(void*)arg1;
- (NSDictionary *)copyAttributesWithItem:(void*)arg1;
- (id)copyChangeTokenWithDatabase:(void*)arg1;
- (void*)copyChangedItemWithChange:(void*)arg1;
- (struct __CFArray { }*)copyChangesWithDatabase:(void*)arg1 changeToken:(const void**)arg2;
- (NSData *)copyDeletedBookmarkSyncDataWithChange:(void*)arg1;
- (NSString *)copyDeviceIdentifier;
- (NSString *)copyFirstServerIdInFolderWithServerId:(NSString *)arg1 database:(void*)arg2;
- (void*)copyItemWithLocalID:(id)arg1 database:(void*)arg2;
- (void*)copyItemWithServerId:(NSString *)arg1 database:(void*)arg2;
- (NSString *)copyLastServerIdInFolderWithServerId:(NSString *)arg1 database:(void*)arg2;
- (NSSet *)copyLocalIDsInFolderWithLocalID:(id)arg1 database:(void*)arg2;
- (NSDictionary *)copyModifiedAttributesWithChange:(void*)arg1;
- (struct __CFString { }*)copyParentServerIdWithItem:(void*)arg1;
- (NSString *)copyServerIdInFolderAfterServerId:(NSString *)arg1 database:(void*)arg2;
- (NSString *)copyServerIdInFolderBeforeServerId:(NSString *)arg1 database:(void*)arg2;
- (struct __CFString { }*)copyServerIdWithChange:(void*)arg1;
- (struct __CFString { }*)copyServerIdWithItem:(void*)arg1;
- (NSSet *)copyServerIdsInFolderWithServerId:(NSString *)arg1 database:(void*)arg2;
- (struct __CFData { }*)copySyncDataWithDatabase:(void*)arg1;
- (struct __CFData { }*)copySyncDataWithItem:(void*)arg1;
- (struct __CFString { }*)copySyncKeyWithItem:(void*)arg1;
- (id)copyValueForKey:(NSString *)arg1 item:(void*)arg2;
- (void*)createBookmarkWithType:(long long)arg1 database:(void*)arg2;
- (void*)createDatabase;
- (void*)createDatabaseWithoutLock;
- (void*)createFolderWithType:(long long)arg1 database:(void*)arg2;
- (void)finishMergingChangesWithDatabase:(void*)arg1;
- (long long)folderTypeForChange:(void*)arg1;
- (long long)folderTypeWithFolder:(void*)arg1;
- (bool)item:(void*)arg1 isEqualToItem:(void*)arg2;
- (bool)item:(void*)arg1 isInFolderWithServerSyncId:(NSString *)arg2;
- (long long)itemTypeForChange:(void*)arg1;
- (long long)itemTypeWithItem:(void*)arg1;
- (long long)localCloudKitMigrationState:(void*)arg1;
- (void)openDatabase:(void*)arg1;
- (void)performDeduplicationWithDatabase:(void*)arg1 mode:(long long)arg2;
- (bool)performMaintenanceOnDatabase:(void*)arg1 afterVersion:(NSString *)arg2;
- (void)removeItemWithServerId:(struct __CFString { }*)arg1 database:(void*)arg2;
- (void)resetDeviceIdentifier;
- (void)saveBackupOfDatabase:(void*)arg1 withName:(NSString *)arg2;
- (void)saveDatabase:(void*)arg1;
- (void)setAccountHash:(NSData *)arg1 database:(void*)arg2;
- (void)setChildrenOrder:(NSArray *)arg1 forFolderWithServerId:(NSString *)arg2 database:(void*)arg3;
- (void)setDeletedBookmarkSyncData:(NSData *)arg1 change:(void*)arg2;
- (void)setLocalCloudKitMigrationState:(long long)arg1 database:(void*)arg2;
- (void)setModifiedAttributes:(NSDictionary *)arg1 item:(void*)arg2;
- (void)setServerId:(struct __CFString { }*)arg1 item:(void*)arg2;
- (void)setSyncData:(struct __CFData { }*)arg1 database:(void*)arg2;
- (void)setSyncData:(struct __CFData { }*)arg1 item:(void*)arg2;
- (void)setSyncKey:(struct __CFString { }*)arg1 item:(void*)arg2;

@optional

- (NSURL *)copySaveURLForAssetWithKey:(NSString *)arg1 item:(void*)arg2;
- (void)notifyForSaveOfAssetWithKey:(NSString *)arg1 item:(void*)arg2;
- (void)readingListItemDidUpdateWithDatabase:(void*)arg1;

@end
