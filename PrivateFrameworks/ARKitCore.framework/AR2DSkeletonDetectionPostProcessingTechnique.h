
@interface AR2DSkeletonDetectionPostProcessingTechnique : ARImageBasedTechnique {
    ABPK2DDetectionResult * _abpkPrevious3DSkeleton;
    bool  _deterministic;
    double  _extrapolationTime;
    ABPK2DDetectionPostprocess * _postprocess2d;
    NSObject<OS_dispatch_semaphore> * _previous3DSkeletonSemaphore;
    NSObject<OS_dispatch_queue> * _processingQueue;
    bool  _shouldPush3DSupportSkeleton;
    bool  _use3DSupportSkeletonForExtrapolation;
}

@property (nonatomic, readonly) ABPK2DDetectionResult *abpkPrevious3DSkeleton;

- (void).cxx_destruct;
- (void)_process2DSkeletonRawEspressoResultInBackground:(id)arg1;
- (id)abpkPrevious3DSkeleton;
- (void)prepare:(bool)arg1;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (double)requiredTimeInterval;

@end
