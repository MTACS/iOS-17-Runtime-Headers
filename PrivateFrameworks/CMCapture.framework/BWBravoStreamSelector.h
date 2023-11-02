
@interface BWBravoStreamSelector : NSObject {
    unsigned int  _afMaxFocusPositionStepForStableStatus;
    bool  _afRecommendedMasterPortTypeForWideSuperWideAutoSwitchEnabled;
    bool  _afRecommendedMasterPortTypeForWideTeleAutoSwitchEnabled;
    bool  _allowSwitchesWithFineMovement;
    BWFigVideoCaptureStream * _currentMasterStream;
    bool  _digitalFlashAdjustEITForTargetOffsetAndBias;
    double  _digitalFlashMaxTeleToWideEITThreshold;
    double  _digitalFlashMaxTeleToWideEITThresholdWithHumansPresent;
    double  _digitalFlashMinEITPercentageChangeForSceneChange;
    double  _digitalFlashMinTeleToWideEITThreshold;
    double  _digitalFlashMinTeleToWideEITThresholdWithHumansPresent;
    int  _digitalFlashTeleToWideNumberOfConsecutiveFramesWithHumanPresentThreshold;
    NSArray * _eligibleFallbackPortTypes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _eligibleFallbackPortTypesLock;
    float  _exposureRangeHighForRecommendedMasterSwitch;
    float  _exposureRangeLowForRecommendedMasterSwitch;
    double  _initialEIT;
    float  _initialFocusDistance;
    int  _initialLuxLevel;
    NSArray * _lastEligibleFallbackPortTypes;
    NSString * _lastPortTypeMadeEligibleByZoom;
    NSArray * _lastPotentialMasterStreams;
    int  _lastSelectionReason;
    int  _lastSuperWideLogicalLensFocusPosition;
    float  _minFocusDistanceChangeForSceneChange;
    float  _minLuxLevelChangeForSceneChange;
    int  _numberOfConsecutiveFramesWithHumans;
    struct { 
        long long selectionBehavior; 
        unsigned long long restrictedSelectionConditions; 
    }  _pendingSelectionConfiguration;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pendingSelectionConfigurationLock;
    BWFigVideoCaptureStream * _preferredMasterStreamIgnoringEligibleFallbackPortTypes;
    float  _previousZoomFactor;
    BWFigVideoCaptureStream * _recommendedMasterStream;
    bool  _resetSceneChangeMonitoring;
    bool  _sceneChangeDetected;
    struct { 
        long long selectionBehavior; 
        unsigned long long restrictedSelectionConditions; 
    }  _selectionConfiguration;
    BWFigVideoCaptureStream * _slaveStreamBlockingFocusAndExposureStability;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _superWideFirstFrameReceivedTime;
    bool  _superWideFocusIsStableOnce;
    bool  _superWideLogicalLensFocusPositionChangedOnce;
    unsigned int  _superWideLogicalLensFocusPositionChangedTimeoutInMilliSeconds;
    float  _superWideMaximumAETargetOffset;
    float  _superWideMaximumAETargetOffsetHysteresisLag;
    BWFigVideoCaptureStream * _superWideStream;
    float  _superWideToWideFocusDistance;
    int  _superWideToWideNumberOfConsecutiveFramesWithMaximumAETargetOffset;
    int  _superWideToWideNumberOfConsecutiveFramesWithMaximumAETargetOffsetThreshold;
    bool  _superWideWaitForStableFocusOnce;
    NSArray * _supportedFallbackPortTypes;
    float  _teleAEGainHysteresisLag;
    bool  _teleAEHysteresisUseEIT;
    float  _teleMaxAEGain;
    float  _teleMaxEIT;
    int  _teleMaxEITReachedCounter;
    int  _teleMaxGainReachedCounter;
    int  _teleMaxSubsequentFramesAtMaxEIT;
    int  _teleMaxSubsequentFramesAtMaxGain;
    float  _teleMaxTeleToWideEITThresholdPercentage;
    float  _teleMinTeleToWideEITThresholdPercentage;
    BWFigVideoCaptureStream * _teleStream;
    bool  _teleSwitchBasedOnExposureAndFocusTargetOffsetEnabled;
    float  _teleToWideFocusDistance;
    long long  _timeOfLastExposureModeChange;
    long long  _timeOfLastFocusModeChange;
    long long  _timeOfLastPortTypeMadeEligibleByZoom;
    long long  _timeOfLastZoomFactorChange;
    bool  _waitingForSlaveFocusAfterZoomChange;
    BWFigVideoCaptureStream * _wideStream;
    float  _wideToSuperWideFocusDistance;
    float  _wideToTeleFocusDistance;
}

@property (nonatomic, copy) NSArray *eligibleFallbackPortTypes;
@property (nonatomic, readonly) int lastSelectionReason;
@property (nonatomic, readonly) BWFigVideoCaptureStream *preferredMasterStreamIgnoringEligibleFallbackPortTypes;
@property (nonatomic, readonly) BWFigVideoCaptureStream *recommendedMasterStream;
@property (nonatomic) struct { long long x1; unsigned long long x2; } selectionConfiguration;
@property (nonatomic, readonly) BWFigVideoCaptureStream *slaveStreamBlockingFocusAndExposureStability;
@property (nonatomic, readonly) bool superWideAutoSwitchingSupported;
@property (nonatomic, readonly) float superWideToWideFocusDistance;
@property (nonatomic) float teleMaxAEGain;
@property (nonatomic) float teleMaxEIT;
@property (nonatomic, readonly) float wideToSuperWideFocusDistance;

+ (void)initialize;

- (void)dealloc;
- (id)eligibleFallbackPortTypes;
- (void)exposureModeDidChange;
- (void)focusModeDidChange;
- (id)initWithStreamSelectionAttributes:(id)arg1 wideStream:(id)arg2 teleStream:(id)arg3 superWideStream:(id)arg4 cameraCalibrationValid:(bool)arg5;
- (int)lastSelectionReason;
- (id)preferredMasterPortTypeForFrameStatisticsByPortType:(id)arg1 zoomFactor:(float)arg2;
- (id)preferredMasterStreamIgnoringEligibleFallbackPortTypes;
- (id)recommendMasterStreamUsingCurrentMasterStream:(id)arg1 frameStatisticsByPortType:(id)arg2 zoomFactor:(float)arg3 digitalFlashMode:(int)arg4 detectedObjects:(id)arg5 cameraControlsStatisticsMasterStream:(id)arg6;
- (id)recommendedMasterStream;
- (void)resetWithZoomFactor:(float)arg1 currentMasterStream:(id)arg2;
- (struct { long long x1; unsigned long long x2; })selectionConfiguration;
- (void)setEligibleFallbackPortTypes:(id)arg1;
- (void)setSelectionConfiguration:(struct { long long x1; unsigned long long x2; })arg1;
- (void)setTeleMaxAEGain:(float)arg1;
- (void)setTeleMaxEIT:(float)arg1;
- (id)slaveStreamBlockingFocusAndExposureStability;
- (bool)superWideAutoSwitchingSupported;
- (float)superWideToWideFocusDistance;
- (float)teleMaxAEGain;
- (float)teleMaxEIT;
- (bool)telephotoLimitsReachedForFrameStatisticsByPortType:(id)arg1;
- (float)wideToSuperWideFocusDistance;

@end
