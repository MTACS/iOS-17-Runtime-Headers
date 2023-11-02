
@interface ARWorldTrackingTechnique : ARImageBasedTechnique <ARSceneReconstructionDelegate> {
    bool  _allowPoseGraphUpdates;
    NSMutableSet * _anchorsReceived;
    <MTLFunction> * _annotateDepthDataKernelFunction;
    ARWorldTrackingPoseData * _cachedPoseData;
    struct __CVPixelBufferPool { } * _confidence8BufferPool;
    unsigned long long  _currentVIOMapSize;
    struct __CVPixelBufferPool { } * _depth16grayBufferPool;
    bool  _didClearMap;
    ARWorldTrackingErrorData * _errorData;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _extrinsicsToWideSensor;
    bool  _hasLoadedSurfaceData;
    bool  _hasQualityKeyframe;
    NSString * _lastCameraType;
    struct map<long, double, std::less<long>, std::allocator<std::pair<const long, double>>> { 
        struct __tree<std::__value_type<long, double>, std::__map_value_compare<long, std::__value_type<long, double>, std::less<long>>, std::allocator<std::__value_type<long, double>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, double>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, double>, std::less<long>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _lastErrorLogTimestamp;
    double  _lastMajorRelocalizationTimestamp;
    double  _lastPoseMetaDataTimestamp;
    double  _lastPoseTrackingMapTimestamp;
    double  _lastQualityKeyframeTimestamp;
    double  _lastRelocalizationTimestamp;
    NSMutableArray * _latestSpatialMappingData;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _latestSpatialMappingDataLock;
    NSMutableDictionary * _meshChunkIdentifiersCurrentlyBeingProcessed;
    NSMutableDictionary * _meshChunksWaitingForSemantics;
    double  _minVergenceAngleCosine;
    ARWorldTrackingOptions * _mutableOptions;
    unsigned long long  _numberOfCameraSwitches;
    NSHashTable * _observers;
    NSObject<OS_dispatch_semaphore> * _observersSemaphore;
    double  _originTimestamp;
    NSMutableSet * _participantAnchors;
    bool  _participantAnchorsEnabled;
    struct shared_ptr<PlaneDetectionSession> { 
        struct PlaneDetectionSession {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _planeDetectionSession;
    struct __CVPixelBufferPool { } * _poolForConfidenceAnnotatedDepth;
    struct __CVPixelBufferPool { } * _poolForSemanticsAnnotatedDepth;
    struct __CVPixelBufferPool { } * _poolForUncertaintyAnnotatedDepth;
    struct __CVPixelBufferPool { } * _poolForUncertaintyMaskedSemanticsDepth;
    struct __CVPixelBufferPool { } * _postProcessedDepthConfidencePool;
    struct CV3DPosePredictionContext { } * _predictorHandle;
    int  _previousKeyframeCount;
    struct shared_ptr<RaycastSession> { 
        struct RaycastSession {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _raycastSession;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _raycastSessionLock;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _reconstructionFrameBundleToWorld;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _referenceOriginTransform;
    int  _reinitializationAttempts;
    long long  _reinitializationAttemptsAtInitialization;
    bool  _relocalizingAfterSensorDataDrop;
    NSObject<OS_dispatch_queue> * _resultDataQueue;
    double  _resultLatency;
    NSObject<OS_dispatch_semaphore> * _resultSemaphore;
    ARSceneReconstructionHandler * _sceneReconstructionHandler;
    long long  _sessionHandleState;
    NSObject<OS_dispatch_semaphore> * _sessionHandleStateSemaphore;
    <MTLDevice> * _sharedMetalDevice;
    struct CV3DSLAMSession { } * _slamSessionHandle;
    <MTLCommandQueue> * _spatialMappingCommandQueue;
    NSObject<OS_dispatch_queue> * _spatialMappingObjectRefinementQueue;
    NSMutableDictionary * _spatialMappingPointClouds;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _spatialMappingPointCloudsLock;
    NSMutableDictionary * _spatialMappingResultDataWaitingForSemantics;
    struct PlaneDetectionConfiguration { 
        ARWorldTrackingOptions *options; 
        NSNumber *detectionCountUserDefaultValue; 
        NSNumber *minVergenceAngleDegreesUserDefaultValue; 
        id lineFeaturesAlwaysOnUserDefaultValue; 
        bool deterministicMode; 
        NSString *detectionPolicyString; 
    }  _surfaceDetectionParametrization;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _surfaceDetectionSessionLock;
    unsigned long long  _techniqueIndex;
    ARTrackedRaycastPostProcessor * _trackedRaycastPostProcessor;
    bool  _useFixedIntrinsics;
    unsigned long long  _vioSessionIdentifier;
    unsigned int  _visualizationCameraID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _volumeSamplingLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } extrinsicsToWideSensor;
@property (nonatomic, readonly) bool hasLoadedSurfaceData;
@property bool hasQualityKeyframe;
@property (readonly) unsigned long long hash;
@property (retain) ARWorldTrackingOptions *mutableOptions;
@property (nonatomic, readonly, copy) ARWorldTrackingOptions *options;
@property (nonatomic) struct shared_ptr<PlaneDetectionSession> { struct PlaneDetectionSession {} *x1; struct __shared_weak_count {} *x2; } planeDetectionSession;
@property (nonatomic) struct CV3DPosePredictionContext { }*predictorHandle;
@property (nonatomic) struct shared_ptr<RaycastSession> { struct RaycastSession {} *x1; struct __shared_weak_count {} *x2; } raycastSession;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } reconstructionFrameBundleToWorld;
@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } referenceOriginTransform;
@property (nonatomic, readonly) ARSceneReconstructionHandler *sceneReconstructionHandler;
@property (nonatomic) struct CV3DSLAMSession { }*slamSessionHandle;
@property (readonly) Class superclass;
@property unsigned long long techniqueIndex;
@property (retain) ARTrackedRaycastPostProcessor *trackedRaycastPostProcessor;
@property (readonly) unsigned long long vioSessionIdentifier;

+ (bool)isSupported;
+ (bool)producesResultDataForAnchorOfClass:(Class)arg1;
+ (bool)supportsVideoResolution:(struct CGSize { double x1; double x2; })arg1 forDeviceType:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_configureMeshPlaneHarmonization;
- (void)_didFailWithError:(id)arg1;
- (id)_featurePointDataFromSLAMState:(const struct CV3DSLAMStateContext { }*)arg1;
- (id)_fullDescription;
- (void)_handleCV3DError:(struct __CFError { }*)arg1 withDescription:(id)arg2 failTechnique:(bool)arg3;
- (void)_handlePlaneDetectionCallback:(struct CV3DPlaneDetectionPlaneList { }*)arg1;
- (void)_handleRaycastResultCallback:(struct CV3DRaycastResultMap { }*)arg1;
- (void)_handleSLAMError:(id)arg1;
- (void)_handleSingleShotPlaneDetectionCallback:(struct CV3DPlaneDetectionSingleShotPlaneList { }*)arg1;
- (long long)_initializeSLAMAndPredictorHandle;
- (void)_initializeSurfaceDetection:(const struct PlaneDetectionConfiguration { id x1; id x2; id x3; id x4; bool x5; id x6; }*)arg1;
- (long long)_mappingStatusFromMapSize:(int)arg1 keyframeQuality:(int)arg2 isTrackingMap:(bool)arg3 timestamp:(double)arg4;
- (void)_pushWTResultDataForTimestamp:(double)arg1;
- (void)_reportCollaborationData:(id)arg1 type:(unsigned char)arg2 metadata:(const void*)arg3;
- (void)_resetSurfaceDetection;
- (unsigned int)_trackingCameraID:(struct CV3DSLAMStateContext { }*)arg1;
- (int)_updatePoseData:(id)arg1 forTimeStamp:(double)arg2 updateTrackingState:(bool)arg3;
- (void)_updateTrackingState:(id)arg1 slamState:(const struct CV3DSLAMStateContext { }*)arg2;
- (void)_updateVIOLineDetectionPolicy;
- (void)addObserver:(id)arg1;
- (void)addReferenceAnchors:(id)arg1;
- (void)annotateDepth:(id)arg1 withSemantics:(id)arg2 toTargetSemanticsImage:(struct __CVBuffer { }*)arg3 targetConfidenceBuffer:(struct __CVBuffer { }*)arg4 targetUncertaintyBuffer:(struct __CVBuffer { }*)arg5;
- (void)annotateDepth:(id)arg1 withSemantics:(id)arg2 toTargetSemanticsImage:(struct __CVBuffer { }*)arg3 targetConfidenceBuffer:(struct __CVBuffer { }*)arg4 targetUncertaintyBuffer:(struct __CVBuffer { }*)arg5 useGpu:(bool)arg6;
- (long long)captureBehavior;
- (void)clearMap;
- (void)dealloc;
- (bool)deterministicMode;
- (void)didReceiveKeyframesUpdatedCallback:(struct CV3DReconKeyframeList { }*)arg1;
- (void)didUpdateRaycastResult:(struct CV3DHitTestResults { struct CV3DHitTestResult {} *x1; unsigned long long x2; }*)arg1;
- (int)extentCheckFromConfiguration;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })extrinsicsToWideSensor;
- (id)getObservers;
- (bool)hasLoadedSurfaceData;
- (bool)hasQualityKeyframe;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (void)invalidateAllRaycasts;
- (bool)isEqual:(id)arg1;
- (bool)isMultiSessionMode;
- (void)loadSurfaceData:(id)arg1;
- (void)mergeResultData:(id)arg1 intoData:(id)arg2 context:(id)arg3;
- (id)mutableOptions;
- (void)onMetadataCallback:(struct CV3DSLAMStateContext { }*)arg1;
- (id)options;
- (struct shared_ptr<PlaneDetectionSession> { struct PlaneDetectionSession {} *x1; struct __shared_weak_count {} *x2; })planeDetectionSession;
- (id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (struct CV3DPosePredictionContext { }*)predictorHandle;
- (void)prepare:(bool)arg1;
- (void)prepareResultData:(id)arg1 forContext:(id)arg2;
- (id)processData:(id)arg1;
- (void)pushCollaborationData:(id)arg1;
- (void)pushToHitTestingDepth:(id)arg1 pose:(id)arg2;
- (void)pushToSceneUnderstandingDepth:(id)arg1 segmentation:(id)arg2 pose:(id)arg3;
- (void)pushToSceneUnderstandingSegmentation:(id)arg1 pose:(id)arg2;
- (bool)querySceneReconstructionOccupancyWithPoints:(id)arg1 callback:(id /* block */)arg2;
- (id)raycast:(id)arg1;
- (id)raycastResultFrom:(struct CV3DHitTestResult { struct __CFUUID {} *x1; double x2[16]; int x3; int x4; int x5; struct __CFUUID {} *x6; }*)arg1;
- (struct shared_ptr<RaycastSession> { struct RaycastSession {} *x1; struct __shared_weak_count {} *x2; })raycastSession;
- (bool)reconfigurableFrom:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })reconstructionFrameBundleToWorld;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })referenceOriginTransform;
- (void)removeObserver:(id)arg1;
- (void)removePlanesByUUIDs:(id)arg1;
- (void)removeReferenceAnchors:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;
- (void)resetSceneReconstruction;
- (id)resultDataClasses;
- (id)sceneReconstructionHandler;
- (void)sceneReconstructionHandler:(id)arg1 didFailWithError:(id)arg2;
- (void)sceneReconstructionHandler:(id)arg1 didOutputKeyframeList:(struct CV3DReconKeyframeList { }*)arg2 withTimestamp:(double)arg3;
- (void)sceneReconstructionHandler:(id)arg1 didOutputMeshList:(struct CV3DReconMeshList { }*)arg2 withTimestamp:(double)arg3;
- (id)serializeSurfaceData;
- (id)serializeWorldMapWithReferenceOrigin:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setExtrinsicsToWideSensor:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setHasQualityKeyframe:(bool)arg1;
- (void)setMutableOptions:(id)arg1;
- (void)setPlaneDetectionSession:(struct shared_ptr<PlaneDetectionSession> { struct PlaneDetectionSession {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setPredictorHandle:(struct CV3DPosePredictionContext { }*)arg1;
- (void)setRaycastSession:(struct shared_ptr<RaycastSession> { struct RaycastSession {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setReconstructionFrameBundleToWorld:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setReferenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setSlamSessionHandle:(struct CV3DSLAMSession { }*)arg1;
- (void)setTechniqueIndex:(unsigned long long)arg1;
- (void)setTrackedRaycastPostProcessor:(id)arg1;
- (void)setupSceneReconstruction;
- (struct CV3DSLAMSession { }*)slamSessionHandle;
- (void)stopAllRaycasts;
- (void)stopRaycast:(id)arg1;
- (unsigned long long)techniqueIndex;
- (id)trackedRaycast:(id)arg1 updateHandler:(id /* block */)arg2;
- (id)trackedRaycastPostProcessor;
- (void)updateSurfaceDetectionConfiguration;
- (long long)vioHandleState;
- (unsigned long long)vioSessionIdentifier;

@end
