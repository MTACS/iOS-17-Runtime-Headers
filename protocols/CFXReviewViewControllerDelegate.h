
@protocol CFXReviewViewControllerDelegate <NSObject>

@optional

- (void)reviewViewController:(CFXReviewViewController *)arg1 didFinishExportingMediaItem:(CFXMediaItem *)arg2 withError:(NSError *)arg3;
- (void)reviewViewController:(CFXReviewViewController *)arg1 didProgress:(double)arg2 exportingMediaItem:(CFXMediaItem *)arg3;
- (void)reviewViewController:(CFXReviewViewController *)arg1 didStartExportingMediaItem:(CFXMediaItem *)arg2;
- (void)reviewViewControllerDidHideUserInterface:(CFXReviewViewController *)arg1;
- (void)reviewViewControllerDidShowUserInterface:(CFXReviewViewController *)arg1;

@end
