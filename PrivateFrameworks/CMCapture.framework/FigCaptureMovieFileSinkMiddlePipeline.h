
@interface FigCaptureMovieFileSinkMiddlePipeline : FigCapturePipeline {
    BWOverCaptureFanOutNode * _audioFanOut;
    FigCaptureMovieFileSinkHeadPipeline * _headPipeline;
    NSMutableArray * _metadataFanOuts;
    unsigned long long  _numberOfTailsToSupport;
    FigCaptureVISPipeline * _overCaptureVISPipeline;
    BWFanOutNode * _videoFanOut;
    FigCaptureVISPipeline * _visPipeline;
}

@property (nonatomic, readonly) FigCaptureVISPipeline *overCaptureVISPipeline;
@property (nonatomic, readonly) FigCaptureVISPipeline *visPipeline;

- (id)audioOutputForTailIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 headPipeline:(id)arg4 captureDevice:(id)arg5 workgroup:(id)arg6;
- (id)metadataOutputsForTailIndex:(unsigned long long)arg1;
- (id)overCaptureVISPipeline;
- (id)videoOutputForTailIndex:(unsigned long long)arg1;
- (id)visPipeline;

@end
