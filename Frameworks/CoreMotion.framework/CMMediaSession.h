
@interface CMMediaSession : NSObject <CMDistributedSensingDelegate> {
    struct Dispatcher { int (**x1)(); id x2; } * _accessoryDeviceMotionConfigDispatcher;
    struct Dispatcher { int (**x1)(); id x2; } * _accessoryDeviceMotionDispatcher;
    struct Dispatcher { int (**x1)(); id x2; } * _accessoryDeviceMotionInEarStatusDispatcher;
    unsigned int  _accessoryIMUSampleRate;
    double  _accessorySampleTimer;
    int  _accessorySamplesPerSecond;
    CMMotionActivityManager * _activityManager;
    NSOperationQueue * _activityQueue;
    bool  _alwaysNotify50HzPose;
    int  _analyticsClientMode;
    struct unique_ptr<CMMediaSessionAnalyticsTracker, std::default_delete<CMMediaSessionAnalyticsTracker>> { 
        struct __compressed_pair<CMMediaSessionAnalyticsTracker *, std::default_delete<CMMediaSessionAnalyticsTracker>> { 
            struct CMMediaSessionAnalyticsTracker {} *__value_; 
        } __ptr_; 
    }  _analyticsTracker;
    unsigned long long  _anchorUpdateIntervalUs;
    id /* block */  _clientHandler;
    int  _clientMode;
    NSObject<OS_dispatch_queue> * _clientQueue;
    struct Dispatcher { int (**x1)(); id x2; } * _deviceMotionDispatcher;
    bool  _disable2IMU;
    bool  _enableJBLThreshold;
    double  _firstAccessoryDMTime;
    double  _firstValidPoseTime;
    struct unique_ptr<CMHeadTrackingService, std::default_delete<CMHeadTrackingService>> { 
        struct __compressed_pair<CMHeadTrackingService *, std::default_delete<CMHeadTrackingService>> { 
            struct CMHeadTrackingService {} *__value_; 
        } __ptr_; 
    }  _headTrackingService;
    struct CMOQuaternion { 
        float elements[4]; 
    }  _headsetOrientationOverride;
    bool  _humanMotionLearningModelEnabled;
    int  _inEarStatus;
    bool  _inEarStatusGatingEnabled;
    unsigned short  _jitterBufferLevel;
    NSObject<OS_dispatch_source> * _jitterBufferLevelInitialUpdateTimer;
    int  _jitterBufferLevelNotificationToken;
    unsigned short  _jitterBufferLevelThreshold;
    double  _lastAccessoryDMTime;
    unsigned long long  _lastAccessoryTimestamp;
    float  _lastAngleBetweenCurrentBoresightToDefault;
    struct AudioAccessorySample { 
        struct { 
            struct CMOQuaternion { 
                float elements[4]; 
            } quaternion; 
            struct CMVector<float, 3UL> { 
                float elements[3]; 
            } rotationRate; 
            struct CMVector<float, 3UL> { 
                float elements[3]; 
            } biasCovariance; 
            struct CMVector<float, 3UL> { 
                float elements[3]; 
            } userAcceleration; 
            struct Status { 
                unsigned short bits; 
            } status; 
        } auxDM; 
        unsigned long long sensorTime; 
        double timestamp; 
        double arrivalTimestamp; 
        struct CMVector<float, 3UL> { 
            float elements[3]; 
        } filteredAcceleration; 
        float quiescentNoise; 
        int quiescentMode; 
        unsigned int sequenceNumber; 
        int sensorLocation; 
        int timeSyncStatus; 
        unsigned long long btcTimestamp; 
        double sampleLatency; 
    }  _lastAudioAccessorySample;
    double  _lastDistractedViewingEndTime;
    double  _lastDistractedViewingStartTime;
    double  _lastExitCTTime;
    unsigned long long  _lastFacePoseTimestampUs;
    double  _lastInBTZTime;
    unsigned long long  _lastSourceTimestampMicroSeconds;
    unsigned long long  _lastStateTimestamp;
    double  _lastTimesyncLostTime;
    int  _lastTrackingDisableRoute;
    double  _lidAngle;
    bool  _logForReplay;
    struct unique_ptr<CMSpatialLogger, std::default_delete<CMSpatialLogger>> { 
        struct __compressed_pair<CMSpatialLogger *, std::default_delete<CMSpatialLogger>> { 
            struct CMSpatialLogger {} *__value_; 
        } __ptr_; 
    }  _logger;
    NSString * _mcLogPath;
    CMMotionContextSession * _mcSession;
    double  _minQuiescentPeriodForBTZ;
    bool  _motionContextSessonEnabled;
    NSUserDefaults * _motionDefaults;
    struct unique_ptr<CLSettings, std::default_delete<CLSettings>> { 
        struct __compressed_pair<CLSettings *, std::default_delete<CLSettings>> { 
            struct CLSettings {} *__value_; 
        } __ptr_; 
    }  _motionSettings;
    int  _notify50HzPoseDecimator;
    bool  _overrideDefaultHeadsetOrientation;
    unsigned long long  _predictionIntervalMicroseconds;
    float  _prevAmbienceBedRoll;
    bool  _previousAuxMoving;
    int  _previousBTZState;
    bool  _previousCTBodyTurnState;
    bool  _previousCTState;
    bool  _previousHeadTurnState;
    bool  _previousKeepBoresightCentered;
    int  _previousMotionActivityType;
    bool  _previousSrcMoving;
    bool  _previousSteadyStatePedestrian;
    int  _previousTracking1IMU;
    bool  _previousTrackingEnabled;
    double  _printPoseTimer;
    struct CMOQuaternion { 
        float elements[4]; 
    }  _q_bf;
    bool  _returnDefaultPose;
    bool  _returnRandomPose;
    int  _scheme;
    double  _sessionStartTime;
    bool  _sitStandDetectorEnabled;
    bool  _started;
    bool  _startedJitterBufferLevelPolling;
    unsigned int  _totalAccessoryIMUSamples;
    unsigned int  _totalFacePoseAnchorSamples;
    unsigned int  _totalSourceIMUSamples;
    bool  _trackingEstimatesStagnated;
    struct UnTimesyncedAuxSampleHelper { 
        unsigned int totalUnsyncedSamples; 
        unsigned int totalUnsyncedOutlierSamples; 
        double auxAndSrcSensorTimeOffset; 
        struct CMFixedSizeQueue<double, 10UL> { 
            struct { 
                unsigned short fHead; 
                unsigned short fSize; 
            } fHeadAndSize; 
            unsigned int fCapacity; 
            BOOL fBuffer[8]; 
            struct CMQueueStorage<double, 10UL> { 
                BOOL buffer[72]; 
            } fStorage; 
        } auxAndSrcSensorTimeOffsetBuffer; 
    }  _unsyncedAuxHelper;
    bool  _useHeadToHeadsetTransformationEstimator;
    bool  _userSettingBypassAmbienceBedForE2ELatencyTesting;
    bool  _userSettingFwdPredictorEnabled;
    bool  _verboseLogging;
}

