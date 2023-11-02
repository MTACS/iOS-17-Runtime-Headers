
@interface BRCDeadlineSource : NSObject {
    bool  _cancelled;
    long long  _deadline;
    id /* block */  _eventHandler;
    NSString * _name;
    BRCDeadlineScheduler * _scheduler;
    bool  _signaled;
    int  _suspendCount;
    NSObject<OS_dispatch_workloop> * _workloop;
}

@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_workloop> *workloop;

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (id /* block */)eventHandler;
- (id)initWithScheduler:(id)arg1 name:(id)arg2;
- (void)resume;
- (void)runEventHandler;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setWorkloop:(id)arg1;
- (void)signal;
- (void)signalWithDeadline:(long long)arg1;
- (void)suspend;
- (bool)willRunEvenHandler;
- (id)workloop;

@end
