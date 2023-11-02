
@interface CRXUTimer : NSObject {
    SEL  _selector;
    id  _target;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic) SEL selector;
@property (nonatomic) id target;

+ (id)scheduledTimerWithTimeInterval:(double)arg1 weakTarget:(id)arg2 selector:(SEL)arg3 repeats:(bool)arg4 queue:(id)arg5;

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleTimer;
- (id)initWithTimeInterval:(double)arg1 weakTarget:(id)arg2 selector:(SEL)arg3 repeats:(bool)arg4 queue:(id)arg5;
- (void)invalidate;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
