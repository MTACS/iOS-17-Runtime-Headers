
@interface CSLockScreenPearlSettings : PTSettings {
    bool  _coachingDelaysUnlock;
    double  _durationOnCameraCoveredGlyphBeforeCoaching;
    double  _durationToSuppressCameraCoveredWhenWakingWithSmartCover;
    CSLockScreenBiometricFailureSettings * _failureSettings;
    double  _minimumDurationBeforeShowingScanningState;
    double  _minimumDurationBetweenLeavingCoachingAndCoaching;
    double  _minimumDurationShowingCoaching;
    unsigned long long  _overrideCoachingBiometricEvent;
    bool  _overrideCoachingConditionEnabled;
    bool  _pearlDebugUIEnabled;
    bool  _showScanningStateDuringFaceDetect;
    bool  _showScanningStateOnLockScreen;
    bool  _spinBeforeCoaching;
    double  _systemApertureDismissDelayAuth;
    double  _systemApertureDismissDelayDismissal;
}

@property (nonatomic) bool coachingDelaysUnlock;
@property (nonatomic) double durationOnCameraCoveredGlyphBeforeCoaching;
@property (nonatomic) double durationToSuppressCameraCoveredWhenWakingWithSmartCover;
@property (nonatomic, retain) CSLockScreenBiometricFailureSettings *failureSettings;
@property (nonatomic) double minimumDurationBeforeShowingScanningState;
@property (nonatomic) double minimumDurationBetweenLeavingCoachingAndCoaching;
@property (nonatomic) double minimumDurationShowingCoaching;
@property (nonatomic) unsigned long long overrideCoachingBiometricEvent;
@property (nonatomic) bool overrideCoachingConditionEnabled;
@property (nonatomic) bool pearlDebugUIEnabled;
@property (nonatomic) bool showScanningStateDuringFaceDetect;
@property (nonatomic) bool showScanningStateOnLockScreen;
@property (nonatomic) bool spinBeforeCoaching;
@property (nonatomic) double systemApertureDismissDelayAuth;
@property (nonatomic) double systemApertureDismissDelayDismissal;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (bool)coachingDelaysUnlock;
- (double)durationOnCameraCoveredGlyphBeforeCoaching;
- (double)durationToSuppressCameraCoveredWhenWakingWithSmartCover;
- (id)failureSettings;
- (double)minimumDurationBeforeShowingScanningState;
- (double)minimumDurationBetweenLeavingCoachingAndCoaching;
- (double)minimumDurationShowingCoaching;
- (unsigned long long)overrideCoachingBiometricEvent;
- (bool)overrideCoachingConditionEnabled;
- (bool)pearlDebugUIEnabled;
- (struct { bool x1; bool x2; double x3; bool x4; double x5; double x6; double x7; double x8; bool x9; bool x10; bool x11; unsigned long long x12; })proudLockControllerViewControllerConfiguration;
- (void)setCoachingDelaysUnlock:(bool)arg1;
- (void)setDefaultValues;
- (void)setDurationOnCameraCoveredGlyphBeforeCoaching:(double)arg1;
- (void)setDurationToSuppressCameraCoveredWhenWakingWithSmartCover:(double)arg1;
- (void)setFailureSettings:(id)arg1;
- (void)setMinimumDurationBeforeShowingScanningState:(double)arg1;
- (void)setMinimumDurationBetweenLeavingCoachingAndCoaching:(double)arg1;
- (void)setMinimumDurationShowingCoaching:(double)arg1;
- (void)setOverrideCoachingBiometricEvent:(unsigned long long)arg1;
- (void)setOverrideCoachingConditionEnabled:(bool)arg1;
- (void)setPearlDebugUIEnabled:(bool)arg1;
- (void)setShowScanningStateDuringFaceDetect:(bool)arg1;
- (void)setShowScanningStateOnLockScreen:(bool)arg1;
- (void)setSpinBeforeCoaching:(bool)arg1;
- (void)setSystemApertureDismissDelayAuth:(double)arg1;
- (void)setSystemApertureDismissDelayDismissal:(double)arg1;
- (bool)showScanningStateDuringFaceDetect;
- (bool)showScanningStateOnLockScreen;
- (bool)spinBeforeCoaching;
- (double)systemApertureDismissDelayAuth;
- (double)systemApertureDismissDelayDismissal;

@end
