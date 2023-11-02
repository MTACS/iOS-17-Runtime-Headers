
@protocol ASCLockupMediaPresenterObserver <NSObject>

@required

- (void)lockupMediaPresenterDidBeginScreenshotsFetchRequest;
- (void)lockupMediaPresenterDidCancelScreenshotsFetchRequest;
- (void)lockupMediaPresenterDidFinishScreenshotsFetchRequest;

@optional

- (void)lockupMediaPresenterVideoStateDidChange:(long long)arg1;

@end
