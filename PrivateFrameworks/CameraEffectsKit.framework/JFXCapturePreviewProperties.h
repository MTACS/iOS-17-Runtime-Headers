
@interface JFXCapturePreviewProperties : NSObject {
    PVFrameSet * _cameraFrameSet;
    double  _displayTimestamp;
    struct CGSize { 
        double width; 
        double height; 
    }  _frameSize;
    JFXCapturePreviewFrameStats * _frameStats;
    long long  _renderCameraMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _renderOutputSize;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _renderTime;
    NSObject<OS_dispatch_semaphore> * _selfieBGBufferLoadSem;
    NSDictionary * _selfieBGBuffers;
    PVTaskToken * _signPostToken;
    JFXPerfTimer * _startFrameTimer;
}

@property (nonatomic, readonly) PVFrameSet *cameraFrameSet;
@property (nonatomic, readonly) double displayTimestamp;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } frameSize;
@property (nonatomic, readonly) JFXCapturePreviewFrameStats *frameStats;
@property (nonatomic, readonly) long long renderCameraMode;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } renderOutputSize;
@property (nonatomic, readonly) bool renderRequiresCrop;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } renderTime;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *selfieBGBufferLoadSem;
@property (nonatomic, retain) NSDictionary *selfieBGBuffers;
@property (nonatomic, readonly) PVTaskToken *signPostToken;
@property (nonatomic, readonly) JFXPerfTimer *startFrameTimer;

- (void).cxx_destruct;
- (id)cameraFrameSet;
- (double)displayTimestamp;
- (struct CGSize { double x1; double x2; })frameSize;
- (id)frameStats;
- (id)initWithCameraFrameSet:(id)arg1 renderCameraMode:(long long)arg2 renderTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 renderOutputSize:(struct CGSize { double x1; double x2; })arg4 frameSize:(struct CGSize { double x1; double x2; })arg5;
- (id)initWithCameraFrameSet:(id)arg1 renderCameraMode:(long long)arg2 renderTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 renderOutputSize:(struct CGSize { double x1; double x2; })arg4 frameSize:(struct CGSize { double x1; double x2; })arg5 signPostToken:(id)arg6 displayTimestamp:(double)arg7 frameStats:(id)arg8 startFrameTimer:(id)arg9;
- (long long)renderCameraMode;
- (struct CGSize { double x1; double x2; })renderOutputSize;
- (bool)renderRequiresCrop;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })renderTime;
- (id)selfieBGBufferLoadSem;
- (id)selfieBGBuffers;
- (void)setSelfieBGBufferLoadSem:(id)arg1;
- (void)setSelfieBGBuffers:(id)arg1;
- (id)signPostToken;
- (id)startFrameTimer;

@end
