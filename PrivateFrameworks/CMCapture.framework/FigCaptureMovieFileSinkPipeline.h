
@interface FigCaptureMovieFileSinkPipeline : FigCaptureSinkPipeline {
    BWFigVideoCaptureDevice * _captureDevice;
    FigCaptureMovieFileSinkHeadPipeline * _headPipeline;
    FigCaptureMovieFileSinkMiddlePipeline * _middlePipeline;
    bool  _momentCaptureMovieRecordingEnabled;
    NSMutableArray * _movieFileSinkNodes;
    bool  _overCaptureEnabled;
    bool  _overCaptureTailPipelineRenderingEnabled;
    NSMutableArray * _sdofCompressorNodes;
    NSMutableArray * _tailPipelines;
    NSMutableArray * _videoCompressorNodes;
    int  _videoStabilizationStrength;
    OS_os_workgroup * _workgroup;
}

+ (void)initialize;

- (void)dealloc;
- (id)middlePipeline;

@end
