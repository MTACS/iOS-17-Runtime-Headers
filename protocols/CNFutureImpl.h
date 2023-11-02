
@protocol CNFutureImpl <NSObject>

@required

- (void)addFailureBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addSuccessBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*
- (bool)isCancelled;
- (bool)isFinished;
- (id)resultBeforeDate:(NSDate *)arg1 error:(id*)arg2;
- (void)updateDescriptionWithBuilder:(CNDescriptionBuilder *)arg1;

@optional

- (void)_flushCompletionBlocks;
- (bool)cancel;
- (bool)finishWithResult:(id)arg1 error:(NSError *)arg2;

@end
