
@protocol CAMViewfinderViewControllerVideoCaptureRequestTestingDelegate <NSObject>

@optional

- (void)viewfinderViewController:(CAMViewfinderViewController *)arg1 didReceiveVideoRequestDidCompleteCapture:(CAMVideoCaptureRequest *)arg2 withResponse:(CAMVideoCaptureResponse *)arg3 error:(NSError *)arg4;
- (void)viewfinderViewController:(CAMViewfinderViewController *)arg1 didReceiveVideoRequestDidCompleteLocalPersistence:(CAMVideoCaptureRequest *)arg2 withResponse:(CAMVideoPersistenceResponse *)arg3 error:(NSError *)arg4;
- (void)viewfinderViewController:(CAMViewfinderViewController *)arg1 didReceiveVideoRequestDidCompleteRemotePersistence:(CAMVideoCaptureRequest *)arg2 withResponse:(CAMVideoPersistenceResponse *)arg3 error:(NSError *)arg4;
- (void)viewfinderViewController:(CAMViewfinderViewController *)arg1 didReceiveVideoRequestDidStartCapturing:(CAMVideoCaptureRequest *)arg2;
- (void)viewfinderViewController:(CAMViewfinderViewController *)arg1 didReceiveVideoRequestDidStopCapturing:(CAMVideoCaptureRequest *)arg2;

@end
