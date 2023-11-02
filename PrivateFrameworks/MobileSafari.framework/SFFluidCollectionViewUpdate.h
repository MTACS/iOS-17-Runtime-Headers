
@interface SFFluidCollectionViewUpdate : NSObject {
    NSMutableDictionary * _cachedAfterToBeforeIndexPathMappings;
    NSMutableDictionary * _cachedBeforeToAfterIndexPathMappings;
    NSSet * _deletedIndexPaths;
    bool  _hasIndexPathChanges;
    NSSet * _insertedIndexPaths;
    <SFFluidCollectionLayoutContainer> * _layoutContainerForPreviousLayout;
    NSArray * _numberOfItemsBeforeUpdate;
    unsigned long long  _pendingBatchUpdateCount;
    NSMutableSet * _pendingUpdateItems;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousBounds;
    SFFluidCollectionViewLayout * _previousTabSwitcherLayout;
    NSSet * _reloadedIndexPaths;
    NSSet * _updates;
}

@property (nonatomic, readonly) NSSet *deletedIndexPaths;
@property (nonatomic, readonly) bool hasIndexPathChanges;
@property (nonatomic, readonly) NSSet *insertedIndexPaths;
@property (nonatomic, retain) <SFFluidCollectionLayoutContainer> *layoutContainerForPreviousLayout;
@property (nonatomic, copy) NSArray *numberOfItemsBeforeUpdate;
@property (nonatomic, readonly) unsigned long long numberOfSectionsBeforeUpdate;
@property (nonatomic) unsigned long long pendingBatchUpdateCount;
@property (nonatomic, retain) NSMutableSet *pendingUpdateItems;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previousBounds;
@property (nonatomic, retain) SFFluidCollectionViewLayout *previousTabSwitcherLayout;
@property (nonatomic, readonly) NSSet *reloadedIndexPaths;
@property (nonatomic, copy) NSSet *updates;

- (void).cxx_destruct;
- (unsigned long long)_adjustIndex:(unsigned long long)arg1 withBlock:(id /* block */)arg2;
- (id)_indexPathAfterUpdateOfImplicitlyMovedItemAtIndexPath:(id)arg1;
- (id)_indexPathBeforeUpdateOfImplicitlyMovedItemAtIndexPath:(id)arg1;
- (id)deletedIndexPaths;
- (bool)hasIndexPathChanges;
- (id)indexPathAfterUpdateOfItemAtIndexPath:(id)arg1;
- (id)indexPathBeforeUpdateOfItemAtIndexPath:(id)arg1;
- (id)init;
- (id)insertedIndexPaths;
- (id)layoutContainerForPreviousLayout;
- (id)numberOfItemsBeforeUpdate;
- (unsigned long long)numberOfItemsBeforeUpdateInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSectionsBeforeUpdate;
- (unsigned long long)pendingBatchUpdateCount;
- (id)pendingUpdateItems;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousBounds;
- (id)previousTabSwitcherLayout;
- (id)reloadedIndexPaths;
- (void)setLayoutContainerForPreviousLayout:(id)arg1;
- (void)setNumberOfItemsBeforeUpdate:(id)arg1;
- (void)setPendingBatchUpdateCount:(unsigned long long)arg1;
- (void)setPendingUpdateItems:(id)arg1;
- (void)setPreviousBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPreviousTabSwitcherLayout:(id)arg1;
- (void)setUpdates:(id)arg1;
- (id)updates;

@end
