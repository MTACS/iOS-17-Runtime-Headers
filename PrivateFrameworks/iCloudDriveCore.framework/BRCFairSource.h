
@interface BRCFairSource : NSObject {
    bool  _cancelled;
    id /* block */  _eventHandler;
    NSString * _name;
    BRCFairScheduler * _scheduler;
    unsigned long long  _schedulerBitIndex;
    bool  _signaled;
    int  _suspendCount;
    NSObject<OS_dispatch_workloop> * _workloop;
}

@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_workloop> *workloop;

- (void).cxx_destruct;
- (void)_runEventHandler;
- (void)cancel;
- (id)description;
- (id /* block */)eventHandler;
- (id)initWithName:(id)arg1 scheduler:(id)arg2;
- (void)resume;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setWorkloop:(id)arg1;
- (void)signal;
- (void)suspend;
- (id)workloop;

@end
