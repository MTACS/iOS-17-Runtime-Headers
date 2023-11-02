
@interface FigCameraViewfinderSessionLocal : FigCameraViewfinderSession <FigCameraViewfinderStreamDelegate, FigCaptureSessionPreviewTapDelegate> {
    FigCaptureSessionProxy * _captureSessionProxy;
    bool  _ended;
    long long  _identifier;
    FigCameraViewfinderStream * _previewStream;
    bool  _previewStreamClosed;
    int  _previewStreamClosedErrorStatus;
    NSObject<OS_dispatch_queue> * _previewStreamQueue;
    FigStateMachine * _stateMachine;
    FigCameraViewfinderLocal * _viewfinder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_captureSessionDidCapturePhotoWithStatus:(int)arg1 thumbnailData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)_captureSessionDidStop;
- (id)_initWithOwningViewfinder:(id)arg1 captureSessionProxy:(id)arg2 delegateStorage:(id)arg3;
- (void)cameraViewfinderStream:(id)arg1 didCloseWithStatus:(int)arg2;
- (void)cameraViewfinderStreamDidOpen:(id)arg1;
- (void)captureSession:(id)arg1 previewTapDidOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureSessionPreviewTapDidClose:(id)arg1;
- (void)captureSessionPreviewTapDidOpen:(id)arg1;
- (void)closePreviewStream;
- (void)dealloc;
- (long long)identifier;
- (void)openPreviewStreamWithOptions:(id)arg1;
- (id)viewfinder;

@end