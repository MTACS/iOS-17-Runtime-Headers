
@interface SCNDisplayLink : NSObject {
    id /* block */  _adaptativeFrameDuration;
    id /* block */  _block;
    CADisplayLink * _caDisplayLink;
    NSObject<OS_dispatch_source> * _coalescingSource;
    bool  _invalidated;
    _Atomic double  _lastDisplayLinkTime;
    double  _lastFrameTime;
    bool  _paused;
    float  _preferredFrameRate;
    NSObject<OS_dispatch_queue> * _queue;
    _Atomic int  _queuedFrameCount;
    SCNRecursiveLock * _runningLock;
}

@property (nonatomic, copy) id /* block */ adaptativeFrameRate;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) float preferredFrameRate;

- (void)_caDisplayLinkCallback;
- (void)_callbackWithTime:(double)arg1;
- (bool)_isInvalidated;
- (id /* block */)adaptativeFrameRate;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1 screen:(id)arg2 policy:(unsigned long long)arg3 block:(id /* block */)arg4;
- (void)invalidate;
- (bool)isPaused;
- (float)preferredFrameRate;
- (int)queuedFrameCount;
- (void)setAdaptativeFrameRate:(id /* block */)arg1;
- (void)setNeedsDisplay;
- (void)setPaused:(bool)arg1;
- (bool)setPaused:(bool)arg1 nextFrameTimeHint:(double)arg2 lastUpdate:(double)arg3;
- (void)setPreferredFrameRate:(float)arg1;

@end
