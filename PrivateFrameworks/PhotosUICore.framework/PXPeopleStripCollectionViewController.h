
@interface PXPeopleStripCollectionViewController : UICollectionViewController <UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout> {
    PXPeopleDataSource * _dataSource;
    <PXPeopleStripCollectionViewControllerDelegate> * _delegate;
    PXPeopleStripCollectionViewCell * _preloadedCell;
}

@property (nonatomic) PXPeopleDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXPeopleStripCollectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXPeopleStripCollectionViewCell *preloadedCell;
@property (readonly) Class superclass;

+ (id)_formattedPeopleForMember:(id)arg1;

- (void).cxx_destruct;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (struct CGPoint { double x1; double x2; })collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)contentWidthChanged;
- (id)dataSource;
- (id)delegate;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;
- (id)preloadedCell;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreloadedCell:(id)arg1;
- (void)viewDidLoad;

@end
