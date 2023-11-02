
@interface WebBookmarkReadonlyCollection : NSObject <WBBookmarkProvider> {
    WebBookmarkCollection * _collection;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_collection;
- (id)bookmarkWithID:(int)arg1;
- (id)bookmarksMatchingString:(id)arg1;
- (id)databaseHealthInformation;
- (void)enumerateBookmarks:(bool)arg1 andReadingListItems:(bool)arg2 matchingString:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)initReadonlySafariBookmarkCollection;
- (unsigned long long)leafChildCountForBookmarksInFolderWithID:(int)arg1;
- (id)leafChildCountForFoldersInFolderWithID:(int)arg1;
- (id)readingListBookmarksMatchingString:(id)arg1 maxResults:(unsigned int)arg2 onlyArchivedBookmarks:(bool)arg3;
- (id)readingListWithUnreadOnly:(bool)arg1 filteredUsingString:(id)arg2;

@end
