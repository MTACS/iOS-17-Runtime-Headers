
@interface ARImageDetectionTechnique : ARImageBasedTechnique {
    bool  _continuousDetection;
    ARWorldTrackingPoseData * _currentWorldTrackingPose;
    NSObject<OS_dispatch_semaphore> * _dataSemaphore;
    NSObject<OS_dispatch_semaphore> * _detectionSemaphore;
    bool  _deterministicMode;
    bool  _enableAutomaticImageScaleEstimation;
    bool  _finishedLoadingImages;
    NSObject<OS_dispatch_semaphore> * _loadingSemaphore;
    long long  _maximumNumberOfTrackedImages;
    bool  _needsWorldTrackingPoseData;
    ARODTHandleManager * _odtTHandleManger;
    struct shared_ptr<arkit::KeyMapBuffer<const void *, std::vector<unsigned char>>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _poseBuffer;
    NSObject<OS_dispatch_queue> * _processDataQueue;
    ARImageDetectionResultData * _referenceImageData;
    NSDictionary * _referenceImageMap;
    NSArray * _referenceImages;
    bool  _tracking;
}

@property (retain) ARWorldTrackingPoseData *currentWorldTrackingPose;
@property (nonatomic) bool enableAutomaticImageScaleEstimation;
@property (nonatomic, readonly) bool finishedLoadingImages;
@property (readonly) ARODTHandleManager *odtTHandleManger;
@property (readonly) NSDictionary *referenceImageMap;

+ (bool)_redetectionRequiredForContext:(id)arg1;
+ (bool)producesResultDataForAnchorOfClass:(Class)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_addReferenceImagesAppleCV3D;
- (void)_enqueueImageForTrackingNonBlocking:(id)arg1;
- (void)_enqueueImageForTrackingSynced:(id)arg1;
- (void)_loadReferenceImages;
- (void)_loadReferenceImagesInBackground;
- (id)_trackImagesWithImageData:(id)arg1 timeBudget:(double)arg2;
- (long long)captureBehavior;
- (id)currentWorldTrackingPose;
- (bool)deterministicMode;
- (bool)enableAutomaticImageScaleEstimation;
- (bool)finishedLoadingImages;
- (id)initWithReferenceImages:(id)arg1;
- (id)initWithReferenceImages:(id)arg1 maximumNumberOfTrackedImages:(long long)arg2;
- (id)initWithReferenceImages:(id)arg1 maximumNumberOfTrackedImages:(long long)arg2 continuousDetection:(bool)arg3 processingQueue:(id)arg4;
- (id)initWithReferenceImages:(id)arg1 maximumNumberOfTrackedImages:(long long)arg2 processingQueue:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)odtTHandleManger;
- (id)predictAtTimeStamp:(double)arg1 timeBudget:(double)arg2 predictedWorldTrackingPose:(id)arg3;
- (void)prepare:(bool)arg1;
- (id)processData:(id)arg1;
- (id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3;
- (id)referenceImageMap;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;
- (void)setCurrentWorldTrackingPose:(id)arg1;
- (void)setEnableAutomaticImageScaleEstimation:(bool)arg1;
- (void)setPowerUsage:(unsigned long long)arg1;
- (bool)syncWithProcessedImage;

@end
