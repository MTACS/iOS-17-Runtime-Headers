
@interface AVSampleBufferVideoOutput : NSObject {
    AVSampleBufferVideoOutputInternal * _videoOutputInternal;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) <AVSampleBufferVideoOutputPullDelegate> *outputDelegate;

- (bool)_configureWithVideoQueue:(struct OpaqueFigVideoQueue { }*)arg1;
- (struct __CVBuffer { }*)_copyPixelBufferForItemTimeWithOptions:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 itemTimeForDisplay:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 options:(unsigned int)arg3;
- (void)_dispatchOutputSequenceWasFlushed;
- (void)_resetLastImageTime;
- (struct OpaqueFigVisualContext { }*)_visualContext;
- (id)_weakReference;
- (struct __CVBuffer { }*)copyLastPixelBuffer:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;
- (struct __CVBuffer { }*)copyPixelBufferForSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 sourceTimeForDisplay:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2;
- (void)dealloc;
- (id)delegateQueue;
- (bool)hasNewPixelBufferForSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)init;
- (id)outputDelegate;
- (void)setOutputDelegate:(id)arg1 queue:(id)arg2;
- (bool)setUpWithOutputSettings:(id)arg1 outputSettingsArePixelBufferAttributes:(bool)arg2 withExceptionReason:(id*)arg3;

@end
