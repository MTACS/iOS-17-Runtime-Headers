
@interface MTPeriodicQueue : NSObject {
    id /* block */  _flushHandler;
    NSObject<OS_dispatch_queue> * _flushQueue;
    double  _flushTimeInterval;
    bool  _flushTimerEnabled;
    long long  _maximumBatchSize;
    NSMutableArray * _mutableObjects;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, copy) id /* block */ flushHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *flushQueue;
@property (nonatomic) double flushTimeInterval;
@property (getter=isFlushTimerEnabled, nonatomic) bool flushTimerEnabled;
@property (nonatomic) long long maximumBatchSize;
@property (nonatomic, retain) NSMutableArray *mutableObjects;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;

- (void).cxx_destruct;
- (void)__beginFlushTimer;
- (id)__clearObjects;
- (void)__endFlushTimer;
- (void)__flushObjects;
- (void)__flushObjects:(id)arg1;
- (void)__flushObjects:(id)arg1 maximumBatchSize:(long long)arg2 flushHandler:(id /* block */)arg3;
- (void)_beginFlushTimer;
- (void)_endFlushTimer;
- (void)appendObject:(id)arg1;
- (void)dealloc;
- (id /* block */)flushHandler;
- (void)flushObjects;
- (id)flushQueue;
- (double)flushTimeInterval;
- (id)init;
- (void)insertObject:(id)arg1;
- (void)insertObjects:(id)arg1;
- (bool)isFlushTimerEnabled;
- (long long)maximumBatchSize;
- (id)mutableObjects;
- (void)setFlushHandler:(id /* block */)arg1;
- (void)setFlushQueue:(id)arg1;
- (void)setFlushTimeInterval:(double)arg1;
- (void)setFlushTimerEnabled:(bool)arg1;
- (void)setMaximumBatchSize:(long long)arg1;
- (void)setMutableObjects:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)syncQueue;
- (id)timer;

@end
