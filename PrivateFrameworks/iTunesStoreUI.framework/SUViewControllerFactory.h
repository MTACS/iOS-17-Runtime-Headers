
@interface SUViewControllerFactory : NSObject

- (id)newComposeReviewViewControllerWithCompositionURL:(id)arg1;
- (id)newDownloadsViewController;
- (id)newNetworkLockoutViewControllerWithSection:(id)arg1;
- (id)newPlaceholderViewController;
- (id)newStorePageViewControllerWithSection:(id)arg1;
- (id)newViewControllerForPage:(id)arg1 ofType:(long long)arg2;
- (id)newViewControllerForTrackList:(id)arg1;
- (id)newVolumeViewController;

@end
