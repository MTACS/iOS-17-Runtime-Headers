
@interface AMSUIWebFlowTimeout : NSObject {
    id /* block */  _block;
    id /* block */  _enqueuedBlock;
    NSObject<OS_dispatch_queue> * _queue;
    NSDate * _startTime;
    double  _timeRemaining;
    double  _timeout;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, copy) id /* block */ enqueuedBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic) double timeRemaining;
@property (nonatomic) double timeout;

+ (id)timeoutWithTimeout:(double)arg1 queue:(id)arg2 block:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)block;
- (id /* block */)enqueuedBlock;
- (id)initWithTimeout:(double)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (void)pause;
- (id)queue;
- (void)reset;
- (void)setBlock:(id /* block */)arg1;
- (void)setEnqueuedBlock:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setTimeRemaining:(double)arg1;
- (void)setTimeout:(double)arg1;
- (void)start;
- (id)startTime;
- (double)timeRemaining;
- (double)timeout;

@end
