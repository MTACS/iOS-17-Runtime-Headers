
@interface ICDocCamPreviewView : UIView

@property (nonatomic, retain) AVCaptureSession *session;
@property (nonatomic, readonly) AVCaptureVideoPreviewLayer *videoPreviewLayer;

+ (Class)layerClass;

- (id)session;
- (void)setSession:(id)arg1;
- (id)videoPreviewLayer;

@end
