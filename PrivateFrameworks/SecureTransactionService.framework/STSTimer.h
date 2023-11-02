
@interface STSTimer : NSObject {
    bool  _monotonic;
    unsigned long long  _popTimeInSeconds;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _src;
}

@property (nonatomic) bool monotonic;
@property (nonatomic) unsigned long long popTimeInSeconds;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *src;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initSleepTimerWithCallback:(id /* block */)arg1 queue:(id)arg2;
- (id)initWithCallback:(id /* block */)arg1 queue:(id)arg2;
- (bool)monotonic;
- (unsigned long long)popTimeInSeconds;
- (id)queue;
- (void)setMonotonic:(bool)arg1;
- (void)setPopTimeInSeconds:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setSrc:(id)arg1;
- (id)src;
- (void)startTimer:(double)arg1;
- (void)startTimer:(double)arg1 leeway:(double)arg2;
- (void)stopTimer;

@end
