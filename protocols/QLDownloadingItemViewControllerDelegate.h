
@protocol QLDownloadingItemViewControllerDelegate <NSObject>

@optional

- (void)downloadingItemViewControllerDidFinishLoadingPreviewItem:(QLDownloadingItemViewController *)arg1 withContents:(id)arg2;
- (bool)downloadingItemViewControllerShouldForceAutodownloadFile:(QLDownloadingItemViewController *)arg1;

@end
