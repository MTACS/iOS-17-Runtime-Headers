
@interface AVCaptureInput : NSObject {
    AVCaptureInputInternal * _inputInternal;
}

@property (nonatomic, readonly) NSArray *ports;

+ (void)initialize;

- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (id)initSubclass;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(id /* block */)arg1;
- (id)ports;
- (id)session;
- (void)setSession:(id)arg1;
- (id)videoDevice;

@end
