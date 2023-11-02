
@interface SCWStartupQueue : NSObject {
    long long  _startupTaskDepth;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _startupTaskDepthLock;
    SCWAsyncSerialQueue * _startupTaskQueue;
}

@property (nonatomic) long long startupTaskDepth;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } startupTaskDepthLock;
@property (nonatomic, retain) SCWAsyncSerialQueue *startupTaskQueue;

- (void).cxx_destruct;
- (void)enqueueStartupBlock:(id /* block */)arg1;
- (void)executeAfterStartup:(id /* block */)arg1;
- (id)initWithDeferredStartup:(bool)arg1;
- (void)setStartupTaskDepth:(long long)arg1;
- (void)setStartupTaskDepthLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setStartupTaskQueue:(id)arg1;
- (long long)startupTaskDepth;
- (struct os_unfair_lock_s { unsigned int x1; })startupTaskDepthLock;
- (id)startupTaskQueue;

@end
