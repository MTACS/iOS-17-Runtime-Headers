
@interface _CNBlockFutureImpl : NSObject <CNFutureImpl> {
    CNSuspendableSchedulerDecorator * _blockScheduler;
    CNFutureResult * _futureResult;
    bool  _queueSuspended;
    NSConditionLock * _stateLock;
    bool  _workBlockScheduled;
}

@property (nonatomic, readonly) CNSuspendableSchedulerDecorator *blockScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSConditionLock *stateLock;
@property (readonly) Class superclass;
@property (nonatomic) bool workBlockScheduled;

+ (id)implWithBlock:(id /* block */)arg1;
+ (id)implWithSchedulerProvider:(id)arg1 block:(id /* block */)arg2;
+ (id)lazyImplWithBlock:(id /* block */)arg1;
+ (id)lazyImplWithSchedulerProvider:(id)arg1 block:(id /* block */)arg2;
+ (id)log;

- (void).cxx_destruct;
- (void)_flushCompletionBlocks;
- (bool)_nts_isFinished;
- (void)addFailureBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (void)addWriterBlock:(id /* block */)arg1;
- (id)blockScheduler;
- (bool)cancel;
- (void)dealloc;
- (bool)finishWithResult:(id)arg1 error:(id)arg2;
- (id)futureResult;
- (id)futureResultFromAsynchronousLookupBeforeDate:(id)arg1 error:(id*)arg2;
- (id)futureResultFromImmediateLookup;
- (void)implicitlyResumeQueue;
- (id)init;
- (id)initWithSchedulerProvider:(id)arg1;
- (bool)isCancelled;
- (bool)isFinished;
- (bool)nts_isFinished;
- (bool)nts_mayResumeQueue;
- (void)nts_resumeQueue;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (void)resumeQueue;
- (void)setWorkBlockScheduled:(bool)arg1;
- (id)stateLock;
- (void)updateDescriptionWithBuilder:(id)arg1;
- (bool)workBlockScheduled;

@end
