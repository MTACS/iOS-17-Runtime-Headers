
@interface PXPeopleRecoCollectionViewController : UICollectionViewController <PXPeopleRecoCollectionViewDelegate, PXPeopleRecoDataSourceDelegate, UICollectionViewDataSourcePrefetching> {
    PXPeopleRecoDataSource * _dataSource;
    UICollectionViewSupplementaryRegistration * _headerRegistration;
}

@property (nonatomic, readonly) PXPeopleRecoDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UICollectionViewSupplementaryRegistration *headerRegistration;
@property (readonly) Class superclass;

+ (id)recoControllerForPerson:(id)arg1;

- (void).cxx_destruct;
- (void)_cancelTapped:(id)arg1;
- (void)_doneTapped:(id)arg1;
- (id)_initWithPerson:(id)arg1;
- (void)_reviewMoreTapped:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 frameDidChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)dataSource;
- (id)headerRegistration;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)recoDataSourceDataChanged:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
