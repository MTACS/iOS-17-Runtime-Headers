
@interface NSFilePresenterAsynchronousOperation : NSOperation {
    id /* block */  _block;
    bool  _isExecuting;
    bool  _isFinished;
}

+ (id)operationWithBlock:(id /* block */)arg1;

- (void)finish;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)start;

@end
