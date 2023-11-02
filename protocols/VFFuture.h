
@protocol VFFuture <VFCancelable>

@required

- (void)addFailureBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addSuccessBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*
- (<VFFutureDelegate> *)delegate;
- (bool)isCancelled;
- (bool)isFinished;
- (id)result;
- (id)result:(id*)arg1;
- (id)resultBeforeDate:(NSDate *)arg1 error:(id*)arg2;
- (id)resultIfAvailable;
- (id)resultIfAvailable:(id*)arg1;
- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;
- (void)setDelegate:(id <VFFutureDelegate>)arg1;
- (bool)tryCancel;

@end
