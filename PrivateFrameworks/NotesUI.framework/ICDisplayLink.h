
@interface ICDisplayLink : NSObject {
    CADisplayLink * _displayLink;
    long long  _preferredFramesPerSecond;
    NSRunLoop * _runLoop;
    NSString * _runLoopMode;
    UIScreen * _screen;
    SEL  _selector;
    id  _target;
}

@property (nonatomic, retain) CADisplayLink *displayLink;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) NSRunLoop *runLoop;
@property (nonatomic, retain) NSString *runLoopMode;
@property (nonatomic) UIScreen *screen;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly) id target;

- (void).cxx_destruct;
- (void)dealloc;
- (id)displayLink;
- (void)displayLinkAction;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)invalidate;
- (bool)isPaused;
- (long long)preferredFramesPerSecond;
- (id)runLoop;
- (id)runLoopMode;
- (void)schedule;
- (id)screen;
- (SEL)selector;
- (void)setDisplayLink:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setRunLoop:(id)arg1;
- (void)setRunLoopMode:(id)arg1;
- (void)setScreen:(id)arg1;
- (id)target;

@end
