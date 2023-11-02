
@interface NACEventThrottler : NSObject {
    id /* block */  _eventBlock;
    double  _lastUpdateTime;
    double  _minimumDelay;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
    id  _value;
}

@property (nonatomic, copy) id /* block */ eventBlock;
@property (nonatomic) double minimumDelay;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (void)_fire;
- (void)cancel;
- (id /* block */)eventBlock;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (double)minimumDelay;
- (void)setEventBlock:(id /* block */)arg1;
- (void)setMinimumDelay:(double)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
