
@interface WebBookmarkChangeSet : NSObject <NSSecureCoding> {
    NSMutableDictionary * _associatedIDToChanges;
    NSMutableDictionary * _bookmarkIDToChanges;
    NSMutableOrderedSet * _changes;
    NSURL * _fileURL;
    NSMutableDictionary * _folderIDToAddedChildrenChanges;
    NSMutableDictionary * _folderIDToChildrenChanges;
    NSMutableDictionary * _folderIDToDeletedChildrenChanges;
    NSMutableDictionary * _folderIDToModifiedChildrenChanges;
    NSMutableDictionary * _folderIDToReorderedChildrenChanges;
    int  _lastBookmarkIDForAddingInMemoryBookmark;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) NSArray *changes;
@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (nonatomic, readonly) bool shouldSync;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addChange:(id)arg1;
- (void)_coalesceChangesForChangeIfNeeded:(id)arg1;
- (void)_readPersistedChanges;
- (void)_removeAllChanges;
- (void)_removeChange:(id)arg1;
- (void)addChange:(id)arg1;
- (void)addChanges:(id)arg1;
- (id)addedBookmarksInBookmarkFolder:(int)arg1;
- (void)applyModificationsToBookmarks:(id)arg1;
- (bool)bookmarkIsAddedInMemory:(int)arg1;
- (id)bookmarksAfterReplayingChangesToBookmarks:(id)arg1 inFolderWithID:(int)arg2;
- (id)changes;
- (id)deletedBookmarkIDsInBookmarkFolder:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (bool)folderHasReplaceChange:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 readPersistedChanges:(bool)arg2;
- (bool)isBookmarkDeleted:(int)arg1;
- (id)modifiedBookmarksInBookmarkFolder:(int)arg1;
- (int)nextBookmarkIDForAddingBookmarkInMemory;
- (unsigned long long)numberOfAddedBookmarksInBookmarkFolder:(int)arg1;
- (unsigned long long)numberOfReorderedBookmarksInBookmarkFolder:(int)arg1;
- (void)persistChangesWithCompletion:(id /* block */)arg1;
- (void)removeAllChanges;
- (void)removeChange:(id)arg1;
- (long long)replayChangesOnBookmark:(id)arg1;
- (bool)shouldSync;
- (void)updateAddChangesWithInMemoryBookmarkID:(int)arg1 toDatabaseGeneratedID:(int)arg2;

@end
