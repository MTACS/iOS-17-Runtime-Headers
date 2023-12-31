
@interface FigCaptureSessionProxy : NSObject {
    long long  _identifier;
    <FigCaptureSessionPreviewTapDelegate> * _previewTapDelegate;
    bool  _previewTapOpened;
    struct OpaqueFigCaptureSession { } * _session;
}

@property (readonly) long long identifier;

+ (void)initialize;

- (void)closePreviewTap;
- (void)dealloc;
- (long long)identifier;
- (id)initWithFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1 identifier:(long long)arg2;
- (int)openPreviewTapWithDelegate:(id)arg1;

@end
