
@interface SFCapsuleCollectionViewUpdate : NSObject {
    bool  _animated;
    SFCapsuleCollectionView * _collectionView;
    NSMutableSet * _deletedItems;
    long long  _indexAfterUpdateOfSelectedItemBeforeUpdate;
    long long  _indexBeforeUpdateOfSelectedItemAfterUpdate;
    NSIndexSet * _indexesOfDeletedItems;
    NSIndexSet * _indexesOfInsertedItems;
    NSIndexSet * _indexesOfVisibleItemsBeforeUpdate;
    NSMutableSet * _insertedItems;
    NSMutableArray * _itemsAfterUpdate;
    NSArray * _itemsBeforeUpdate;
    long long  _selectedItemIndexAfterUpdate;
    long long  _selectedItemIndexBeforeUpdate;
}

@property (getter=isAnimated, nonatomic, readonly) bool animated;
@property (nonatomic, readonly) SFCapsuleCollectionView *collectionView;
@property (nonatomic, readonly) NSSet *deletedItems;
@property (nonatomic, readonly) long long indexAfterUpdateOfSelectedItemBeforeUpdate;
@property (nonatomic, readonly) long long indexBeforeUpdateOfSelectedItemAfterUpdate;
@property (nonatomic, readonly) NSIndexSet *indexesOfDeletedItems;
@property (nonatomic, readonly) NSIndexSet *indexesOfInsertedItems;
@property (nonatomic, readonly) NSIndexSet *indexesOfVisibleItemsBeforeUpdate;
@property (nonatomic, readonly) NSArray *itemsAfterUpdate;
@property (nonatomic, readonly) NSArray *itemsBeforeUpdate;
@property (nonatomic, readonly) long long selectedItemIndexAfterUpdate;
@property (nonatomic, readonly) long long selectedItemIndexBeforeUpdate;

- (void).cxx_destruct;
- (void)_calculateIndexesIfNeeded;
- (id)collectionView;
- (void)deleteItemsAtIndexes:(id)arg1 animated:(bool)arg2;
- (id)deletedItems;
- (long long)indexAfterUpdateOfSelectedItemBeforeUpdate;
- (long long)indexBeforeUpdateOfSelectedItemAfterUpdate;
- (id)indexesOfDeletedItems;
- (id)indexesOfInsertedItems;
- (id)indexesOfVisibleItemsBeforeUpdate;
- (id)initWithCollectionView:(id)arg1;
- (void)insertItemsAtIndexes:(id)arg1 animated:(bool)arg2;
- (bool)isAnimated;
- (id)itemsAfterUpdate;
- (id)itemsBeforeUpdate;
- (long long)selectedItemIndexAfterUpdate;
- (long long)selectedItemIndexBeforeUpdate;
- (void)setSelectedItemIndex:(long long)arg1 animated:(bool)arg2;

@end
