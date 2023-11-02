
@protocol EFPromise <NSObject>

@required

- (id /* block */)boolErrorCompletionHandlerAdapter:(void *)arg1; // needs 1 arg types, found 6: id /* block */, bool, NSError *, void*, id, SEL
- (id /* block */)completionHandlerAdapter:(void *)arg1; // needs 1 arg types, found 6: id /* block */, id, NSError *, void*, id, SEL
- (id /* block */)errorOnlyCompletionHandlerAdapter:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSError *, void*, id, SEL
- (bool)finishWithError:(NSError *)arg1;
- (void)finishWithFuture:(EFFuture *)arg1;
- (bool)finishWithResult:(id)arg1;
- (bool)finishWithResult:(id)arg1 error:(NSError *)arg2;
- (<EFObserver> *)firstResultObserverAdapter;
- (<EFObserver> *)resultsObserverAdapter;

@end
