
@interface HKAsynchronousOperation : NSOperation {
    bool  _executing;
    bool  _finished;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _operationBlock;
    double  _startedTime;
}

@property (getter=isExecuting) bool executing;
@property (getter=isFinished) bool finished;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1 operationBlock:(id /* block */)arg2;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)start;

@end
