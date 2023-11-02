
@interface SFFluidTabOverviewDataSource : NSObject <SFFluidCollectionViewDataSource> {
    SFFluidCollectionView * _fluidCollectionView;
    id /* block */  _itemViewConfigurationBlock;
    NSArray * _items;
    NSOrderedSet * _pinnedItems;
    NSArray * _sections;
    id /* block */  _supplementaryViewProvider;
    NSOrderedSet * _unpinnedItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SFFluidCollectionView *fluidCollectionView;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ itemViewConfigurationBlock;
@property (nonatomic, copy) NSArray *items;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ supplementaryViewProvider;

- (void).cxx_destruct;
- (id)fluidCollectionView;
- (unsigned long long)fluidCollectionView:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;
- (id)fluidCollectionView:(id)arg1 viewForItemAtIndexPath:(id)arg2;
- (id)fluidCollectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)identifierForSectionAtIndex:(unsigned long long)arg1;
- (id)indexPathForItem:(id)arg1;
- (id)init;
- (id)itemAtIndexPath:(id)arg1;
- (id /* block */)itemViewConfigurationBlock;
- (id)items;
- (unsigned long long)numberOfSectionsForFluidCollectionView:(id)arg1;
- (unsigned long long)sectionForIdentifier:(long long)arg1;
- (void)setFluidCollectionView:(id)arg1;
- (void)setItemViewConfigurationBlock:(id /* block */)arg1;
- (void)setItems:(id)arg1;
- (void)setItemsWithPinnedItems:(id)arg1 unpinnedItems:(id)arg2;
- (void)setSupplementaryViewProvider:(id /* block */)arg1;
- (id /* block */)supplementaryViewProvider;

@end