@property unsigned int accessoryIMUSampleRate;
@property bool alwaysNotify50HzPose;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct CMOQuaternion { float x1[4]; } headsetOrientationOverride;
@property (copy) NSString *mcLogPath;
@property bool overrideDefaultHeadsetOrientation;
@property float prevAmbienceBedRoll;
@property bool returnDefaultPose;
@property bool returnRandomPose;
@property (readonly) Class superclass;
@property unsigned int totalAccessoryIMUSamples;
@property unsigned int totalFacePoseAnchorSamples;
@property unsigned int totalSourceIMUSamples;

+ (bool)_isAvailable;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_createPoseFromListenerOrientation:(const struct ListenerOrientation { struct CMOQuaternion { float x_1_1_1[4]; } x1; unsigned long long x2; unsigned long long x3; bool x4; bool x5; }*)arg1 Pose:(id*)arg2;
- (int)_currentAudioListenerOrientation:(id*)arg1;
- (void)_disableLoggingForReplay;
- (void)_enableLoggingForReplayWithFilenamePrefix:(id)arg1 filePath:(id)arg2;
- (void)_feedAccessoryConfig:(const void*)arg1;
- (void)_feedAccessoryDeviceMotion:(const void*)arg1;
- (void)_feedAccessoryInEarStatus:(const int*)arg1;
- (void)_feedAdaptiveLatencyJitterBufferLevel;
- (void)_feedFacePose:(id)arg1 rotationMatrix:(id)arg2 timestamp:(double)arg3 error:(struct { float x1; bool x2; bool x3; int x4; double x5; }*)arg4;
- (void)_feedLidAngle:(double)arg1;
- (void)_feedPoseAnchor:(const struct Sample { double x1; struct { double x_2_1_1; int x_2_1_2; int x_2_1_3; struct { double x_4_2_1; double x_4_2_2; double x_4_2_3; double x_4_2_4; } x_2_1_4; struct { float x_5_2_1; float x_5_2_2; float x_5_2_3; } x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; unsigned int x_2_1_11; struct { float x_12_2_1; float x_12_2_2; float x_12_2_3; } x_2_1_12; struct { float x_13_2_1; float x_13_2_2; float x_13_2_3; } x_2_1_13; struct { float x_14_2_1; float x_14_2_2; float x_14_2_3; } x_2_1_14; } x2; }*)arg1 facePoseError:(struct { float x1; bool x2; bool x3; int x4; double x5; }*)arg2;
- (void)_feedPredictorEstimates;
- (void)_feedSourceDeviceIMU:(const struct Sample { double x1; struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_2_1_3; struct { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_2_1_4; int x_2_1_5; bool x_2_1_6; bool x_2_1_7; bool x_2_1_8; float x_2_1_9; bool x_2_1_10; bool x_2_1_11; int x_2_1_12; } x2; struct { float x_3_1_1; } x3; bool x4; unsigned int x5; unsigned char x6; struct Status { unsigned short x_7_1_1; } x7; float x8; }*)arg1;
- (unsigned long long)_getAuxSampleTimestamp:(const void*)arg1 currentTime:(double)arg2;
- (struct AudioAccessorySample { struct { struct CMOQuaternion { float x_1_2_1[4]; } x_1_1_1; struct CMVector<float, 3UL> { float x_2_2_1[3]; } x_1_1_2; struct CMVector<float, 3UL> { float x_3_2_1[3]; } x_1_1_3; struct CMVector<float, 3UL> { float x_4_2_1[3]; } x_1_1_4; struct Status { unsigned short x_5_2_1; } x_1_1_5; } x1; unsigned long long x2; double x3; double x4; struct CMVector<float, 3UL> { float x_5_1_1[3]; } x5; float x6; int x7; unsigned int x8; int x9; int x10; unsigned long long x11; double x12; })_getLastAudioAccessorySample;
- (id)_initWithOptions:(id)arg1;
- (void)_logEvent:(id)arg1;
- (int)_mapCMMediaSessionClientModeToRelDMClientMode:(long long)arg1;
- (void)_notifyClientHandler;
- (void)_reset;
- (void)_setConvergenceRateForBTZ:(float)arg1;
- (void)_setFixedTransforms:(const struct CMOQuaternion { float x1[4]; }*)arg1;
- (bool)_start;
- (void)_startDefaultsPreferenceUpdater;
- (void)_startHeadTracking;
- (void)_startJitterBufferLevelMonitor;
- (void)_startJitterBufferLevelRetryTimer;
- (bool)_startPoseUpdatesToQueue:(id)arg1 andHandler:(id /* block */)arg2;
- (void)_stop;
- (void)_stopDefaultsPreferenceUpdater;
- (void)_stopHeadTracking;
- (void)_stopJitterBufferLevelMonitor;
- (void)_stopJitterBufferLevelRetryTimer;
- (void)_triggerUserInteractedWithDeviceEvent;
- (void)_updateAnchorIntervalSettings;
- (void)_updateClientMode:(long long)arg1;
- (void)_updateMinQuiescentPeriodForBTZ;
- (void)_updateTrackingSchemeSettings;
- (void)_updateUseFwdPredictionUserSettings;
- (void)_updateUseHeadToHeadsetTransformationEstimator;
- (void)_updateUserSettings;
- (unsigned int)accessoryIMUSampleRate;
- (bool)alwaysNotify50HzPose;
- (void)dealloc;
- (void)feedPoseAnchorWithAttitude:(struct { double x1; double x2; double x3; double x4; })arg1 position:(struct CMVector<float, 3UL> { float x1[3]; })arg2 timestampUs:(unsigned long long)arg3;
- (struct CMOQuaternion { float x1[4]; })headsetOrientationOverride;
- (id)init;
- (id)mcLogPath;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)overrideDefaultHeadsetOrientation;
- (float)prevAmbienceBedRoll;
- (bool)returnDefaultPose;
- (bool)returnRandomPose;
- (void)setAccessoryIMUSampleRate:(unsigned int)arg1;
- (void)setAlwaysNotify50HzPose:(bool)arg1;
- (void)setHeadsetOrientationOverride:(struct CMOQuaternion { float x1[4]; })arg1;
- (void)setMcLogPath:(id)arg1;
- (void)setOverrideDefaultHeadsetOrientation:(bool)arg1;
- (void)setPrevAmbienceBedRoll:(float)arg1;
- (void)setReturnDefaultPose:(bool)arg1;
- (void)setReturnRandomPose:(bool)arg1;
- (void)setTotalAccessoryIMUSamples:(unsigned int)arg1;
- (void)setTotalFacePoseAnchorSamples:(unsigned int)arg1;
- (void)setTotalSourceIMUSamples:(unsigned int)arg1;
- (unsigned int)totalAccessoryIMUSamples;
- (unsigned int)totalFacePoseAnchorSamples;
- (unsigned int)totalSourceIMUSamples;

@end
