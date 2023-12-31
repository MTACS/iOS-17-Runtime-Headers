
@interface NUCoalescer : NSObject {
    double  _delay;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
}

@property (readonly) double delay;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)coalesceBlock:(id /* block */)arg1;
- (void)dealloc;
- (double)delay;
- (id)init;
- (id)initWithDelay:(double)arg1;
- (id)initWithDelay:(double)arg1 queue:(id)arg2;
- (id)queue;

@end
