
@interface ARTrackedRaycastPostProcessor : NSObject {
    ARSession * _session;
}

@property ARSession *session;
@property (nonatomic, readonly) NSArray *trackedRaycasts;

- (void).cxx_destruct;
- (void)addTrackedRaycast:(id)arg1 andProcessInitialResults:(id)arg2;
- (void)dealloc;
- (id)initWithSession:(id)arg1;
- (void)invalidateAllRaycasts;
- (void)invalidateRaycastWithIdentifier:(id)arg1;
- (void)performBlockWhileLockingRaycasts:(id /* block */)arg1;
- (void)processInitialResults:(id)arg1 forRaycast:(id)arg2;
- (void)processUpdatedResults:(id)arg1;
- (void)removeTrackedRaycastWithIdentifier:(id)arg1;
- (bool)result:(id)arg1 isCloseEnoughToInitialResultForRaycast:(id)arg2;
- (id)session;
- (void)setSession:(id)arg1;
- (void)startUpdateTimer;
- (id)trackedRaycasts;
- (void)updateFromPoseGraphEventWithData:(id)arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (void)updateFromTimer:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })updatePose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 oldRayOrigin:(double)arg3 oldRayDirection:(double)arg4 newRayOrigin:(double)arg5 newRayDirection:(double)arg6;

@end
