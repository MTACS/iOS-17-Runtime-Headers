
@interface WBInMemoryChangeFilterVisible : NSObject <WebBookmarkInMemoryChangeFilter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)bookmarkIDsModifiedInMemoryNotPassingFilterFromChangeSet:(id)arg1 inFolder:(int)arg2;
- (id)bookmarkIDsModifiedInMemoryPassingFilterFromChangeSet:(id)arg1 inFolder:(int)arg2;
- (bool)isBookmarkVisible:(id)arg1;
- (bool)shouldIncludeBookmarkAddedInMemory:(id)arg1;

@end
