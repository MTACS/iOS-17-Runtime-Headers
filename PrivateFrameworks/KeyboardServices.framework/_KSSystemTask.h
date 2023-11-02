
@interface _KSSystemTask : NSObject {
    double  _checkInTime;
    NSObject<OS_xpc_object> * _executionCriteria;
    id /* block */  _handler;
    double  _maxRunTime;
    NSString * _name;
    unsigned long long  _periodSeconds;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) double checkInTime;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *executionCriteria;
@property (nonatomic, readonly) id /* block */ handler;
@property (nonatomic) double maxRunTime;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long periodSeconds;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (double)checkInTime;
- (id)executionCriteria;
- (id /* block */)handler;
- (id)init;
- (id)initWithName:(id)arg1 delay:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (id)initWithName:(id)arg1 isPeriodic:(bool)arg2 period:(unsigned long long)arg3 handler:(id /* block */)arg4;
- (double)maxRunTime;
- (id)name;
- (unsigned long long)periodSeconds;
- (id)queue;
- (void)setCheckInTime:(double)arg1;
- (void)setMaxRunTime:(double)arg1;

@end
