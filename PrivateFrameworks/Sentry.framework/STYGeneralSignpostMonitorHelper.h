
@interface STYGeneralSignpostMonitorHelper : STYSignpostsMonitorHelper {
    STYAbcHelper * _abcHelper;
    SignpostSupportSubsystemCategoryAllowlist * _allowList;
    bool  _avoidGeneratingTailspinsForAppLaunches;
    bool  _seedUserMode;
}

@property (retain) STYAbcHelper *abcHelper;
@property bool avoidGeneratingTailspinsForAppLaunches;
@property bool seedUserMode;

- (void).cxx_destruct;
- (id)abcHelper;
- (id)allowList;
- (bool)avoidGeneratingTailspinsForAppLaunches;
- (void)handleEmit:(id)arg1;
- (void)handleInterval:(id)arg1;
- (id)init;
- (id)name;
- (void)perfProblemDetected:(id)arg1 tailspinFilenamePrefix:(id)arg2;
- (void)perfProblemDetectedOnMac:(id)arg1;
- (bool)seedUserMode;
- (void)setAbcHelper:(id)arg1;
- (void)setAvoidGeneratingTailspinsForAppLaunches:(bool)arg1;
- (void)setSeedUserMode:(bool)arg1;
- (bool)wantsAnimationFrameRate;

@end
