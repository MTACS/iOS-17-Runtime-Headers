
@interface CKCoalescer : NSObject {
    unsigned long long  _activityDelay;
    unsigned long long  _coalesceStart;
    unsigned long long  _coalescingInterval;
    bool  _delegateProcessingInProgress;
    unsigned long long  _eventCount;
    bool  _finished;
    unsigned long long  _fireDelay;
    NSObject<OS_dispatch_source> * _fireTimer;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    unsigned long long  _maxActivityDelay;
    unsigned long long  _noticeCount;
    id /* block */  _notifyBlock;
    unsigned long long  _processingDelay;
}

@property unsigned long long activityDelay;
@property unsigned long long coalescingInterval;
@property unsigned long long maxActivityDelay;
@property (nonatomic, readonly, copy) id /* block */ notifyBlock;
@property unsigned long long processingDelay;

- (void).cxx_destruct;
- (unsigned long long)activityDelay;
- (void)coalesce:(id /* block */)arg1;
- (unsigned long long)coalescingInterval;
- (void)dealloc;
- (void)delayPostBy:(unsigned long long)arg1;
- (void)finish:(id /* block */)arg1;
- (id)initWithActivityDelay:(unsigned long long)arg1 maxActivityDelay:(unsigned long long)arg2 coalescingInterval:(unsigned long long)arg3 processingDelay:(unsigned long long)arg4 notifyBlock:(id /* block */)arg5;
- (id)initWithNotifyBlock:(id /* block */)arg1;
- (id)initWithNotifyFrequency:(unsigned long long)arg1 notifyBlock:(id /* block */)arg2;
- (unsigned long long)maxActivityDelay;
- (void)mutate:(id /* block */)arg1;
- (id /* block */)notifyBlock;
- (void)postFinishedNotice;
- (void)postNotice;
- (void)processingComplete;
- (unsigned long long)processingDelay;
- (void)setActivityDelay:(unsigned long long)arg1;
- (void)setCoalescingInterval:(unsigned long long)arg1;
- (void)setMaxActivityDelay:(unsigned long long)arg1;
- (void)setProcessingDelay:(unsigned long long)arg1;

@end
