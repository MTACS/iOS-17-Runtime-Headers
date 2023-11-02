
@interface HKScalarGraphCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    NSArray * _audiograms;
    UICollectionView * _collectionView;
    double  _collectionViewHeight;
    HKScalarGraphCollectionViewCell * _currentCell;
    long long  _currentIndex;
    <HKScalarGraphCollectionViewDelegate> * _delegate;
    double  _minimumHeight;
    HKUnitPreferenceController * _unitController;
}

@property (nonatomic, copy) NSArray *audiograms;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic) double collectionViewHeight;
@property (nonatomic) HKScalarGraphCollectionViewCell *currentCell;
@property (nonatomic) long long currentIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKScalarGraphCollectionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double minimumHeight;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKUnitPreferenceController *unitController;

- (void).cxx_destruct;
- (id)_buildCollectionViewLayout;
- (void)_pinView:(id)arg1 toParentGuide:(id)arg2;
- (void)_resetScrollPositionForIndex:(long long)arg1;
- (void)_setupChartCollectionView;
- (id)audiograms;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (double)collectionViewHeight;
- (id)currentCell;
- (long long)currentIndex;
- (id)delegate;
- (id)initWithMinimumHeight:(double)arg1 unitController:(id)arg2;
- (double)minimumHeight;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)redrawCurrentCell;
- (void)reload;
- (void)resetToIndex:(long long)arg1;
- (void)resetToMostRecent;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAudiograms:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewHeight:(double)arg1;
- (void)setCurrentCell:(id)arg1;
- (void)setCurrentIndex:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMinimumHeight:(double)arg1;
- (void)setUnitController:(id)arg1;
- (id)unitController;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
