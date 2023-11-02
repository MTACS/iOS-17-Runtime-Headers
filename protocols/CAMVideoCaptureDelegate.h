
@protocol CAMVideoCaptureDelegate <NSObject>

@optional

- (void)videoRequest:(CAMVideoCaptureRequest *)arg1 didCompleteCaptureWithResult:(CAMVideoCaptureResult *)arg2;
- (void)videoRequestDidStartCapturing:(CAMVideoCaptureRequest *)arg1;
- (void)videoRequestDidStopCapturing:(CAMVideoCaptureRequest *)arg1;

@end
