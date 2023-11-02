
@protocol EFFuture <EFCancelable>

@required

- (void)addFailureBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addSuccessBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*
- (void)always:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<EFFutureDelegate> *)delegate;
- (bool)isCancelled;
- (bool)isFinished;
- (<EFFuture> *)map:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, id /* block */, id, void*
- (void)onScheduler:(void *)arg1 addFailureBlock:(void *)arg2; // needs 2 arg types, found 7: <EFScheduler> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)onScheduler:(void *)arg1 addSuccessBlock:(void *)arg2; // needs 2 arg types, found 7: <EFScheduler> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*
- (void)onScheduler:(void *)arg1 always:(void *)arg2; // needs 2 arg types, found 6: <EFScheduler> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<EFFuture> *)onScheduler:(void *)arg1 map:(void *)arg2; // needs 2 arg types, found 7: <EFScheduler> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, id /* block */, id, void*
- (<EFFuture> *)onScheduler:(void *)arg1 recover:(void *)arg2; // needs 2 arg types, found 7: <EFScheduler> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <EFFuture> *, id /* block */, NSError *, void*
- (<EFFuture> *)onScheduler:(void *)arg1 then:(void *)arg2; // needs 2 arg types, found 7: <EFScheduler> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <EFFuture> *, id /* block */, id, void*
- (<EFFuture> *)recover:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <EFFuture> *, id /* block */, NSError *, void*
- (id)result;
- (id)result:(id*)arg1;
- (id)resultBeforeDate:(NSDate *)arg1 error:(id*)arg2;
- (id)resultIfAvailable;
- (id)resultIfAvailable:(id*)arg1;
- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;
- (void)setDelegate:(id <EFFutureDelegate>)arg1;
- (<EFFuture> *)then:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <EFFuture> *, id /* block */, id, void*
- (bool)tryCancel;

@end
