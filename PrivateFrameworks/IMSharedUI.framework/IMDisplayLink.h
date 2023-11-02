
@interface IMDisplayLink : NSObject {
    long long  _preferredFramesPerSecond;
    NSRunLoop * _runLoop;
    NSString * _runLoopMode;
    UIScreen * _screen;
    SEL  _selector;
    id  _target;
}

@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) NSRunLoop *runLoop;
@property (nonatomic, retain) NSString *runLoopMode;
@property (nonatomic) UIScreen *screen;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly) id target;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (Class)_displayLinkClass;
+ (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;

- (void).cxx_destruct;
- (void)_displayLinkCallback;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)invalidate;
- (bool)isValid;
- (long long)preferredFramesPerSecond;
- (id)runLoop;
- (id)runLoopMode;
- (void)schedule;
- (id)screen;
- (SEL)selector;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setRunLoop:(id)arg1;
- (void)setRunLoopMode:(id)arg1;
- (void)setScreen:(id)arg1;
- (id)target;

@end
