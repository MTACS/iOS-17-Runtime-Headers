
@interface RCBlockScheduler : NSObject {
    NSMutableArray * _blocks;
    NSDate * _date;
    NSObject<OS_dispatch_group> * _group;
    double  _interval;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _schedulerBlock;
    NSObject<OS_dispatch_queue> * _schedulerQueue;
    unsigned long long  _start;
    bool  _suspended;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic) double interval;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)date;
- (id)init;
- (double)interval;
- (id)queue;
- (void)resume;
- (void)scheduleBlock:(id /* block */)arg1;
- (void)setInterval:(double)arg1;
- (void)setQueue:(id)arg1;
- (void)suspend;

@end
