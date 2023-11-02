
@interface ARODTHandleManager : NSObject {
    struct CV3DMLModel { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct CV3DMLModelData {} *x2; } * _mlModel;
    unsigned long long  _odtCounter;
    struct CV3DODTContext { } * _odtHandle;
    NSObject<OS_dispatch_semaphore> * _odtHandleSemaphore;
    unsigned long long  _odtPowerUsage;
    NSDictionary * _options;
}

@property (nonatomic, readonly) bool continuousDetection;
@property (nonatomic, readonly) bool deterministicMode;
@property (nonatomic, readonly) long long maximumNumberOfTrackedImages;

+ (int)_calibrationDataFromImageData:(id)arg1 pCalibrationData:(id*)arg2;
+ (void)accumulateReferenceImageErrorsForResult:(int)arg1 refImage:(id)arg2 objectID:(unsigned long long)arg3 pReferenceImageMap:(id*)arg4 pFailedReferenceImageNames:(id*)arg5 pUserErrorType:(long long*)arg6;
+ (long long)actualNumberOfImagesTracked:(long long)arg1;
+ (id)handleAccumulatedErrorType:(long long)arg1 failedReferenceImageNames:(id)arg2;
+ (id)suggestionInternalError;
+ (id)suggestionInvalidFeature;
+ (id)suggestionInvalidImage;
+ (int)verifyReferenceImage:(id)arg1;

- (void).cxx_destruct;
- (int)addReferenceImage:(id)arg1 tracking:(bool)arg2 pObjectID:(unsigned long long*)arg3;
- (int)addReferenceObject:(id)arg1 tracking:(bool)arg2 pObjectID:(unsigned long long*)arg3;
- (bool)continuousDetection;
- (void)dealloc;
- (int)detectReferenceObjectsForImageData:(id)arg1 worldTrackingPose:(id)arg2 imageContext:(const void*)arg3 pResultArray:(id*)arg4;
- (bool)deterministicMode;
- (id)init;
- (id)initWithDeterministicMode:(bool)arg1;
- (id)initWithMaximumNumberOfTrackedImages:(long long)arg1;
- (id)initWithMaximumNumberOfTrackedImages:(long long)arg1 continuousDetection:(bool)arg2 deterministicMode:(bool)arg3;
- (id)initWithRegionProposalModelAndDeterministicMode:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (long long)maximumNumberOfTrackedImages;
- (int)predictPlanarObjectsAtTimestamp:(double)arg1 worldTrackingPose:(id)arg2 timeBudget:(double)arg3 pResultArray:(id*)arg4;
- (void)releaseODTHandle;
- (int)trackPlanarObjectAndEstimateScaleForImageData:(id)arg1 worldTrackingPose:(id)arg2 imageContext:(const void*)arg3 timeBudget:(double)arg4 pResultArray:(id*)arg5;
- (int)trackPlanarObjectForImageData:(id)arg1 imageContext:(const void*)arg2 timeBudget:(double)arg3 pResultArray:(id*)arg4;
- (void)updatePowerUsage:(unsigned long long)arg1;
- (int)waitForAllObjectsAddToFinish;

@end
