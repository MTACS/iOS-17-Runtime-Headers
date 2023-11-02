
@interface DYFutureOperation : DYFuture {
    id /* block */  _block;
}

+ (id)operationWithBlock:(id /* block */)arg1;

- (void)_start_NOLOCK;
- (void)addDependency:(id)arg1;
- (void)dealloc;
- (id)dependencies;
- (bool)isExecuting;
- (bool)isFinished;
- (void)start;

@end
