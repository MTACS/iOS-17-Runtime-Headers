
@interface ARDisplayLink : NSObject {
    double  _actualVsyncOffset;
    id /* block */  _callback;
    CADisplayLink * _displayLink;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _preferredFramesPerSecond;
    ARRunLoop * _runloop;
    double  _vsyncOffset;
}

@property long long preferredFramesPerSecond;
@property (nonatomic, readonly) ARRunLoop *runloop;
@property double vsyncOffset;

- (void).cxx_destruct;
- (void)_recomputeActualVsyncOffsetWithVsyncOffset:(double)arg1 preferredFramesPerSecond:(long long)arg2;
- (void)dealloc;
- (void)displayLinkCallback;
- (id)init;
- (id)initWithPreferredFramesPerSecond:(long long)arg1 callback:(id /* block */)arg2;
- (void)invalidate;
- (long long)preferredFramesPerSecond;
- (id)runloop;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setVsyncOffset:(double)arg1;
- (double)vsyncOffset;

@end
