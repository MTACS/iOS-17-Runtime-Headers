
@protocol FigCaptureDeferredProcessingJobDelegate <NSObject>

@required

- (void)job:(FigCaptureDeferredProcessingJob *)arg1 completedWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)job:(FigCaptureDeferredProcessingJob *)arg1 failedWithError:(int)arg2;

@end
