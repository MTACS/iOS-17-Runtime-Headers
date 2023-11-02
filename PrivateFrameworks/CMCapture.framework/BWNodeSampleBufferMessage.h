
@interface BWNodeSampleBufferMessage : BWNodeMessage {
    FigCaptureRecordingSettings * _recordingSettings;
    struct opaqueCMSampleBuffer { } * _sampleBuffer;
    FigCaptureStillImageSettings * _stillImageSettings;
}

@property (readonly) FigCaptureRecordingSettings *recordingSettings;
@property (readonly) struct opaqueCMSampleBuffer { }*sampleBuffer;
@property (readonly) FigCaptureStillImageSettings *stillImageSettings;

+ (id)newMessageWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
+ (id)newMessageWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 recordingSettings:(id)arg2;
+ (id)newMessageWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 stillImageSettings:(id)arg2;

- (void)dealloc;
- (id)recordingSettings;
- (struct opaqueCMSampleBuffer { }*)sampleBuffer;
- (id)stillImageSettings;

@end
