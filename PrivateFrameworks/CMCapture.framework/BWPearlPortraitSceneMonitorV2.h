
@interface BWPearlPortraitSceneMonitorV2 : NSObject <BWPortraitSceneMonitor> {
    bool  _aeStableAfterStartStreaming;
    bool  _autoSuggestEnabled;
    int  _autoSuggestMaxPeakPowerPressureLevel;
    int  _autoSuggestMaxThermalPressureLevel;
    BWPortraitAutoSuggest * _autoSuggestMonitor;
    float  _closeDepthDistanceAverage;
    bool  _depthSensorOccluded;
    float  _luxLevelFiltered;
    float  _luxLevelSmoothingFactor;
    int  _numberOfDisabledFramesInARow;
    int  _numberOfFramesSinceLastFace;
    int  _numberOfFramesToStayEnabledThreshold;
    int  _numberOfFramesToWaitForAEAndLTMToStabilize;
    bool  _portraitSceneMonitoringRequiresStageThresholds;
    float  _sdofDepthQuality;
    float  _sdofDepthQualityFiltered;
    float  _sdofDepthQualityKCount;
    float  _sdofDepthQualitySmoothingFactor;
    int  _sdofNumFramesSinceAEBecameStable;
    int  _sdofNumberOfFramesSinceLastFaceThreshold;
    float  _sdofTooBrightDepthQualityMinThreshold;
    unsigned short  _sdofTooBrightLuxLevelThreshold;
    unsigned short  _sdofTooBrightMaxLuxLevelThreshold;
    float  _sdofTooBrightTooFarDepthDistanceThreshold;
    float  _sdofTooCloseDepthDistanceThreshold;
    float  _sdofTooFarDepthDistanceThreshold;
    bool  _shallowDepthOfFieldRenderingEnabled;
    float  _stageBackgroundTooFarDepthQualityThreshold;
    unsigned short  _stageBackgroundTooFarLuxLevelThreshold;
    float  _stageDepthQuality;
    bool  _stageFaceDetected;
    bool  _stageFaceHasBeenSeen;
    int  _stageFaceNumberOfFramesSinceLastFaceThreshold;
    int  _stageMostRecentFacesCount;
    float  _stageTooBrightDepthQualityThreshold;
    float  _stageTooCloseDepthDistanceThreshold;
    float  _stageTooFarDepthDistanceThreshold;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float focusDistanceToMaxAllowedFocusDistanceRatio;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool portraitSceneMonitoringRequiresStageThresholds;
@property (nonatomic) bool shallowDepthOfFieldRenderingEnabled;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)dealloc;
- (float)focusDistanceToMaxAllowedFocusDistanceRatio;
- (void)focusScanDidComplete;
- (id)initWithTuningParameters:(id)arg1 attachDebugFrameStatistics:(bool)arg2 portraitAutoSuggestEnabled:(bool)arg3 shallowDepthOfFieldEnabled:(bool)arg4;
- (bool)portraitSceneMonitoringRequiresStageThresholds;
- (bool)resolveSDOFStatusWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 frameStatisticsByPortType:(id)arg2 sceneFlags:(unsigned long long)arg3 flashOrTorchWillBeActive:(bool)arg4 digitalFlashWillFire:(bool)arg5 thermalPressureLevel:(int)arg6 peakPowerPressureLevel:(int)arg7 effectStatus:(int*)arg8 stagePreviewStatus:(int*)arg9;
- (void)setAutoFocusInProgress:(bool)arg1 focusLocked:(bool)arg2 oneShotFocusScanInProgress:(bool)arg3;
- (void)setPortraitSceneMonitoringRequiresStageThresholds:(bool)arg1;
- (void)setSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 closeCanonicalDisparityAverage:(float)arg3 faceCanonicalDisparityAverages:(id)arg4 erodedForegroundRatio:(float)arg5 foregroundRatio:(float)arg6 occluded:(bool)arg7 faces:(id)arg8;
- (void)setShallowDepthOfFieldRenderingEnabled:(bool)arg1;
- (bool)shallowDepthOfFieldRenderingEnabled;

@end
