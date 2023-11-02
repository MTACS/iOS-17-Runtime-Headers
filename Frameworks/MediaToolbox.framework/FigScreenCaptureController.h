
@interface FigScreenCaptureController : NSObject {
    <FigScreenCaptureFrameHandlerDelegate> * _delegateWeak;
    FigDisplayConfiguration * _displayConfiguration;
    struct OpaqueFigSimpleMutex { } * _lock;
    int  _mode;
    struct __CFDictionary { } * _options;
    FigScreenCaptureConfiguration * _screenCaptureConfiguration;
    struct OpaqueFigVirtualDisplaySession { } * _session;
}

@property (nonatomic) <FigScreenCaptureFrameHandlerDelegate> *delegate;
@property (nonatomic, readonly) FigDisplayConfiguration *displayConfiguration;
@property (nonatomic) struct OpaqueFigSimpleMutex { }*lock;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minIntervalBetweenFrames;
@property (nonatomic) struct __CFDictionary { }*options;
@property (nonatomic, readonly) FigScreenCaptureConfiguration *screenCaptureConfiguration;
@property (nonatomic) struct OpaqueFigVirtualDisplaySession { }*session;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (id)screenCaptureControllerWithCaptureConfiguration:(id)arg1;
+ (id)screenCaptureControllerWithDisplayConfiguration:(id)arg1;
+ (id)screenCaptureControllerWithFigVirtualDisplayOptions:(id)arg1;
+ (id)screenCaptureControllerWithSize:(struct CGSize { double x1; double x2; })arg1 minIntervalBetweenFrames:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)displayConfiguration;
- (struct __CFDictionary { }*)getFVDOptions;
- (id)initWithDisplayConfiguration:(id)arg1;
- (id)initWithFigVirtualDisplayOptions:(id)arg1;
- (id)initWithScreenCaptureConfiguration:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 minIntervalBetweenFrames:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (struct OpaqueFigSimpleMutex { }*)lock;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minIntervalBetweenFrames;
- (struct __CFDictionary { }*)options;
- (void)resumeCapture;
- (id)screenCaptureConfiguration;
- (struct OpaqueFigVirtualDisplaySession { }*)session;
- (void)setDelegate:(id)arg1;
- (void)setFigVirtualDisplayOption:(id)arg1 forKey:(id)arg2;
- (void)setLock:(struct OpaqueFigSimpleMutex { }*)arg1;
- (void)setOptions:(struct __CFDictionary { }*)arg1;
- (void)setSession:(struct OpaqueFigVirtualDisplaySession { }*)arg1;
- (struct CGSize { double x1; double x2; })size;
- (void)startCapture;
- (void)stopCapture;
- (void)suspendCapture;

@end
