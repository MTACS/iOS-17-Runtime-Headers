
@protocol FigCaptureSessionPreviewTapDelegate <NSObject>

@required

- (void)captureSession:(FigCaptureSessionProxy *)arg1 previewTapDidOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureSessionPreviewTapDidClose:(FigCaptureSessionProxy *)arg1;
- (void)captureSessionPreviewTapDidOpen:(FigCaptureSessionProxy *)arg1;

@end
