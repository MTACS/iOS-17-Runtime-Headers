
@protocol CAMVideoCaptureRequestDelegate <NSObject>

@optional

- (void)videoRequestDidCompleteCapture:(CAMVideoCaptureRequest *)arg1 withResponse:(CAMVideoCaptureResponse *)arg2 error:(NSError *)arg3;
- (void)videoRequestDidCompleteLocalPersistence:(CAMVideoCaptureRequest *)arg1 withResponse:(CAMVideoPersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)videoRequestDidCompleteRemotePersistence:(CAMVideoCaptureRequest *)arg1 withResponse:(CAMVideoPersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)videoRequestDidStartCapturing:(CAMVideoCaptureRequest *)arg1;
- (void)videoRequestDidStopCapturing:(CAMVideoCaptureRequest *)arg1;

@end
