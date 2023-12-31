
@protocol WBBookmarkProvider <NSObject>

@required

- (WebBookmark *)bookmarkWithID:(int)arg1;
- (NSArray *)bookmarksMatchingString:(NSString *)arg1;
- (WBBookmarksDatabaseHealthInformation *)databaseHealthInformation;
- (void)enumerateBookmarks:(void *)arg1 andReadingListItems:(void *)arg2 matchingString:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 15: bool, bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, id /* block */, void*, WebBookmark *, id /* block */, void*, void*
- (unsigned long long)leafChildCountForBookmarksInFolderWithID:(int)arg1;
- (NSDictionary *)leafChildCountForFoldersInFolderWithID:(int)arg1;
- (NSArray *)readingListBookmarksMatchingString:(NSString *)arg1 maxResults:(unsigned int)arg2 onlyArchivedBookmarks:(bool)arg3;
- (WebBookmarkList *)readingListWithUnreadOnly:(bool)arg1 filteredUsingString:(NSString *)arg2;

@end
