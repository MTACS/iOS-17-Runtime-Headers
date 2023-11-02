
@interface GKGameLayerCollectionDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    GKGameRecord * _gameRecord;
    UIViewController * _presentationViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKGameRecord *gameRecord;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presentationViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (double)cellSpacing;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)gameRecord;
- (void)handleSelectionInCollectionView:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)initWithGameRecord:(id)arg1;
- (long long)itemCount;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (void)prepareCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)presentationViewController;
- (void)setGameRecord:(id)arg1;
- (void)setPresentationViewController:(id)arg1;
- (void)setupCollectionView:(id)arg1;
- (struct CGSize { double x1; double x2; })standardCellSizeForCollectionView:(id)arg1;
- (id)title;

@end
