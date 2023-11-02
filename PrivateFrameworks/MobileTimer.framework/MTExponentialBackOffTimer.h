
@interface MTExponentialBackOffTimer : NSObject {
    unsigned long long  _backoffFactor;
    id /* block */  _block;
    unsigned long long  _currentBackoff;
    double  _initialTime;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic) unsigned long long backoffFactor;
@property (nonatomic, copy) id /* block */ block;
@property (nonatomic) unsigned long long currentBackoff;
@property (nonatomic) double initialTime;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;

+ (id)timerWithInitialTime:(double)arg1 backoffFactor:(unsigned long long)arg2 fireBlock:(id /* block */)arg3;
+ (id)timerWithInitialTime:(double)arg1 backoffFactor:(unsigned long long)arg2 fireBlock:(id /* block */)arg3 queue:(id)arg4;
+ (id)timerWithInitialTime:(double)arg1 fireBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_cancel;
- (unsigned long long)backoffFactor;
- (id /* block */)block;
- (unsigned long long)currentBackoff;
- (id)description;
- (id)initWithInitialTime:(double)arg1 backoffFactor:(unsigned long long)arg2 fireBlock:(id /* block */)arg3 queue:(id)arg4;
- (double)initialTime;
- (id)queue;
- (void)reset;
- (void)setBackoffFactor:(unsigned long long)arg1;
- (void)setBlock:(id /* block */)arg1;
- (void)setCurrentBackoff:(unsigned long long)arg1;
- (void)setInitialTime:(double)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)start;
- (void)stop;
- (id)timer;
- (void)timerFinished;

@end
