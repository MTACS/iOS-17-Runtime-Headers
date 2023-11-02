
@interface FigCaptureVisionDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWFigVideoCaptureStream * _captureStream;
    int  _sourceDeviceType;
    NSString * _sourceID;
}

+ (void)initialize;

- (void)dealloc;

@end
