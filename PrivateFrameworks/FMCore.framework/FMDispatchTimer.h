
@interface FMDispatchTimer : NSObject {
    id /* block */  _completion;
    double  _leewayTimeInterval;
    NSObject<OS_dispatch_queue> * _queue;
    double  _timeout;
    NSObject<OS_dispatch_source> * _timerSource;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) double leewayTimeInterval;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double timeout;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timerSource;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)completion;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (double)leewayTimeInterval;
- (id)queue;
- (void)setCompletion:(id /* block */)arg1;
- (void)setLeewayTimeInterval:(double)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setTimerSource:(id)arg1;
- (void)start;
- (double)timeout;
- (id)timerSource;

@end
