
@interface ARGeoTrackingTechniqueState : NSObject {
    VLLocalizer * _VLHandle;
    ARGeoTrackingConsensusAndAverageFilter * _consensusAverageFilter;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _deviceMotionBufferLock;
    ARCircularArray * _deviceMotionCircularBuffer;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _enuFromVIO;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _enuFromVIOLock;
    ARLocationData * _enuOrigin;
    long long  _failureLogCount;
    long long  _failureReasons;
    double  _firstRequestResultTimestamp;
    double  _firstVLExecutionAttemptTimestamp;
    ARGeoTrackingGradualCorrectionFilter * _gradualCorrectionFilter;
    bool  _hasReturnedAvailabilityCheck;
    bool  _hasReturnedLocalization;
    bool  _hasStartedAvailabilityCheck;
    bool  _hasStartedLocalization;
    ARLocationData * _lastCLLocation;
    ARDeviceOrientationData * _lastCMDeviceMotion;
    double  _lastGradualCorrectionTime;
    ARLocationData * _lastLocationProcessedForFusion;
    long long  _lastLoggedFailureReasons;
    void _lastLoggedVioPosition;
    double  _lastLoggedVioTimestamp;
    double  _lastPoseOriginTimestamp;
    double  _lastVLExecutionAttemptTimestamp;
    double  _lastVLExecutionTimestamp;
    int  _poseOkCount;
    long long  _resetCount;
    NSMutableArray * _resultDatas;
    long long  _trackingAccuracy;
    long long  _trackingState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _vioPoseBufferLock;
    ARCircularArray * _vioPoseCircularBuffer;
}

@property (nonatomic, retain) VLLocalizer *VLHandle;
@property (nonatomic, retain) ARGeoTrackingConsensusAndAverageFilter *consensusAverageFilter;
@property (nonatomic, retain) ARCircularArray *deviceMotionCircularBuffer;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } enuFromVIO;
@property (retain) ARLocationData *enuOrigin;
@property (nonatomic) long long failureLogCount;
@property long long failureReasons;
@property (nonatomic) double firstRequestResultTimestamp;
@property (nonatomic) double firstVLExecutionAttemptTimestamp;
@property (nonatomic, retain) ARGeoTrackingGradualCorrectionFilter *gradualCorrectionFilter;
@property (nonatomic) bool hasReturnedAvailabilityCheck;
@property (nonatomic) bool hasReturnedLocalization;
@property (nonatomic) bool hasStartedAvailabilityCheck;
@property (nonatomic) bool hasStartedLocalization;
@property (retain) ARLocationData *lastCLLocation;
@property (retain) ARDeviceOrientationData *lastCMDeviceMotion;
@property (nonatomic) double lastGradualCorrectionTime;
@property (nonatomic, retain) ARLocationData *lastLocationProcessedForFusion;
@property (nonatomic) long long lastLoggedFailureReasons;
@property (nonatomic) void lastLoggedVioPosition;
@property (nonatomic) double lastLoggedVioTimestamp;
@property (nonatomic) double lastPoseOriginTimestamp;
@property (nonatomic) double lastVLExecutionAttemptTimestamp;
@property double lastVLExecutionTimestamp;
@property (nonatomic) int poseOkCount;
@property (nonatomic) long long resetCount;
@property (nonatomic, retain) NSMutableArray *resultDatas;
@property long long trackingAccuracy;
@property long long trackingState;
@property (nonatomic, retain) ARCircularArray *vioPoseCircularBuffer;

+ (id)_findClosestDataToTimestamp:(double)arg1 inBuffer:(id)arg2;

- (void).cxx_destruct;
- (id)VLHandle;
- (bool)VLHasExecuted;
- (void)addDeviceMotionData:(id)arg1;
- (void)addFailureReason:(long long)arg1;
- (void)addVioPoseData:(id)arg1;
- (id)consensusAverageFilter;
- (id)deviceMotionCircularBuffer;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })enuFromVIO;
- (id)enuOrigin;
- (long long)failureLogCount;
- (long long)failureReasons;
- (id)findClosestDeviceMotionDataToTimestamp:(double)arg1;
- (id)findClosestVioPoseToTimestamp:(double)arg1;
- (double)firstRequestResultTimestamp;
- (double)firstVLExecutionAttemptTimestamp;
- (id)gradualCorrectionFilter;
- (bool)hasReturnedAvailabilityCheck;
- (bool)hasReturnedLocalization;
- (bool)hasStartedAvailabilityCheck;
- (bool)hasStartedLocalization;
- (id)initWithResetCount:(long long)arg1;
- (id)lastCLLocation;
- (id)lastCMDeviceMotion;
- (double)lastGradualCorrectionTime;
- (id)lastLocationProcessedForFusion;
- (long long)lastLoggedFailureReasons;
- (void)lastLoggedVioPosition;
- (double)lastLoggedVioTimestamp;
- (double)lastPoseOriginTimestamp;
- (double)lastVLExecutionAttemptTimestamp;
- (double)lastVLExecutionTimestamp;
- (int)poseOkCount;
- (void)removeFailureReason:(long long)arg1;
- (long long)resetCount;
- (id)resultDatas;
- (void)setConsensusAverageFilter:(id)arg1;
- (void)setDeviceMotionCircularBuffer:(id)arg1;
- (void)setEnuFromVIO:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setEnuFromVIORotation:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setEnuFromVIOTranslation;
- (void)setEnuOrigin:(id)arg1;
- (void)setFailureLogCount:(long long)arg1;
- (void)setFailureReasons:(long long)arg1;
- (void)setFirstRequestResultTimestamp:(double)arg1;
- (void)setFirstVLExecutionAttemptTimestamp:(double)arg1;
- (void)setGradualCorrectionFilter:(id)arg1;
- (void)setHasReturnedAvailabilityCheck:(bool)arg1;
- (void)setHasReturnedLocalization:(bool)arg1;
- (void)setHasStartedAvailabilityCheck:(bool)arg1;
- (void)setHasStartedLocalization:(bool)arg1;
- (void)setLastCLLocation:(id)arg1;
- (void)setLastCMDeviceMotion:(id)arg1;
- (void)setLastGradualCorrectionTime:(double)arg1;
- (void)setLastLocationProcessedForFusion:(id)arg1;
- (void)setLastLoggedFailureReasons:(long long)arg1;
- (void)setLastLoggedVioPosition;
- (void)setLastLoggedVioTimestamp:(double)arg1;
- (void)setLastPoseOriginTimestamp:(double)arg1;
- (void)setLastVLExecutionAttemptTimestamp:(double)arg1;
- (void)setLastVLExecutionTimestamp:(double)arg1;
- (void)setPoseOkCount:(int)arg1;
- (void)setResetCount:(long long)arg1;
- (void)setResultDatas:(id)arg1;
- (void)setTrackingAccuracy:(long long)arg1;
- (void)setTrackingState:(long long)arg1;
- (void)setVLHandle:(id)arg1;
- (void)setVioPoseCircularBuffer:(id)arg1;
- (long long)trackingAccuracy;
- (long long)trackingState;
- (id)vioPoseCircularBuffer;

@end
