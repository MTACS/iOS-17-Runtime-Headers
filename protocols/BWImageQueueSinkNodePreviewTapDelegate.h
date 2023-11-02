
@protocol BWImageQueueSinkNodePreviewTapDelegate <NSObject>

@required

- (void)imageQueueSinkNode:(BWImageQueueSinkNode *)arg1 didAttemptToEnqueuePreviewSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 withSuccess:(bool)arg3;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(BWImageQueueSinkNode *)arg1;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(BWImageQueueSinkNode *)arg1 atHostTime:(long long)arg2;

@end
