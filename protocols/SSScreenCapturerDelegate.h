
@protocol SSScreenCapturerDelegate <NSObject>

@required

- (void)_screenshotWindowWasDismissed;
- (void)_screenshotWindowWillBeDisplayed;
- (void)screenCapturer:(SSScreenCapturer *)arg1 didCaptureScreenshotsOfScreens:(NSArray *)arg2;

@end
