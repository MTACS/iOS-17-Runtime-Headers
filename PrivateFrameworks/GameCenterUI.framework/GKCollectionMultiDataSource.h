
@interface GKCollectionMultiDataSource : GKCollectionDataSource {
    NSArray * _dataSources;
}

@property (nonatomic, retain) NSArray *dataSources;

- (void).cxx_destruct;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)dataSourceForIndexPath:(id)arg1;
- (id)dataSources;
- (long long)itemCount;
- (long long)itemCountInSection:(long long)arg1;
- (id)itemForIndexPath:(id)arg1;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)preferredCollectionHeight;
- (void)setDataSources:(id)arg1;
- (void)setupCollectionView:(id)arg1;

@end
