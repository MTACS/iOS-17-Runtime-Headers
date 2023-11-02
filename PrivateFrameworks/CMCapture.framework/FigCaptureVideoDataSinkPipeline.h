
@interface FigCaptureVideoDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWFigVideoCaptureDevice * _captureDevice;
    BWNodeOutput * _faceTrackingVideoCaptureOutput;
    BWNodeOutput * _offlineVISMotionDataCaptureOutput;
    bool  _optimizedForPreview;
    int  _sourceDeviceType;
    NSString * _sourceID;
    BWPixelTransferNode * _videoDataConverterRotatorNode;
    FigCaptureVISPipeline * _visPipeline;
}

+ (void)initialize;

- (void)dealloc;

@end
