
@protocol WebBookmarkInMemoryChangeFilter <NSObject>

@optional

- (NSArray *)bookmarkIDsModifiedInMemoryNotPassingFilterFromChangeSet:(WebBookmarkChangeSet *)arg1 inFolder:(int)arg2;
- (NSArray *)bookmarkIDsModifiedInMemoryPassingFilterFromChangeSet:(WebBookmarkChangeSet *)arg1 inFolder:(int)arg2;
- (bool)shouldIncludeBookmarkAddedInMemory:(WebBookmark *)arg1;

@end
