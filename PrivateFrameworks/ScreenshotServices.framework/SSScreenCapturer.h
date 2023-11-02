
@interface SSScreenCapturer : NSObject <SSScreenshotsWindowDelegate, SSTestingCoordinatorDelegate, SSUIServiceServerDelegate> {
    <SSScreenCapturerDelegate> * _delegate;
    SSDittoRemoteConnection * _dittoRemoteConnection;
    FBSDisplayLayoutMonitor * _layoutMonitor;
    SSApplicationScreenshotSupplementalDataCapturer * _metadataCapturer;
    RCPEventStreamRecorder * _recap;
    RCPScreenRecorder * _recapSnapshotter;
    SSScreenshotsWindow * _serviceWindow;
    SSSnapshotter * _snapshotter;
    SSTestingCoordinator * _testingCoordinator;
    SSUIServiceServer * _uiServiceServer;
}

@property (nonatomic) <SSScreenCapturerDelegate> *delegate;
@property (nonatomic, readonly) UIWindow *screenshotsWindow;

+ (bool)_filesAppExistsOnSystem;
+ (void)playScreenshotSound;
+ (bool)shouldUseScreenCapturerForScreenshots;

- (void).cxx_destruct;
- (id)_applicationProxyForCurrentApp;
- (id)_betaApplicationName;
- (bool)_betaFeedbackEnabled:(id)arg1;
- (id)_bundleIDForCurrentApplication;
- (void)_captureAndSendDocumentForEnvironmentElement:(id)arg1;
- (void)_captureAndSendMetadataAndDocumentForEnvironmentDescription:(id)arg1 metadataCaptureCompletion:(id /* block */)arg2;
- (void)_captureAndSendMetadataForEnvironmentElement:(id)arg1 metadataCapture:(id /* block */)arg2 sendCompletion:(id /* block */)arg3;
- (id)_currentDisplayLayout;
- (id)_environmentDescriptionFromImage:(id)arg1;
- (void)_preheatAndTakeScreenshotIfPossibleWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2 appleInternalOptions:(id)arg3;
- (void)_saveImageToPhotoLibrary:(id)arg1 environmentDescription:(id)arg2;
- (bool)_screenshotWasTakenOverBetaApp;
- (void)_sendEnvironmentDescription:(id)arg1 savingImageToPhotos:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_sendEnvironmentDescription:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_takeScreenshotWithOptionsCollection:(id)arg1 serviceOptions:(id)arg2 presentationOptions:(id)arg3 appleInternalOptions:(id)arg4;
- (id)_testingCoordinator;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)preheatWithPresentationOptions:(id)arg1;
- (void)screenshotWindowWasDismissed;
- (void)screenshotWindowWillBeDisplayed;
- (id)screenshotsWindow;
- (void)server:(id)arg1 handleRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)startRecap;
- (void)takeScreenshot;
- (void)takeScreenshotWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2;
- (void)takeScreenshotWithPresentationOptions:(id)arg1;
- (void)testingCoordinator:(id)arg1 requestsTakingScreenshotForRunPPTRequest:(id)arg2;

@end
