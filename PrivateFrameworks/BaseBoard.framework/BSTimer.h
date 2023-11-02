
@interface BSTimer : NSObject <BSTimer> {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    unsigned long long  _fireCount;
    double  _fireInterval;
    id /* block */  _handler;
    double  _leewayInterval;
    bool  _oneShot;
    NSObject<OS_dispatch_queue> * _queue;
    double  _repeatInterval;
    bool  _scheduled;
    BSDispatchSource * _source;
    double  _startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long fireCount;
@property (nonatomic, readonly) double fireInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double repeatInterval;
@property (getter=isScheduled, nonatomic, readonly) bool scheduled;
@property (nonatomic, readonly) double startTime;
@property (readonly) Class superclass;

+ (id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (unsigned long long)fireCount;
- (double)fireInterval;
- (id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (id)initWithFireInterval:(double)arg1 repeatInterval:(double)arg2 leewayInterval:(double)arg3 queue:(id)arg4 handler:(id /* block */)arg5;
- (bool)isScheduled;
- (double)repeatInterval;
- (void)schedule;
- (double)startTime;

@end
