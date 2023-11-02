
@interface CAMPrepareDeferredProcessingCommand : CAMCaptureCommand {
    PLCameraDeferredProcessingCoordinator * __deferredProcessingCoordinator;
    CAMStillImageCaptureRequest * __request;
}

@property (nonatomic, readonly) PLCameraDeferredProcessingCoordinator *_deferredProcessingCoordinator;
@property (nonatomic, readonly) CAMStillImageCaptureRequest *_request;

- (void).cxx_destruct;
- (id)_deferredProcessingCoordinator;
- (id)_request;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithRequest:(id)arg1 coordinator:(id)arg2;

@end
