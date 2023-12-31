
@interface TSDTilingLimitedQueue : NSObject {
    unsigned long long  mLimit;
    NSObject<OS_dispatch_queue> * mManagerQueue;
    unsigned long long  mReaderCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  mSpinLock;
    NSObject<OS_dispatch_queue> * mTargetQueue;
}

- (void)dealloc;
- (id)init;
- (id)initWithLimit:(unsigned long long)arg1;
- (void)performAsync:(id /* block */)arg1;

@end
