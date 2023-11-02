
@interface CalCancelablePerformSelector : NSObject <CalCancelable> {
    id /* block */  _block;
    NSRunLoop * _runloop;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, retain) NSRunLoop *runloop;

- (void).cxx_destruct;
- (void)_performBlock:(id /* block */)arg1;
- (id /* block */)block;
- (void)cancel;
- (id)initWithBlock:(id /* block */)arg1;
- (void)performAfterDelay:(double)arg1;
- (id)runloop;
- (void)setBlock:(id /* block */)arg1;
- (void)setRunloop:(id)arg1;

@end
