
@interface LICacheClearScheduler : NSObject {
    id /* block */  _clearHandler;
    double  _delay;
    bool  _holdTransaction;
    NSObject<OS_dispatch_source> * _memoryPreasure;
    unsigned long long  _memoryPreasureState;
    id  _object;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
    bool  _timerFired;
    NSObject<OS_os_transaction> * _transaction;
}

@property (readonly) id /* block */ clearHandler;
@property double delay;
@property bool holdTransaction;
@property (retain) NSObject<OS_dispatch_source> *memoryPreasure;
@property unsigned long long memoryPreasureState;
@property (readonly) id object;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_source> *timer;
@property bool timerFired;
@property (retain) NSObject<OS_os_transaction> *transaction;

+ (id)transactionDescription:(id)arg1;

- (void).cxx_destruct;
- (void)_queue_clearCache;
- (id /* block */)clearHandler;
- (double)delay;
- (bool)holdTransaction;
- (id)initWithObject:(id)arg1 delay:(double)arg2 holdTransaction:(bool)arg3 clearHandler:(id /* block */)arg4;
- (id)memoryPreasure;
- (unsigned long long)memoryPreasureState;
- (id)object;
- (id)queue;
- (void)setDelay:(double)arg1;
- (void)setHoldTransaction:(bool)arg1;
- (void)setMemoryPreasure:(id)arg1;
- (void)setMemoryPreasureState:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setTimerFired:(bool)arg1;
- (void)setTransaction:(id)arg1;
- (id)timer;
- (bool)timerFired;
- (id)transaction;

@end
