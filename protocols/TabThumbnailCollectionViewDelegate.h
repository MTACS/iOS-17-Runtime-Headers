
@protocol TabThumbnailCollectionViewDelegate <TabCollectionViewDelegate>

@required

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })effectiveSafeAreaInsetsForTabCollectionView:(id <TabThumbnailCollectionView>)arg1;
- (UIView *)tabCollectionView:(id <TabThumbnailCollectionView>)arg1 borrowContentViewForItem:(id <TabCollectionItem>)arg2 withTopBackdropView:(id*)arg3 ofHeight:(double)arg4;
- (void)tabCollectionView:(id <TabThumbnailCollectionView>)arg1 closeCloudTab:(WBSCloudTab *)arg2 onDevice:(WBSCloudTabDevice *)arg3;
- (bool)tabCollectionView:(id <TabThumbnailCollectionView>)arg1 cloudTab:(WBSCloudTab *)arg2 matchesSearchText:(NSString *)arg3;
- (bool)tabCollectionView:(id <TabThumbnailCollectionView>)arg1 item:(id <TabCollectionItem>)arg2 matchesSearchText:(NSString *)arg3;
- (void)tabCollectionView:(id <TabThumbnailCollectionView>)arg1 relinquishBorrowedContentView:(UIView *)arg2 forItem:(id <TabCollectionItem>)arg3;
- (UIImage *)tabCollectionView:(id <TabThumbnailCollectionView>)arg1 snapshotForItem:(id <TabCollectionItem>)arg2;
- (bool)tabCollectionView:(id <TabThumbnailCollectionView>)arg1 validSnapshotExistsForItem:(id <TabCollectionItem>)arg2;
- (void)tabCollectionViewBeginIgnoringUserInteraction:(id <TabThumbnailCollectionView>)arg1 reason:(NSString *)arg2;
- (void)tabCollectionViewDidDismiss:(id <TabThumbnailCollectionView>)arg1;
- (void)tabCollectionViewDidPresent:(id <TabThumbnailCollectionView>)arg1;
- (void)tabCollectionViewDidUpdateItemVisibilityOrder:(id <TabThumbnailCollectionView>)arg1;
- (void)tabCollectionViewEndIgnoringUserInteraction:(id <TabThumbnailCollectionView>)arg1 reason:(NSString *)arg2;
- (double)tabCollectionViewItemHeaderHeight:(id <TabThumbnailCollectionView>)arg1;
- (void)tabCollectionViewWillDismiss:(id <TabThumbnailCollectionView>)arg1;
- (void)tabCollectionViewWillPresent:(id <TabThumbnailCollectionView>)arg1;
- (NSUndoManager *)undoManagerForTabCollectionView:(id <TabThumbnailCollectionView>)arg1;

@optional

- (bool)tabCollectionViewCanDismiss:(id <TabThumbnailCollectionView>)arg1;
- (void)tabCollectionViewDidCancelDismissal:(id <TabThumbnailCollectionView>)arg1;

@end
