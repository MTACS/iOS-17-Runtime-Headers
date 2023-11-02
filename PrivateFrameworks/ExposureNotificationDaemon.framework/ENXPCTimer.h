
@interface ENXPCTimer : NSObject {
    NSObject<OS_xpc_object> * _activity;
    id /* block */  _block;
    unsigned long long  _cadence;
    NSDate * _date;
    double  _gracePeriod;
    NSString * _name;
    unsigned long long  _options;
    long long  _priority;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *activity;
@property (nonatomic, copy) id /* block */ block;
@property (nonatomic) unsigned long long cadence;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) double gracePeriod;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long priority;

- (void).cxx_destruct;
- (id)activity;
- (id /* block */)activityHandler;
- (id /* block */)block;
- (unsigned long long)cadence;
- (id)criteria;
- (id)date;
- (id)description;
- (double)gracePeriod;
- (void)handleActivity;
- (id)initWithName:(id)arg1 date:(id)arg2 gracePeriod:(double)arg3 cadence:(unsigned long long)arg4 priority:(long long)arg5 options:(unsigned long long)arg6 block:(id /* block */)arg7;
- (id)initWithName:(id)arg1 date:(id)arg2 gracePeriod:(double)arg3 priority:(long long)arg4 options:(unsigned long long)arg5 block:(id /* block */)arg6;
- (id)initWithName:(id)arg1 date:(id)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 block:(id /* block */)arg5;
- (id)initWithName:(id)arg1 delay:(double)arg2 gracePeriod:(double)arg3 cadence:(unsigned long long)arg4 priority:(long long)arg5 options:(unsigned long long)arg6 block:(id /* block */)arg7;
- (id)initWithName:(id)arg1 delay:(double)arg2 gracePeriod:(double)arg3 priority:(long long)arg4 options:(unsigned long long)arg5 block:(id /* block */)arg6;
- (id)initWithName:(id)arg1 timeInterval:(double)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 block:(id /* block */)arg5;
- (void)invalidate;
- (id)name;
- (unsigned long long)options;
- (long long)priority;
- (void)setActivity:(id)arg1;
- (void)setBlock:(id /* block */)arg1;
- (void)setCadence:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setGracePeriod:(double)arg1;
- (void)setName:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPriority:(long long)arg1;

@end
