
@interface FCAsyncBlockOperation : NSOperation {
    id /* block */  _block;
    _Atomic bool  _executing;
    _Atomic bool  _finished;
}

@property (nonatomic, readonly, copy) id /* block */ block;

+ (id)asyncBlockOperationWithBlock:(id /* block */)arg1;
+ (id)asyncBlockOperationWithMainThreadBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)start;

@end
