
@interface FigCaptureSessionPreviewSinkPipeline : FigCapturePreviewSinkPipeline {
    bool  _imageQueueUpdatedNotificationSent;
    bool  _previewRunning;
    bool  _previewSinkEnabled;
    NSString * _sourceID;
}

@property (nonatomic) bool imageQueueUpdatedNotificationSent;
@property (nonatomic) bool previewRunning;
@property (nonatomic) bool previewSinkEnabled;
@property (nonatomic, retain) NSString *sourceID;

- (void)dealloc;
- (bool)imageQueueUpdatedNotificationSent;
- (bool)previewRunning;
- (bool)previewSinkEnabled;
- (void)setImageQueueUpdatedNotificationSent:(bool)arg1;
- (void)setPreviewRunning:(bool)arg1;
- (void)setPreviewSinkEnabled:(bool)arg1;
- (void)setSourceID:(id)arg1;
- (id)sourceID;

@end
