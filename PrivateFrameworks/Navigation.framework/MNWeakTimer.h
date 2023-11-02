
@interface MNWeakTimer : NSObject {
    SEL  _selector;
    id  _target;
    NSTimer * _timer;
}

@property (nonatomic) SEL selector;
@property (nonatomic) id target;
@property (nonatomic, readonly) NSTimer *timer;

+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3;

- (void).cxx_destruct;
- (void)_timerDidFire;
- (void)dealloc;
- (id)initWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)invalidate;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (id)timer;

@end
