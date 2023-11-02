
@interface ABPKAlgOutput : NSObject {
    ABPKAlgorithmState * _algState;
    ABPK2dSkeleton * _detection2dSkeletonABPK;
    ABPKSkeleton * _liftingSkeletonABPK;
    ABPK2dSkeleton * _rawDetection2dSkeletonABPK;
    NSMutableArray * _rawDetection2dSkeletonABPKArray;
    ABPK2dSkeleton * _registered2dSkeletonABPK;
    ABPKSkeleton * _retargetedSkeletonABPK;
}

@property (retain) ABPKAlgorithmState *algState;
@property (retain) ABPK2dSkeleton *detection2dSkeletonABPK;
@property (retain) ABPKSkeleton *liftingSkeletonABPK;
@property (retain) ABPK2dSkeleton *rawDetection2dSkeletonABPK;
@property (retain) NSMutableArray *rawDetection2dSkeletonABPKArray;
@property (retain) ABPK2dSkeleton *registered2dSkeletonABPK;
@property (retain) ABPKSkeleton *retargetedSkeletonABPK;

- (void).cxx_destruct;
- (id)algState;
- (id)detection2dSkeletonABPK;
- (id)initWithConfig:(id)arg1;
- (id)liftingSkeletonABPK;
- (id)rawDetection2dSkeletonABPK;
- (id)rawDetection2dSkeletonABPKArray;
- (id)registered2dSkeletonABPK;
- (id)retargetedSkeletonABPK;
- (void)setAlgState:(id)arg1;
- (void)setDetection2dSkeletonABPK:(id)arg1;
- (void)setLiftingSkeletonABPK:(id)arg1;
- (void)setRawDetection2dSkeletonABPK:(id)arg1;
- (void)setRawDetection2dSkeletonABPKArray:(id)arg1;
- (void)setRegistered2dSkeletonABPK:(id)arg1;
- (void)setRetargetedSkeletonABPK:(id)arg1;

@end
