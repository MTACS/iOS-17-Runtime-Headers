
@interface MessageListThreadHelper : MessageListItemHelper {
    NSMutableSet * _collapsingItemIDs;
    NSMutableSet * _expandingItemIDs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _itemIDsNeedingReloadLock;
    NSMutableSet * _itemIDsNeedingReloadPostUpdate;
}

@property (nonatomic, retain) NSMutableSet *collapsingItemIDs;
@property (nonatomic, retain) NSMutableSet *expandingItemIDs;
@property (nonatomic, retain) NSMutableSet *itemIDsNeedingReloadPostUpdate;

- (void).cxx_destruct;
- (bool)_isNextItemAnExpandedItemID:(id)arg1 snapshot:(id)arg2;
- (bool)_isNextItemAnExpandedThreadItemID:(id)arg1 snapshot:(id)arg2;
- (void)addExpandingThreadWithItemID:(id)arg1;
- (void)addItemIDsNeedingReloadPostUpdate:(id)arg1;
- (void)collapseMessageListItem:(id)arg1;
- (id)collapsingItemIDs;
- (id)collapsingOrExpandingItemIDs;
- (void)expandMessageListItem:(id)arg1;
- (id)expandingItemIDs;
- (id)initWithDelegate:(id)arg1;
- (bool)isThreadExpandingWithItemID:(id)arg1;
- (id)itemIDsForReloadAfterDeletingItemIDs:(id)arg1 snapshot:(id)arg2;
- (id)itemIDsForReloadAfterInsertingItemsAfterItemID:(id)arg1 snapshot:(id)arg2;
- (id)itemIDsInExpandedThread:(id)arg1 snapshot:(id)arg2;
- (id)itemIDsNeedingReloadPostUpdate;
- (bool)needsFlushSeparatorForItemID:(id)arg1 snapshot:(id)arg2;
- (id)popItemIDsNeedingReloadPostUpdate;
- (void)removeExpandingThreadWithItemID:(id)arg1;
- (void)setCollapsingItemIDs:(id)arg1;
- (void)setExpandingItemIDs:(id)arg1;
- (void)setItemIDsNeedingReloadPostUpdate:(id)arg1;
- (long long)styleForMessageListItem:(id)arg1;
- (id)threadItemIDForItemInExpandedThread:(id)arg1 snapshot:(id)arg2;

@end
