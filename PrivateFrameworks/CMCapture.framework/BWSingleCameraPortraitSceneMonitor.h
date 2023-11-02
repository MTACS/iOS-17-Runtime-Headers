
@interface BWSingleCameraPortraitSceneMonitor : NSObject <BWPortraitSceneMonitor> {
    bool  _aeStableAfterStartStreaming;
    float  _backgroundShiftSumFiltered;
    NSDictionary * _cinematicVideoFocusRequest;
    BWTrackedFace * _currentlyTrackedFace;
    bool  _enabled;
    bool  _focusAdjusting;
    bool  _focusLocked;
    bool  _focusStableAfterStartStreaming;
    float  _invalidShiftRatioFiltered;
    float  _lastFocusDistance;
    int  _lastFocusingMethod;
    int  _lastSDOFEffectStatus;
    float  _numFacesDetectedFiltered;
    int  _numFramesSinceAEBecameStable;
    int  _numFramesSinceFocusBecameStable;
    int  _numFramesSinceFocusLocked;
    int  _numberOfFramesSinceLastFace;
    bool  _oneShotFocusScanInProgress;
    bool  _portraitSceneMonitoringRequiresStageThresholds;
    bool  _sceneIsTooDark;
    bool  _sceneTooDarkMonitoringEnabled;
    bool  _stageFaceDetected;
    bool  _stageFaceHasBeenSeen;
    int  _stageFaceNumberOfFramesSinceLastFaceThreshold;
    int  _stageMostRecentFacesCount;
    bool  _subjectIsTooClose;
    float  _subjectTooCloseFocusDistanceHysteresisLag;
    float  _subjectTooCloseFocusDistanceThreshold;
    int  _subjectTooCloseLastFocusPosition;
    bool  _subjectTooCloseMonitoringEnabled;
    bool  _subjectTooFarDistanceThresholdReached;
    float  _subjectTooFarFocusDistanceHysteresisLag;
    float  _subjectTooFarFocusDistanceThreshold;
    int  _subjectTooFarLastFocusPosition;
    bool  _subjectTooFarMonitoringEnabled;
    bool  _useAPSFocusDistance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float focusDistanceToMaxAllowedFocusDistanceRatio;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool portraitSceneMonitoringRequiresStageThresholds;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)dealloc;
- (float)focusDistanceToMaxAllowedFocusDistanceRatio;
- (void)focusScanDidComplete;
- (id)initWithTuningParameters:(id)arg1 attachDebugFrameStatistics:(bool)arg2;
- (bool)portraitSceneMonitoringRequiresStageThresholds;
- (bool)resolveSDOFStatusWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 frameStatisticsByPortType:(id)arg2 sceneFlags:(unsigned long long)arg3 flashOrTorchWillBeActive:(bool)arg4 digitalFlashWillFire:(bool)arg5 thermalPressureLevel:(int)arg6 peakPowerPressureLevel:(int)arg7 effectStatus:(int*)arg8 stagePreviewStatus:(int*)arg9;
- (void)setAutoFocusInProgress:(bool)arg1 focusLocked:(bool)arg2 oneShotFocusScanInProgress:(bool)arg3;
- (void)setPortraitSceneMonitoringRequiresStageThresholds:(bool)arg1;
- (void)setSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 closeCanonicalDisparityAverage:(float)arg3 faceCanonicalDisparityAverages:(id)arg4 erodedForegroundRatio:(float)arg5 foregroundRatio:(float)arg6 occluded:(bool)arg7 faces:(id)arg8;

@end
