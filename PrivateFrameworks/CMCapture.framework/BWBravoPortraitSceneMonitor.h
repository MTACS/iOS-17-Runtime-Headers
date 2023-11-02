
@interface BWBravoPortraitSceneMonitor : NSObject <BWPortraitSceneMonitor> {
    bool  _aeStableAfterStartStreaming;
    float  _backgroundShiftSumFiltered;
    bool  _focusAdjusting;
    bool  _focusLocked;
    bool  _focusStableAfterStartStreaming;
    float  _invalidShiftRatioFiltered;
    int  _lastFocusingMethod;
    int  _lastSDOFEffectStatus;
    int  _numFramesSinceAEBecameStable;
    int  _numFramesSinceFocusBecameStable;
    int  _numFramesSinceFocusLocked;
    bool  _oneShotFocusScanInProgress;
    bool  _portraitSceneMonitoringRequiresStageThresholds;
    bool  _sceneIsTooDark;
    bool  _sceneTooDarkExposureThresholdReached;
    float  _sceneTooDarkGainHysteresisLag;
    float  _sceneTooDarkGainThreshold;
    float  _sceneTooDarkInvalidShiftRatioHysteresisLag;
    float  _sceneTooDarkInvalidShiftRatioThreshold;
    bool  _sceneTooDarkMonitoringEnabled;
    bool  _stageFaceDetected;
    bool  _stageFaceHasBeenSeen;
    bool  _stageFaceMonitoringEnabled;
    int  _stageFaceNumberOfFramesSinceLastFace;
    int  _stageFaceNumberOfFramesSinceLastFaceThreshold;
    NSArray * _stageMostRecentFaces;
    bool  _stageSubjectTooFarDistanceThresholdReached;
    bool  _stageTooFarBackgroundShiftSumNoFacesIsTooLow;
    float  _stageTooFarBackgroundShiftSumNoFacesThreshold;
    int  _stageTooFarBackgroundShiftTooLowNumFrames;
    float  _stageTooFarFocusDistanceThreshold;
    bool  _subjectIsTooClose;
    int  _subjectTooCloseLastWideFocusPosition;
    bool  _subjectTooCloseMonitoringEnabled;
    float  _subjectTooCloseWideFocusDistanceHysteresisLag;
    float  _subjectTooCloseWideFocusDistanceThreshold;
    float  _subjectTooFarBackgroundShiftRollOffInvalidShiftRatioEnd;
    float  _subjectTooFarBackgroundShiftRollOffInvalidShiftRatioStart;
    bool  _subjectTooFarBackgroundShiftSumIsTooLow;
    float  _subjectTooFarBackgroundShiftSumTooLowHysteresisLag;
    float  _subjectTooFarBackgroundShiftSumTooLowThreshold;
    int  _subjectTooFarBackgroundShiftTooLowNumFrames;
    bool  _subjectTooFarDistanceThresholdReached;
    float  _subjectTooFarFocusDistanceHysteresisLag;
    float  _subjectTooFarFocusDistanceInfinityThreshold;
    float  _subjectTooFarFocusDistanceThreshold;
    int  _subjectTooFarLastTeleFocusPosition;
    bool  _subjectTooFarMonitoringEnabled;
    bool  _subjectTooFarUseTeleForFocusDistance;
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
