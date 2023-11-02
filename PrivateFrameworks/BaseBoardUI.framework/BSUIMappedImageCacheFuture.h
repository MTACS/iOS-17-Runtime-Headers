
@interface BSUIMappedImageCacheFuture : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _lock_workBlock;
    bool  _lock_workCompletionWasCalled;
    UIImage * _postlock_cachedImage;
    NSThread * _submissionThread;
    BSAtomicSignal * _submitted;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
