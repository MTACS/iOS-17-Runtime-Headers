
@protocol CAMStillImagePersistenceCoordinatorDelegate <NSObject>

@required

- (void)stillImagePersistenceCoordinator:(CAMStillImagePersistenceCoordinator *)arg1 requestsRemotePersistenceForLocalPersistenceResult:(CAMStillImageLocalPersistenceResult *)arg2 filteredLocalResult:(CAMStillImageLocalPersistenceResult *)arg3 request:(CAMCaptureRequest *)arg4 powerAssertionReason:(unsigned int)arg5;
- (void)stillImagePersistenceCoordinator:(CAMStillImagePersistenceCoordinator *)arg1 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(CAMCaptureCoordinationInfo *)arg2 request:(CAMCaptureRequest *)arg3;

@end
