
@interface BUCoalescingCallBlock : NSObject {
    NSMutableArray * _callbacks;
    double  _coalescingDelay;
    NSObject<OS_dispatch_group> * _group;
    bool  _invoking;
    double  _maximumDelay;
    unsigned long long  _nextCoalescingTime;
    unsigned long long  _nextMaxTime;
    id /* block */  _notifyBlock;
    NSString * _notifyBlockDescription;
    id /* block */  _notifyTimeoutBlock;
    unsigned short  _notifyTimeoutDurationSeconds;
    bool  _pending;
    NSObject<OS_dispatch_queue> * _sync;
}

@property (nonatomic, retain) NSMutableArray *callbacks;
@property (nonatomic) double coalescingDelay;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *group;
@property (getter=isInvoking, nonatomic) bool invoking;
@property (nonatomic) double maximumDelay;
@property (nonatomic) unsigned long long nextCoalescingTime;
@property (nonatomic) unsigned long long nextMaxTime;
@property (nonatomic, copy) id /* block */ notifyBlock;
@property (nonatomic, copy) NSString *notifyBlockDescription;
@property (nonatomic, copy) id /* block */ notifyTimeoutBlock;
@property (nonatomic) unsigned short notifyTimeoutDurationSeconds;
@property (nonatomic) bool pending;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *sync;

- (void).cxx_destruct;
- (void)_coalescingTimeExpired:(unsigned long long)arg1;
- (void)_invoke;
- (void)_invokeIfNotInProgress;
- (void)_maxTimeExpired:(unsigned long long)arg1;
- (id)callbacks;
- (double)coalescingDelay;
- (id)description;
- (id)group;
- (id)initWithNotifyBlock:(id /* block */)arg1 blockDescription:(id)arg2;
- (id)initWithNotifyBlock:(id /* block */)arg1 notifyTimeout:(unsigned short)arg2 blockDescription:(id)arg3 notifyTimeoutBlock:(id /* block */)arg4;
- (bool)isInvoking;
- (double)maximumDelay;
- (unsigned long long)nextCoalescingTime;
- (unsigned long long)nextMaxTime;
- (id /* block */)notifyBlock;
- (id)notifyBlockDescription;
- (id /* block */)notifyTimeoutBlock;
- (unsigned short)notifyTimeoutDurationSeconds;
- (bool)pending;
- (void)setCallbacks:(id)arg1;
- (void)setCoalescingDelay:(double)arg1;
- (void)setGroup:(id)arg1;
- (void)setInvoking:(bool)arg1;
- (void)setMaximumDelay:(double)arg1;
- (void)setNextCoalescingTime:(unsigned long long)arg1;
- (void)setNextMaxTime:(unsigned long long)arg1;
- (void)setNotifyBlock:(id /* block */)arg1;
- (void)setNotifyBlockDescription:(id)arg1;
- (void)setNotifyTimeoutBlock:(id /* block */)arg1;
- (void)setNotifyTimeoutDurationSeconds:(unsigned short)arg1;
- (void)setPending:(bool)arg1;
- (void)setSync:(id)arg1;
- (void)signalWithCompletion:(id /* block */)arg1;
- (id)sync;

@end
