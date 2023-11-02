
@interface ARGeoTrackingTechnique : ARTechnique <ARGeoTrackingTechniqueProtocol> {
    bool  _VLPoseEstimationExecuting;
    VLTraceRecorder * _VLTraceRecorder;
    GEOApplicationAuditToken * _auditToken;
    bool  _deterministic;
    CLSimulationManager * _locationSimulationManager;
    double  _maxHorizontalAccuracy;
    double  _posteriorVisualLocalizationCallInterval;
    long long  _requestResultDataAtTimestampCallCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _resetLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _resultLock;
    ARGeoTrackingTechniqueState * _state;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _statusLock;
    unsigned long long  _supportEnablementOptions;
    bool  _useCoreLocationFusion;
    bool  _useCoreMotionFusion;
    bool  _useGradualCorrection;
    bool  _useVLTraceRecorder;
    double  _visualLocalizationCallInterval;
    double  _visualLocalizationCallIntervalTimeThreshold;
    NSObject<OS_dispatch_queue> * _visualLocalizationQueue;
    bool  _visualLocalizationUpdatesRequested;
}

@property bool VLPoseEstimationExecuting;
@property (retain) VLTraceRecorder *VLTraceRecorder;
@property double bonusLatency;
@property <ARTechniqueDelegate> *delegate;
@property (nonatomic, retain) CLSimulationManager *locationSimulationManager;
@property double posteriorVisualLocalizationCallInterval;
@property unsigned long long powerUsage;
@property (retain) <ARTechniqueForwardingStrategy> *splitTechniqueFowardingStrategy;
@property (retain) NSArray *splitTechniques;
@property unsigned long long supportEnablementOptions;
@property (readonly) NSNumber *traceKey;
@property double visualLocalizationCallInterval;
@property double visualLocalizationCallIntervalTimeThreshold;
@property bool visualLocalizationUpdatesRequested;

+ (long long)getFailureReasonFromVLError:(long long)arg1;
+ (double)getHeadingForEnuFromCam:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (bool)isCameraUp:(float)arg1;
+ (bool)isSupported;
+ (bool)isSupportedWithOptions:(unsigned long long)arg1;
+ (bool)producesResultDataForAnchorOfClass:(Class)arg1;

- (void).cxx_destruct;
- (bool)VLPoseEstimationExecuting;
- (id)VLTraceRecorder;
- (void)_callVLWithHandle:(void *)arg1 pixelBuffer:(void *)arg2 deviceLocation:(void *)arg3 heading:(void *)arg4 inputGravity:(void *)arg5 vioTransform:(void *)arg6 cameraIntrinsics:(void *)arg7 radialDistortion:(void *)arg8 exposureTargetOffset:(void *)arg9 timestamp:(void *)arg10 vlDeterminismSemaphore:(void *)arg11 completionHandler:(void *)arg12; // needs 12 arg types, found 10: id, struct __CVBuffer { }*, id, struct { double x1; double x2; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }, double, double, id, id /* block */
- (void)_estimateEnuFromVioFromCLCM:(id)arg1;
- (void)_estimatePose:(id)arg1 pose:(id)arg2;
- (long long)_getHighestPriorityFailureWithTechniqueStateObject:(id)arg1;
- (void)_logVioTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 withTimestamp:(double)arg2 withSuffix:(const char *)arg3;
- (void)_setTrackingState:(long long)arg1 techniqueStateObject:(id)arg2;
- (void)_simulateReplayLocationUpdates:(id)arg1;
- (void)_updateVLStateData:(double)arg1;
- (long long)captureBehavior;
- (void)dealloc;
- (void)getLocationFromWorldPosition:(void *)arg1 error:(void *)arg2; // needs 2 arg types, found 1: id*
- (id)init;
- (id)initWithAuditToken:(id)arg1;
- (id)locationSimulationManager;
- (double)posteriorVisualLocalizationCallInterval;
- (void)prepare:(bool)arg1;
- (id)processData:(id)arg1;
- (bool)reconfigurableFrom:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (id)resultDataClasses;
- (void)setLocationSimulationManager:(id)arg1;
- (void)setPosteriorVisualLocalizationCallInterval:(double)arg1;
- (void)setSupportEnablementOptions:(unsigned long long)arg1;
- (void)setVLPoseEstimationExecuting:(bool)arg1;
- (void)setVLTraceRecorder:(id)arg1;
- (void)setVisualLocalizationCallInterval:(double)arg1;
- (void)setVisualLocalizationCallIntervalTimeThreshold:(double)arg1;
- (void)setVisualLocalizationUpdatesRequested:(bool)arg1;
- (unsigned long long)supportEnablementOptions;
- (double)visualLocalizationCallInterval;
- (double)visualLocalizationCallIntervalTimeThreshold;
- (bool)visualLocalizationUpdatesRequested;

@end
