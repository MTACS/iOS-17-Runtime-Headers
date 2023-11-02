
@interface DMCEnrollmentNameListCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    double  _cellHeight;
    UICollectionView * _collectionView;
    NSArray * _names;
    unsigned long long  _numberOfColumns;
}

@property (nonatomic) double cellHeight;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *names;
@property (nonatomic) unsigned long long numberOfColumns;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cell;
- (double)cellHeight;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)estimatedCellHeight;
- (id)initWithNames:(id)arg1 numberOfColumns:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)names;
- (unsigned long long)numberOfColumns;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setCellHeight:(double)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setNames:(id)arg1;
- (void)setNumberOfColumns:(unsigned long long)arg1;

@end
