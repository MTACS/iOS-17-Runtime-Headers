
@interface WebBookmarkList : NSObject {
    unsigned int  _bookmarkCount;
    NSMutableArray * _bookmarks;
    WebBookmarkCollection * _collection;
    WebBookmarkListQuery * _query;
    NSObject<OS_dispatch_queue> * _queue;
    WebBookmarkList * _shadowBookmarkList;
    unsigned int  _skipOffset;
}

@property (nonatomic, readonly) unsigned int bookmarkCount;
@property (nonatomic, readonly) int folderID;
@property (nonatomic, retain) WebBookmarkList *shadowBookmarkList;

- (void).cxx_destruct;
- (id)_arrayForDifferenceCalculation;
- (id)_bookmarkAtIndex:(unsigned int)arg1 paginate:(bool)arg2;
- (void)_loadBookmarksForDifferenceFromList:(id)arg1;
- (void)_moveBookmarkAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (unsigned int)_primaryBookmarkCount;
- (unsigned int)_reverseOrderIndex:(unsigned int)arg1;
- (id)bookmarkArray;
- (id)bookmarkArrayRequestingCount:(unsigned int)arg1;
- (id)bookmarkAtIndex:(unsigned int)arg1;
- (unsigned int)bookmarkCount;
- (id)differenceFromList:(id)arg1 withOptions:(unsigned long long)arg2;
- (int)folderID;
- (id)initWithQuery:(id)arg1 skipOffset:(unsigned int)arg2 collection:(id)arg3;
- (id)initWithQuery:(id)arg1 skipOffset:(unsigned int)arg2 collection:(id)arg3 queue:(id)arg4;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (void)setShadowBookmarkList:(id)arg1;
- (id)shadowBookmarkList;

@end
