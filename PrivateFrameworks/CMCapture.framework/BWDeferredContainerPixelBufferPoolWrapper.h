
@interface BWDeferredContainerPixelBufferPoolWrapper : NSObject {
    BWPixelBufferPool * _pool;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

- (void)dealloc;
- (void)flushToMinimumCapacity:(unsigned long long)arg1;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3;
- (void)signal;

@end
