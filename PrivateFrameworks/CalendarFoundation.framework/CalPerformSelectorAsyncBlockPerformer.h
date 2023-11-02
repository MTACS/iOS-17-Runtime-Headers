
@interface CalPerformSelectorAsyncBlockPerformer : NSObject <CalAsyncBlockPerformer>

- (id)performAfterDelay:(double)arg1 block:(id /* block */)arg2;
- (id)performAsync:(id /* block */)arg1;

@end
