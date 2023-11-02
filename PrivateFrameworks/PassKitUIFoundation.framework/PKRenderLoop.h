
@interface PKRenderLoop : NSObject {
    bool  _background;
    <PKRenderLoopDelegate> * _delegate;
    bool  _delegateObservesEffectivePaused;
    bool  _delegateObservesRunnable;
    CADisplayLink * _displayLink;
    bool  _drawing;
    bool  _effectivePaused;
    bool  _hasHighFrameRateReason;
    unsigned int  _highFrameRateReason;
    bool  _invalidated;
    bool  _observingSceneNotifications;
    bool  _paused;
    struct CAFrameRateRange { 
        float minimum; 
        float maximum; 
        float preferred; 
    }  _preferredFrameRateRange;
    bool  _runnable;
    UIScreen * _screen;
    UIWindowScene * _windowScene;
}

@property (nonatomic) <PKRenderLoopDelegate> *delegate;
@property (getter=isDrawing, nonatomic, readonly) bool drawing;
@property (getter=effectiveIsPaused, nonatomic, readonly) bool effectivePaused;
@property (nonatomic) unsigned int highFrameRateReason;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) struct CAFrameRateRange { float x1; float x2; float x3; } preferredFrameRateRange;
@property (getter=isRunnable, nonatomic, readonly) bool runnable;
@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) UIWindowScene *windowScene;

- (void).cxx_destruct;
- (void)_didDraw;
- (void)_didInvalidate;
- (bool)_isForcingPause;
- (void)_sceneDidActivate:(id)arg1;
- (void)_sceneDidDisconnect:(id)arg1;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)_sceneWillConnect:(id)arg1;
- (void)_sceneWillDeactivate:(id)arg1;
- (void)_sceneWillEnterForeground:(id)arg1;
- (void)_willDraw;
- (bool)attachToWindowScene:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)effectiveIsPaused;
- (unsigned int)highFrameRateReason;
- (id)init;
- (void)invalidate;
- (bool)isDrawing;
- (bool)isInvalidated;
- (bool)isPaused;
- (bool)isRunnable;
- (struct CAFrameRateRange { float x1; float x2; float x3; })preferredFrameRateRange;
- (id)screen;
- (void)setDelegate:(id)arg1;
- (void)setHighFrameRateReason:(unsigned int)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;
- (id)windowScene;

@end
