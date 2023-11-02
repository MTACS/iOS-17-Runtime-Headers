
@protocol PUUIImageViewControllerFileResizingDelegate <NSObject>

@required

- (void)imageViewControllerDidConfirmSelection:(PUUIImageViewController *)arg1;
- (NSArray *)imageViewControllerFileSizeMenuActions:(PUUIImageViewController *)arg1;

@end
