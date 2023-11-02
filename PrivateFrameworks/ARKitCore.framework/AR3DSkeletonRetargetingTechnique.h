
@interface AR3DSkeletonRetargetingTechnique : ARTechnique {
    ABPKRetargeting * _abpkRetargeting;
    ARCoreRESkeletonResults * _latestResults;
    NSObject<OS_dispatch_semaphore> * _resultSemaphore;
}

@property (nonatomic, retain) ARCoreRESkeletonResults *latestResults;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *resultSemaphore;

+ (bool)producesResultDataForAnchorOfClass:(Class)arg1;

- (void).cxx_destruct;
- (id)_retargetSkeleton:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)latestResults;
- (void)prepare:(bool)arg1;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (id)resultSemaphore;
- (void)setLatestResults:(id)arg1;
- (void)setResultSemaphore:(id)arg1;

@end
