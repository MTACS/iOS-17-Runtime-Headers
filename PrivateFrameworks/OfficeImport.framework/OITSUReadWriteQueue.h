
@interface OITSUReadWriteQueue : NSObject {
    NSObject<OS_dispatch_semaphore> * mCanEnqueueReaders;
    NSObject<OS_dispatch_queue> * mGlobalQueue;
    NSObject<OS_dispatch_group> * mInFlightReaders;
    NSObject<OS_dispatch_group> * mInFlightWriters;
}

- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (void)performAsyncWrite:(id /* block */)arg1;
- (void)performSyncRead:(id /* block */)arg1;
- (void)performSyncWrite:(id /* block */)arg1;
- (void)waitOnInFlightWriters;

@end
