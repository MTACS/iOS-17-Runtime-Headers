
@interface CBFrameLink : NSObject {
    struct __Display { } * _display;
    CADisplayLink * _displayLink;
    id /* block */  _fadeCallbackBlock;
    id /* block */  _frameNotificationBlock;
    NSObject<OS_os_log> * _logHandle;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) double targetTimestamp;

- (void)dealloc;
- (void)frameSync:(id)arg1;
- (id)init;
- (id)initWithDisplay:(struct __Display { }*)arg1 andQueue:(id)arg2;
- (void)invalidate;
- (bool)isPaused;
- (void)pause;
- (void)resume;
- (void)scheduleWithDispatchQueue:(id)arg1;
- (void)setFrameNotificationBlock:(id /* block */)arg1;
- (void)setPreferredFramesPerSecond:(float)arg1;
- (double)targetTimestamp;

@end
