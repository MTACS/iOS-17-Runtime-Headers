
@interface BWMemoryPool : NSObject {
    unsigned int  _flushAssertionCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _flushAssertionLock;
    IOSurfaceMemoryPool * _pool;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) unsigned long long poolIdentifier;

+ (void)initialize;
+ (id)sharedMemoryPool;

- (void)_addFlushAssertion;
- (void)_removeFlushAssertion;
- (void)dealloc;
- (void)disable;
- (int)disableForCaptureDevice:(id)arg1;
- (int)disableForCaptureStream:(id)arg1;
- (void)disableWithCompletionHandler:(id /* block */)arg1;
- (int)enableForCaptureDevice:(id)arg1;
- (int)enableForCaptureStream:(id)arg1;
- (void)enableForPixelBufferAttributes:(id)arg1;
- (void)ensureMemoryAsyncWithSize:(unsigned long long)arg1;
- (void)flush;
- (bool)getInUseFootprint:(unsigned long long*)arg1 andOutOfUseFootprint:(unsigned long long*)arg2;
- (id)init;
- (id)newFlushAssertion:(id)arg1;
- (id)newMTLBufferWithLength:(unsigned long long)arg1 forDevice:(id)arg2;
- (unsigned long long)poolIdentifier;

@end
