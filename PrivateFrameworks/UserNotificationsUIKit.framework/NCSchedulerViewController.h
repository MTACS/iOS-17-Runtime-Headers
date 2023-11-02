
@interface NCSchedulerViewController : NCOnboardingViewController <NCSchedulerViewCellDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    UICollectionView * _collectionView;
    double  _dynamicCellHeight;
    double  _dynamicHeaderHeight;
    NSLayoutConstraint * _heightConstraint;
    NSMutableArray * _mutableDeliveryTimes;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSArray *deliveryTimes;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)schedulerWithDeliveryTimes:(id)arg1;

- (void).cxx_destruct;
- (void)_addItemAtIndexPath:(id)arg1;
- (id)_addSummaryText;
- (bool)_canShowWhileLocked;
- (void)_cancelButtonPressed:(id)arg1;
- (unsigned long long)_cellCount;
- (unsigned long long)_currentDailyDigestCount;
- (id)_dateComponentsForHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;
- (void)_deleteItemAtIndexPath:(id)arg1;
- (void)_handleAddOrRemoveActionForIndexPath:(id)arg1;
- (double)_heightThatFitsCollectionView;
- (id)_indexPathForCell:(id)arg1;
- (id)_initWithDeliveryTimes:(id)arg1;
- (void)_insertNextTime;
- (bool)_isAddIndexPath:(id)arg1;
- (bool)_isFirstIndexPath:(id)arg1;
- (bool)_isLastIndexPath:(id)arg1;
- (void)_reloadCollectionViewHeight;
- (id)_summaryTextForCount:(unsigned long long)arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)deliveryTimes;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)schedulerCell:(id)arg1 didChangeTime:(id)arg2;
- (void)schedulerCellButtonPressed:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLoad;

@end
