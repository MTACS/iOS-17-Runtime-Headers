
@interface ARFaceTrackingInternalTechnique : ARImageBasedTechnique {
    NSObject<OS_dispatch_semaphore> * _detectionSemaphore;
    bool  _deterministicMode;
    ARFaceTrackingManager * _faceTrackingManger;
    long long  _maximumNumberOfTrackedFaces;
    NSObject<OS_dispatch_queue> * _processDataQueue;
}

@property (nonatomic, readonly) long long maximumNumberOfTrackedFaces;

+ (bool)isSupported;

- (void).cxx_destruct;
- (void)_enqueueImageForFaceTrackingNonBlocking:(id)arg1;
- (void)_processImageDataInBackgound:(id)arg1;
- (long long)captureBehavior;
- (id)init;
- (id)initWithMaximumNumberOfTrackedFaces:(long long)arg1 options:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)maximumNumberOfTrackedFaces;
- (void)prepare:(bool)arg1;
- (id)processData:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;
- (id)resultDataClasses;

@end
