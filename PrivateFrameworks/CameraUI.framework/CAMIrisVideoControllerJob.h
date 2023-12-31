
@interface CAMIrisVideoControllerJob : NSObject {
    CAMStillImageCaptureRequest * _request;
    CAMVideoCaptureResult * _videoCaptureResult;
}

@property (nonatomic, readonly) CAMStillImageCaptureRequest *request;
@property (nonatomic, readonly) CAMVideoCaptureResult *videoCaptureResult;

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 videoCaptureResult:(id)arg2;
- (id)request;
- (id)videoCaptureResult;

@end
