
@interface SSObserver : NSObject {
    id /* block */  _completionBlock;
    id /* block */  _failureBlock;
    id /* block */  _resultBlock;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, copy) id /* block */ failureBlock;
@property (nonatomic, copy) id /* block */ resultBlock;

+ (id)observerWithResultBlock:(id /* block */)arg1;
+ (id)observerWithResultBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_sendCompletionUsingQueue:(id)arg1;
- (void)_sendFailure:(id)arg1 usingQueue:(id)arg2;
- (void)_sendResult:(id)arg1 usingQueue:(id)arg2;
- (id /* block */)completionBlock;
- (id /* block */)failureBlock;
- (id /* block */)resultBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setFailureBlock:(id /* block */)arg1;
- (void)setResultBlock:(id /* block */)arg1;

@end
