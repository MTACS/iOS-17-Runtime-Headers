
@protocol CAMVideoPersistenceCoordinationDelegate <NSObject>

@required

- (void)videoPersistenceCoordinator:(CAMVideoPersistenceCoordinator *)arg1 requestsRemotePersistenceForLocalPersistenceResult:(CAMVideoLocalPersistenceResult *)arg2 captureRequest:(CAMCaptureRequest *)arg3 powerAssertionReason:(unsigned int)arg4;
- (void)videoPersistenceCoordinator:(CAMVideoPersistenceCoordinator *)arg1 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(CAMCaptureCoordinationInfo *)arg2 request:(CAMCaptureRequest *)arg3;

@end
