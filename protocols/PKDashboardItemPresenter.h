
@protocol PKDashboardItemPresenter <NSObject>

@required

- (PKDashboardCollectionViewCell *)cellForItem:(id <PKDashboardItem>)arg1 inCollectionView:(UICollectionView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (NSDictionary *)collectionViewCellClasses;
- (void)didSelectItem:(void *)arg1 inCollectionView:(void *)arg2 atIndexPath:(void *)arg3 navigationController:(void *)arg4 canPresent:(void *)arg5; // needs 5 arg types, found 9: <PKDashboardItem> *, UICollectionView *, NSIndexPath *, UINavigationController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, void*
- (Class)itemClass;
- (struct CGSize { double x1; double x2; })sizeForItem:(id <PKDashboardItem>)arg1 inCollectionView:(UICollectionView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)updateCell:(UICollectionViewCell *)arg1 forItem:(id <PKDashboardItem>)arg2 inCollectionView:(UICollectionView *)arg3 atIndexPath:(NSIndexPath *)arg4;

@optional

- (bool)canSelectItem:(id <PKDashboardItem>)arg1 inCollectionView:(UICollectionView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)cellDidDisappear:(UICollectionViewCell *)arg1 forItem:(id <PKDashboardItem>)arg2 inCollectionView:(UICollectionView *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (bool)cellIsIndependentForItem:(id <PKDashboardItem>)arg1 inCollectionView:(UICollectionView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (bool)cellIsStackableForItem:(id <PKDashboardItem>)arg1 inCollectionView:(UICollectionView *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)cellWillAppear:(UICollectionViewCell *)arg1 forItem:(id <PKDashboardItem>)arg2 inCollectionView:(UICollectionView *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (bool)hideSeparatorForItem:(id <PKDashboardItem>)arg1 inCollectionView:(UICollectionView *)arg2;
- (void)prefetchForItem:(id <PKDashboardItem>)arg1 inCollectionView:(UICollectionView *)arg2;
- (void)traitCollectionDidChangeFromTrait:(UITraitCollection *)arg1 toTrait:(UITraitCollection *)arg2 inCollectionView:(UICollectionView *)arg3;

@end
