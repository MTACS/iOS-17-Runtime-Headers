
@interface JFXMattingPerfState : NSObject {
    JFXCapturePreviewFrameStats * _captureFrameStats;
    PVTaskToken * _signpostToken;
}

@property (nonatomic, readonly) JFXCapturePreviewFrameStats *captureFrameStats;
@property (nonatomic, readonly) PVTaskToken *signpostToken;

+ (struct CGSize { double x1; double x2; })mattingDepthInputSize;

- (void).cxx_destruct;
- (id)captureFrameStats;
- (id)initWithStats:(id)arg1 signpostToken:(id)arg2;
- (id)signpostToken;

@end
