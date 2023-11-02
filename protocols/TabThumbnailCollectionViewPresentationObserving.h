
@protocol TabThumbnailCollectionViewPresentationObserving <NSObject>

@optional

- (void)tabCollectionViewDidCancelDismissal:(id <TabThumbnailCollectionView>)arg1;
- (void)tabCollectionViewDidDismiss:(id <TabThumbnailCollectionView>)arg1;
- (void)tabCollectionViewDidPresent:(id <TabThumbnailCollectionView>)arg1;
- (void)tabCollectionViewWillDismiss:(id <TabThumbnailCollectionView>)arg1;
- (void)tabCollectionViewWillPresent:(id <TabThumbnailCollectionView>)arg1;

@end
