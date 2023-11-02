
@interface UIKeyboardTaskExecutionContext : NSObject {
    id /* block */  _continuation;
    UIKeyboardTaskQueue * _executionQueue;
    id  _info;
    UIKeyboardTaskExecutionContext * _parentExecutionContext;
    id /* block */  _pendingCompletionBlock;
}

@property (nonatomic, readonly) UIKeyboardTaskQueue *executionQueue;
@property (nonatomic, retain) id info;

- (void).cxx_destruct;
- (id)childWithContinuation:(id /* block */)arg1;
- (id)executionQueue;
- (id)info;
- (id)init;
- (id)initWithExecutionQueue:(id)arg1;
- (id)initWithParentContext:(id)arg1 continuation:(id /* block */)arg2;
- (void)returnExecutionToParent;
- (void)returnExecutionToParentWithInfo:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setPendingCompletionBlock:(id /* block */)arg1;
- (id /* block */)takeOwnershipOfPendingCompletionBlock;
- (void)transferExecutionToMainThreadWithTask:(id /* block */)arg1;

@end
