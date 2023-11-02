
@interface _MTSerialQueueScheduler : NSObject <MTScheduler> {
    NSObject<OS_dispatch_queue> * _internalQueue;
    <NAScheduler> * _internalScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, readonly) <NAScheduler> *internalScheduler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)initWithQueue:(id)arg1;
- (id)internalQueue;
- (id)internalScheduler;
- (void)performBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1;
- (void)performSyncBlock:(id /* block */)arg1;

@end
