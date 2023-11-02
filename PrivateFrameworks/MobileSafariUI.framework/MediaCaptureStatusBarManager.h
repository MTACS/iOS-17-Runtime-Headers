
@interface MediaCaptureStatusBarManager : SFMediaCaptureStatusBarManager

@property (nonatomic, readonly) TabDocument *recordingTabDocument;

+ (id)sharedManager;

- (void)activateApp;
- (void)browserControllerDidEnterBackground:(id)arg1;
- (void)browserControllerWillEnterForeground:(id)arg1;
- (void)browserControllerWillEnterTabView:(id)arg1;
- (void)browserControllerWillExitTabView:(id)arg1;
- (id)recordingTabDocument;
- (id)statusString;
- (void)tabDidBecomeActive:(id)arg1;

@end
