
@protocol SVVideoPlayerViewControllerDataSource <NSObject>

@required

- (<SVVideoAdProviding> *)videoAdForVideoPlayerViewController:(SVVideoPlayerViewController *)arg1;
- (<SVVideoProviding> *)videoForVideoPlayerViewController:(SVVideoPlayerViewController *)arg1;

@end
