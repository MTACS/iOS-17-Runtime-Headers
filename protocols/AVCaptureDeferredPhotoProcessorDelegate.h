
@protocol AVCaptureDeferredPhotoProcessorDelegate <NSObject>

@required

- (void)processor:(AVCaptureDeferredPhotoProcessor *)arg1 didFinishProcessingPhotoProxy:(AVCaptureDeferredPhotoProxy *)arg2 finalPhoto:(AVCapturePhoto *)arg3 error:(NSError *)arg4;

@optional

- (void)processor:(AVCaptureDeferredPhotoProcessor *)arg1 willBeginProcessingPhotoProxy:(AVCaptureDeferredPhotoProxy *)arg2;

@end
