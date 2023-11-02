
@interface CalCancelableRunLoopPerformBlock : NSObject <CalCancelable> {
    id /* block */  _block;
    NSRunLoop * _runLoop;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, readonly) NSRunLoop *runLoop;

- (void).cxx_destruct;
- (void)_performBlock:(id /* block */)arg1;
- (id /* block */)block;
- (void)cancel;
- (id)initWithBlock:(id /* block */)arg1 inRunLoop:(id)arg2;
- (void)performAfterDelay:(double)arg1;
- (id)runLoop;
- (void)setBlock:(id /* block */)arg1;

@end
