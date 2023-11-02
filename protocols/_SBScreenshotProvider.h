
@protocol _SBScreenshotProvider <NSObject>

@required

- (UIImage *)captureScreenshot;
- (SBScreenFlash *)flasher;
- (UIScreen *)screen;

@end
