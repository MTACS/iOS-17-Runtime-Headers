
@interface FigCaptureMovieFileSinkTailPipeline : FigCapturePipeline {
    BWVideoCompressorNode * _depthCompressorNode;
    BWBackPressureNode * _irisIntermediateJPEGDecompressionBackPressureNode;
    BWBackPressureNode * _irisSDOFVISBackPressureNode;
    BWQuickTimeMovieFileSinkNode * _movieFileSinkNode;
    <BWMRCSceneObserver> * _mrcSceneObserver;
    bool  _offlineVISEnabled;
    bool  _recording;
    BWBackPressureNode * _scalerBackPressureNode;
    BWPixelTransferNode * _scalerNode;
    bool  _sceneClassifierSuspended;
    BWVideoCompressorNode * _sdofCompressorNode;
    unsigned long long  _tailIndex;
    BWVideoCompressorNode * _videoCompressorNode;
    int  _videoStabilizationType;
    int  _visBackPressureExtraRetainedBufferCount;
    BWBackPressureNode * _visBackPressureNode;
    <BWNodeBackPressureSource> * _visBackPressureSourceNode;
    FigCaptureVISPipeline * _visPipeline;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } irisVISCleanOutputRectForCLAP;
@property (nonatomic, readonly) BWQuickTimeMovieFileSinkNode *movieFileSinkNode;
@property (setter=setMRCSceneObserver:, nonatomic) <BWMRCSceneObserver> *mrcSceneObserver;
@property (nonatomic, readonly) struct { int x1; int x2; } offlineVISDimensions;
@property (nonatomic) bool recording;
@property (nonatomic) bool sceneClassifierSuspended;
@property (nonatomic, readonly) BWVideoCompressorNode *sdofCompressorNode;
@property (nonatomic, readonly) BWVideoCompressorNode *videoCompressorNode;
@property (nonatomic, readonly) FigCaptureVISPipeline *visPipeline;

- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 tailIndex:(unsigned long long)arg2 numTailPipelines:(unsigned long long)arg3 graph:(id)arg4 parentPipeline:(id)arg5 captureDevice:(id)arg6 inferenceScheduler:(id)arg7 recordingStatusDelegate:(id)arg8 workgroup:(id)arg9;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })irisVISCleanOutputRectForCLAP;
- (id)movieFileSinkNode;
- (id)mrcSceneObserver;
- (struct { int x1; int x2; })offlineVISDimensions;
- (bool)recording;
- (bool)sceneClassifierSuspended;
- (id)sdofCompressorNode;
- (void)setMRCSceneObserver:(id)arg1;
- (void)setRecording:(bool)arg1;
- (void)setSceneClassifierSuspended:(bool)arg1;
- (id)videoCompressorNode;
- (id)visPipeline;

@end
