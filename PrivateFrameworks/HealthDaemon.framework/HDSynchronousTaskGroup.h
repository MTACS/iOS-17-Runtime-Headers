
@interface HDSynchronousTaskGroup : NSObject {
    <HDSynchronousTaskGroupDelegate> * _delegate;
    id /* block */  _didFinish;
    NSMutableArray * _errors;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _success;
    _Atomic int  _taskCount;
}

@property <HDSynchronousTaskGroupDelegate> *delegate;
@property (copy) id /* block */ didFinish;
@property (readonly) int taskCount;

- (void).cxx_destruct;
- (long long)beginTask;
- (id)delegate;
- (id /* block */)didFinish;
- (void)failTaskWithError:(id)arg1;
- (void)finishTask;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setDidFinish:(id /* block */)arg1;
- (int)taskCount;

@end
