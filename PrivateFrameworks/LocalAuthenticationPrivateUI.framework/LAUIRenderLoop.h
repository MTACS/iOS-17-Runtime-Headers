
@interface LAUIRenderLoop : NSObject {
    bool  _background;
    <LAUIRenderLoopDelegate> * _delegate;
    bool  _delegate_observes_effective_paused;
    bool  _delegate_observes_runnable;
    CADisplayLink * _display_link;
    bool  _drawing;
    bool  _effective_paused;
    bool  _has_high_fps_reason;
    unsigned int  _high_fps_reason;
    bool  _in_application_context;
    bool  _invalidated;
    bool  _paused;
    struct CAFrameRateRange { 
        float minimum; 
        float maximum; 
        float preferred; 
    }  _preferred_fps_range;
    bool  _runnable;
    UIScreen * _screen;
}

@property (nonatomic) <LAUIRenderLoopDelegate> *delegate;
@property (getter=isDrawing, nonatomic, readonly) bool drawing;
@property (getter=effectiveIsPaused, nonatomic, readonly) bool effectivePaused;
@property (nonatomic) unsigned int highFrameRateReason;
@property (getter=isInApplicationContext, nonatomic) bool inApplicationContext;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) struct CAFrameRateRange { float x1; float x2; float x3; } preferredFrameRateRange;
@property (getter=isRunnable, nonatomic, readonly) bool runnable;
@property (nonatomic, readonly) UIScreen *screen;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_didDraw;
- (void)_didInvalidate;
- (bool)_isForcingPause;
- (void)_willDraw;
- (bool)attachToScreen:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)effectiveIsPaused;
- (unsigned int)highFrameRateReason;
- (id)init;
- (void)invalidate;
- (bool)isDrawing;
- (bool)isInApplicationContext;
- (bool)isInvalidated;
- (bool)isPaused;
- (bool)isRunnable;
- (struct CAFrameRateRange { float x1; float x2; float x3; })preferredFrameRateRange;
- (id)screen;
- (void)setDelegate:(id)arg1;
- (void)setHighFrameRateReason:(unsigned int)arg1;
- (void)setInApplicationContext:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;

@end
