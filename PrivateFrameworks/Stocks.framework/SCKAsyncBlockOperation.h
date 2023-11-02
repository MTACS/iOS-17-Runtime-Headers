
@interface SCKAsyncBlockOperation : NSOperation {
    id /* block */  _block;
    bool  _executing;
    bool  _finished;
}

@property (nonatomic, readonly, copy) id /* block */ block;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithBlock:(id /* block */)arg1;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)start;

@end
