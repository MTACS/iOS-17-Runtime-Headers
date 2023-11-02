
@interface _CDPeriodicSchedulerJob : NSObject {
    NSObject<OS_xpc_object> * _activity;
    NSObject<OS_xpc_object> * _executionCriteria;
    id /* block */  _handler;
    double  _interval;
    bool  _isHandlerAsynchronous;
    NSString * _jobName;
    long long  _period;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) NSObject<OS_xpc_object> *activity;
@property (readonly) NSObject<OS_xpc_object> *executionCriteria;
@property (readonly) id /* block */ handler;
@property (readonly) double interval;
@property (readonly) bool isHandlerAsynchronous;
@property (readonly) NSString *jobName;
@property (readonly) long long period;
@property (readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)jobWithInterval:(double)arg1 schedulerJobName:(id)arg2 handler:(id /* block */)arg3;
+ (id)jobWithInterval:(double)arg1 schedulerJobName:(id)arg2 queue:(id)arg3 asynchronousHandler:(bool)arg4 handler:(id /* block */)arg5;
+ (id)jobWithPeriod:(long long)arg1 schedulerJobName:(id)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)activity;
- (id)executionCriteria;
- (id /* block */)handler;
- (id)init;
- (id)initWithPeriod:(long long)arg1 interval:(double)arg2 schedulerJobName:(id)arg3 queue:(id)arg4 asynchronousHandler:(bool)arg5 handler:(id /* block */)arg6;
- (double)interval;
- (bool)isHandlerAsynchronous;
- (id)jobName;
- (long long)period;
- (id)queue;
- (void)setActivity:(id)arg1;
- (void)setExecutionCriteria:(id)arg1;

@end
