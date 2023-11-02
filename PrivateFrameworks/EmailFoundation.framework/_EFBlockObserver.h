
@interface _EFBlockObserver : EFObserver {
    id /* block */  _completionBlock;
    id /* block */  _failureBlock;
    id /* block */  _resultBlock;
}

- (void).cxx_destruct;
- (id)initWithResultBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;

@end
