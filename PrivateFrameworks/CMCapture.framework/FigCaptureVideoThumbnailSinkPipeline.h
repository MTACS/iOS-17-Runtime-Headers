
@interface FigCaptureVideoThumbnailSinkPipeline : FigCaptureSinkPipeline <BWImageQueueSinkNodePreviewTapDelegate> {
    bool  _didPropagateCurrentImageQueue;
    BWImageQueueSinkNode * _imageQueueSinkNode;
    <BWPipelineNotificationDelegate> * _notificationDelegate;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    BWPixelTransferNode * _scalerNode;
    int  _sourceDeviceType;
    NSString * _sourceID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)dealloc;
- (void)imageQueueSinkNode:(id)arg1 didAttemptToEnqueuePreviewSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 withSuccess:(bool)arg3;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1 atHostTime:(long long)arg2;
- (void)setDiscardsSampleData:(bool)arg1;

@end
