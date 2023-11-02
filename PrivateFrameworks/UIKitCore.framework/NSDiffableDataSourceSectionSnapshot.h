
@interface NSDiffableDataSourceSectionSnapshot : NSObject <NSCopying> {
    NSMutableArray * _collapsedItemsUpdates;
    NSMutableArray * _expandedItemsUpdates;
    _NSDiffableDataSourceSectionSnapshotState * _state;
}

@property (nonatomic, readonly) NSOrderedSet *_itemsOrderedSet;
@property (nonatomic, readonly) NSArray *_rootItems;
@property (nonatomic, readonly) _NSDiffableDataSourceSectionSnapshotState *_state;
@property (nonatomic, readonly) NSIndexSet *_visibleIndexes;
@property (nonatomic, readonly) NSOrderedSet *_visibleItemsOrderedSet;
@property (nonatomic, readonly) NSArray *collapsedItemsUpdates;
@property (nonatomic, readonly) NSArray *expandedItemsUpdates;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSArray *rootItems;
@property (nonatomic, readonly) NSArray *visibleItems;

- (void).cxx_destruct;
- (id)_indexesOfChildrenForParent:(id)arg1 recursive:(bool)arg2;
- (id)_indexesOfItems:(id)arg1;
- (id)_indexesOfItems:(id)arg1 ignoringItemsNotFound:(bool)arg2;
- (id)_itemAfterItem:(id)arg1;
- (id)_itemBeforeItem:(id)arg1;
- (bool)_itemHasChildren:(id)arg1;
- (id)_itemsOrderedSet;
- (void)_prepareForApplyToDataSource;
- (void)_replaceItem:(id)arg1 withItem:(id)arg2;
- (id)_rootItems;
- (id)_state;
- (id)_visibleIndexes;
- (id)_visibleItemsOrderedSet;
- (void)appendItems:(id)arg1;
- (void)appendItems:(id)arg1 intoParent:(id)arg2;
- (void)appendItems:(id)arg1 intoParentItem:(id)arg2;
- (id)childSnapshotOfParent:(id)arg1;
- (id)childSnapshotOfParent:(id)arg1 includingParent:(bool)arg2;
- (id)childrenOfParent:(id)arg1;
- (id)childrenOfParent:(id)arg1 recursive:(bool)arg2;
- (void)collapseItems:(id)arg1;
- (id)collapsedItemsUpdates;
- (bool)containsItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deleteAllItems;
- (void)deleteItems:(id)arg1;
- (void)deleteItems:(id)arg1 orphanDisposition:(long long)arg2;
- (id)description;
- (void)expandItems:(id)arg1;
- (id)expandedItems;
- (id)expandedItemsUpdates;
- (long long)indexOfItem:(id)arg1;
- (id)init;
- (id)initWithSnapshot:(id)arg1;
- (id)initWithState:(id)arg1;
- (void)insertItems:(id)arg1 afterItem:(id)arg2;
- (void)insertItems:(id)arg1 afterItem:(id)arg2 insertionMode:(long long)arg3;
- (void)insertItems:(id)arg1 beforeItem:(id)arg2;
- (id)insertSnapshot:(id)arg1 afterItem:(id)arg2;
- (void)insertSnapshot:(id)arg1 beforeItem:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isExpanded:(id)arg1;
- (bool)isVisible:(id)arg1;
- (id)items;
- (long long)levelForItem:(id)arg1;
- (long long)levelOfItem:(id)arg1;
- (id)parentOfChild:(id)arg1;
- (id)parentOfChildItem:(id)arg1;
- (void)replaceChildrenOfParentItem:(id)arg1 withSnapshot:(id)arg2;
- (id)rootItems;
- (void)setChildrenWithSnapshot:(id)arg1 forParent:(id)arg2;
- (id)snapshotOfParentItem:(id)arg1;
- (id)snapshotOfParentItem:(id)arg1 includingParentItem:(bool)arg2;
- (id)snapshotter;
- (id)visibleItems;
- (id)visualDescription;

@end
