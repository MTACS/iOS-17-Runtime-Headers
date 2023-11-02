
@interface BWDeferredContainerManagerBase : NSObject {
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _timerQueue;
}

+ (void)initialize;

- (void)dealloc;
- (int)deleteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2;
- (id)initWithQueuePriority:(unsigned int)arg1;
- (id)manifestForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 err:(int*)arg3;
- (id)manifestsForApplicationID:(id)arg1 err:(int*)arg2;

@end
