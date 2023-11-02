
@interface CRKDispatchTimer : NSObject <CRKCancelable> {
    id /* block */  _fireHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _targetQueue;
    double  _timeInterval;
    NSObject<OS_dispatch_source> * _timerSource;
}

@property (nonatomic, copy) id /* block */ fireHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *targetQueue;
@property (nonatomic, readonly) double timeInterval;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timerSource;

+ (id)scheduledTimerWithTimerInterval:(double)arg1 queue:(id)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id /* block */)fireHandler;
- (id)initWithTimeInterval:(double)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (id)queue;
- (void)resume;
- (void)setFireHandler:(id /* block */)arg1;
- (void)setTimerSource:(id)arg1;
- (id)targetQueue;
- (double)timeInterval;
- (void)timerDidFire;
- (id)timerSource;

@end
