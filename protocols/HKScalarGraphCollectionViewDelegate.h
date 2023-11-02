
@protocol HKScalarGraphCollectionViewDelegate <NSObject>

@required

- (NSArray *)graphSeriesForIndex:(long long)arg1;
- (HKScalarGraphViewController *)graphViewControllerForIndex:(long long)arg1;
- (UIView *)headerViewForLollipop;
- (HKLollipopController *)lollipopControllerForGraphCollectionView;
- (long long)numberOfItemsInCollection;

@optional

- (void)graphCollectionView:(HKScalarGraphCollectionViewController *)arg1 didChangeVisibleIndex:(long long)arg2;

@end
