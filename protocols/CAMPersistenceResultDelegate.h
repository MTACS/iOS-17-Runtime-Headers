
@protocol CAMPersistenceResultDelegate <NSObject>

@optional

- (void)persistenceController:(CAMPersistenceController *)arg1 didCompleteAllLocalPersistenceForRequest:(CAMCaptureRequest *)arg2;
- (void)persistenceController:(CAMPersistenceController *)arg1 didGenerateStillImageLocalPersistenceResult:(CAMStillImageLocalPersistenceResult *)arg2 forCaptureResult:(CAMStillImageCaptureResult *)arg3 fromRequest:(CAMCaptureRequest *)arg4;
- (void)persistenceController:(CAMPersistenceController *)arg1 didGenerateVideoLocalPersistenceResult:(CAMVideoLocalPersistenceResult *)arg2 forCaptureResult:(CAMVideoCaptureResult *)arg3 fromRequest:(CAMCaptureRequest *)arg4;

@end
