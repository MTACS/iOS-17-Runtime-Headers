
@interface ContinuousReadingController : NSObject {
    int  _activeDocumentBookmarkID;
    ContinuousReadingItem * _currentContinuousItem;
    ContinuousReadingItem * _nextContinuousItem;
    ContinuousReadingItem * _previousContinuousItem;
    TabController * _tabController;
    bool  _unreadReadingListItemsOnly;
}

@property (nonatomic) bool unreadReadingListItemsOnly;

- (void).cxx_destruct;
- (void)_clearCachedItems;
- (id)_itemAtIndex:(unsigned int)arg1 inReadingList:(id)arg2;
- (id)_tabDocument;
- (void)_updateCachedItemsIfNeeded;
- (id)currentReadingListItem;
- (void)dealloc;
- (id)initWithTabController:(id)arg1;
- (id)nextReadingListItem;
- (id)previousReadingListItem;
- (void)setUnreadReadingListItemsOnly:(bool)arg1;
- (bool)unreadReadingListItemsOnly;

@end
