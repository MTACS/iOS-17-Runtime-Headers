
@protocol PXInboxModelDetailViewControllerProvider <NSObject>

@required

- (long long)presentationTypeForInboxModel:(id <PXInboxModel>)arg1;

@optional

- (void)navigateToInboxModel:(id <PXInboxModel>)arg1 inSharedAlbumActivityFeedViewController:(id <PLCloudFeedNavigating><PXNavigableCloudFeedViewController>)arg2;
- (UIViewController *)viewControllerForInboxModel:(id <PXInboxModel>)arg1 fromViewController:(UIViewController *)arg2;

@end
