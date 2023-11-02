
@interface WFAutoIncrementingProgress : NSProgress {
    double  _duration;
    unsigned long long  _increments;
    NSObject<OS_dispatch_source> * _progressTimer;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) unsigned long long increments;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *progressTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;

- (void).cxx_destruct;
- (void)cancel;
- (double)duration;
- (void)finish;
- (unsigned long long)increments;
- (id)initWithParent:(id)arg1 pendingUnitCount:(unsigned long long)arg2 duration:(double)arg3;
- (id)progressTimer;
- (void)setProgressTimer:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)start;
- (id)timer;

@end
