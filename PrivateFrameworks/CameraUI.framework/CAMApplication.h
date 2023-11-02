
@interface CAMApplication : UIApplication {
    CAMPerformanceTestPlan * _currentTestPlan;
}

@property (nonatomic, retain) CAMPerformanceTestPlan *currentTestPlan;

+ (long long)appOrPlugInInterfaceOrientation;
+ (long long)appOrPlugInState;
+ (bool)isAppOrPlugInSuspended;

- (void).cxx_destruct;
- (void)_configureExtendedLaunchTestIfNeeded;
- (id)_extendLaunchTest;
- (void)_registerPreviewStartBlock:(id /* block */)arg1;
- (id)currentTestPlan;
- (void)didChangeToMode:(long long)arg1 device:(long long)arg2;
- (void)didCloseViewfinderForReason:(long long)arg1;
- (void)didOpenViewfinderForReason:(long long)arg1;
- (void)prepareForDefaultImageSnapshotForScreen:(id)arg1;
- (bool)runLibrarySelectionWithTestPlan:(id)arg1 options:(id)arg2;
- (bool)runNewPPTUICaptureTestWithTestPlan:(id)arg1 options:(id)arg2;
- (bool)runPresentCameraRollWithTestPlan:(id)arg1 options:(id)arg2;
- (bool)runSwitchCamerasTestWithTestPlan:(id)arg1 options:(id)arg2;
- (bool)runSwitchModesWithTestPlan:(id)arg1 options:(id)arg2 userPreferencesOverrides:(id)arg3;
- (bool)runSwitchToPortraitFrontWithTestPlan:(id)arg1 options:(id)arg2;
- (bool)runTakePictureFrontCameraWithTestPlan:(id)arg1 options:(id)arg2 prototype:(id)arg3 forCaptureMode:(long long)arg4;
- (bool)runTakePictureFrontPortraitWithTestPlan:(id)arg1 options:(id)arg2 prototype:(id)arg3;
- (bool)runTakePicturePortraitWithTestPlan:(id)arg1 options:(id)arg2 prototype:(id)arg3;
- (bool)runTakePictureTestWithTestPlan:(id)arg1 options:(id)arg2 prototype:(id)arg3 forCaptureMode:(long long)arg4;
- (bool)runTakeVideoTestWithTestPlan:(id)arg1 options:(id)arg2 userPreferencesOverrides:(id)arg3;
- (bool)runTest:(id)arg1 options:(id)arg2;
- (void)setCurrentTestPlan:(id)arg1;
- (unsigned long long)supportedInterfaceOrientationsForWindow:(id)arg1;
- (void)willCloseViewfinderForReason:(long long)arg1;
- (void)willOpenViewfinderForReason:(long long)arg1;

@end
