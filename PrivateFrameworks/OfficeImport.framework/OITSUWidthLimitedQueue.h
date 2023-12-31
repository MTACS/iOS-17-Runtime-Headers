
@interface OITSUWidthLimitedQueue : NSObject {
    int  mLimit;
    NSObject<OS_dispatch_queue> * mManagerQueue;
    int  mReaderCount;
    NSObject<OS_dispatch_queue> * mTargetQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  mUnfairLock;
}

- (void)dealloc;
- (id)init;
- (id)initWithLimit:(unsigned long long)arg1;
- (void)performAsync:(id /* block */)arg1;
- (void)performSync:(id /* block */)arg1;
- (id)targetDispatchQueue;

@end
