
@protocol SBInteractiveScreenshotGestureManagerDelegate <NSObject>

@required

- (void)interactiveScreenshotGestureManager:(SBInteractiveScreenshotGestureManager *)arg1 requestsScreenshotPreheatWithPresentationOptions:(SSScreenCapturerPresentationOptions *)arg2;
- (void)interactiveScreenshotGestureManager:(SBInteractiveScreenshotGestureManager *)arg1 requestsScreenshotWithOptionsCollection:(SSScreenCapturerScreenshotOptionsCollection *)arg2 presentationOptions:(SSScreenCapturerPresentationOptions *)arg3;
- (bool)interactiveScreenshotGestureManagerShouldPreventGestureRecognition:(SBInteractiveScreenshotGestureManager *)arg1;

@end
