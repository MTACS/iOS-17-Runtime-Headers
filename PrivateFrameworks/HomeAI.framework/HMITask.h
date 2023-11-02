
@interface HMITask : HMFOperation {
    id /* block */  _progressBlock;
    int  _taskID;
}

@property (copy) id /* block */ progressBlock;
@property (readonly) NSDictionary *results;
@property (readonly) int taskID;

- (void).cxx_destruct;
- (id)initWithTaskID:(int)arg1;
- (id)initWithTaskID:(int)arg1 timeout:(double)arg2;
- (void)main;
- (void)mainInsideAutoreleasePool;
- (id /* block */)progressBlock;
- (id)results;
- (void)setProgressBlock:(id /* block */)arg1;
- (int)taskID;

@end
