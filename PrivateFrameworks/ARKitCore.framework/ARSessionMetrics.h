
@interface ARSessionMetrics : NSObject {
    unsigned long long  _badFrameCount;
    float  _badFramePercentage10;
    float  _badFramePercentage60;
    float  _badFramePercentageMoreThan60;
    unsigned long long  _coachingOverlayActivationCount;
    long long  _coachingOverlayGoal;
    Class  _configClass;
    ARConfiguration * _currentConfiguration;
    unsigned long long  _currentVIOMapSize;
    unsigned long long  _frameCount;
    NSDate * _frameStartDate;
    double  _geoTrackingAngleBackToDown;
    double  _geoTrackingAngleFirstUp;
    double  _geoTrackingClFirstDem;
    double  _geoTrackingClFirstGps;
    double  _geoTrackingClFirstNonGps;
    long long  _geoTrackingFailureReason;
    double  _geoTrackingFirstImage;
    unsigned long long  _geoTrackingHighAccuracyFrameCount;
    double  _geoTrackingInitializationTime;
    unsigned long long  _geoTrackingLocalizationCount;
    double  _geoTrackingLocalizationTime;
    bool  _geoTrackingLocalized;
    unsigned long long  _geoTrackingLowAccuracyFrameCount;
    unsigned long long  _geoTrackingMediumAccuracyFrameCount;
    bool  _geoTrackingTrueNorthUnavailable;
    double  _geoTrackingVioBackToLimited;
    double  _geoTrackingVioFirstNormalPose;
    double  _geoTrackingVioFirstPose;
    double  _geoTrackingVlAfterAvailabilityCall;
    double  _geoTrackingVlAfterLocalizationCall;
    double  _geoTrackingVlBeforeAvailabilityCall;
    double  _geoTrackingVlBeforeLocalizationCall;
    double  _geoTrackingVlFirstNonLocalized;
    bool  _hasInitialWorldMap;
    unsigned long long  _hiResFrameCaptureCount;
    bool  _initializingVIO;
    bool  _isAutoFocusEnabled;
    NSArray * _lastUpdatedFrameAnchors;
    CLLocation * _lastUpdatedFrameLocation;
    void _maxPos;
    void _minPos;
    unsigned long long  _numberOfCameraSwitches;
    unsigned long long  _numberOfReinitializationAttempts;
    bool  _positionInitialized;
    unsigned long long  _raycastCount;
    bool  _relocalizingToInitialWorldMap;
    <ARSessionMetricsReporting> * _reporter;
    bool  _sessionDidFailWithError;
    double  _sessionTimeForLastBadFrameRecording;
    bool  _sessionWasThrottled;
    NSDate * _startDate;
    float  _timeUntilThrottling;
    double  _vioInitializationTime;
}

+ (id)getRenderEngineString:(id)arg1;
+ (void)recordAltitudeLookupAttemptWithDuration:(double)arg1 andResult:(id)arg2;
+ (void)recordHitTest:(unsigned long long)arg1;
+ (void)recordReplayMetrics:(id)arg1;
+ (void)setRenderType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_processFrameProperties:(id)arg1;
- (void)_recordBadFramePercentageFinal:(bool)arg1;
- (void)_recordSessionEnd;
- (id)init;
- (id)initWithReporter:(id)arg1;
- (id)queue;
- (void)recordCoachingOverlayUsage:(int)arg1;
- (void)recordHiResFrameCapture;
- (void)recordRaycast:(id)arg1 tracked:(bool)arg2;
- (void)recordSaveMap:(long long)arg1 numberOfFeaturePoints:(unsigned long long)arg2;
- (void)recordTrueNorthUnavailable;
- (void)reportSessionFailure:(id)arg1;
- (void)sessionDidUpdateFrame:(id)arg1;
- (void)sessionStarted:(id)arg1 withConfiguration:(id)arg2;
- (void)sessionStopped;
- (void)sessionUpdateThermalState:(long long)arg1;

@end
