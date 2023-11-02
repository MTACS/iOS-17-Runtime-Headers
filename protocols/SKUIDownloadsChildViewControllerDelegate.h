
@protocol SKUIDownloadsChildViewControllerDelegate <NSObject>

@required

- (UIImage *)childViewController:(UIViewController *)arg1 artworkForDownload:(SSDownload *)arg2;
- (void)childViewController:(UIViewController *)arg1 performActionForDownload:(SSDownload *)arg2;
- (void)childViewController:(UIViewController *)arg1 removeDownloads:(NSArray *)arg2;

@end
