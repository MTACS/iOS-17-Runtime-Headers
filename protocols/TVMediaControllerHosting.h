
@protocol TVMediaControllerHosting <NSObject>

@required

- (void)adoptMediaController:(UIViewController<TVMediaController> *)arg1;
- (UIViewController<TVMediaController> *)relinquishOwnership;

@end
