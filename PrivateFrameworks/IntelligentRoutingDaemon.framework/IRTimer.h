
@interface IRTimer : NSObject {
    NSObject<OS_dispatch_source> * _timerSource;
}

@property (nonatomic, retain) NSObject<OS_dispatch_source> *timerSource;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInterval:(double)arg1 repeats:(bool)arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (void)invalidate;
- (void)setTimerSource:(id)arg1;
- (id)timerSource;

@end
