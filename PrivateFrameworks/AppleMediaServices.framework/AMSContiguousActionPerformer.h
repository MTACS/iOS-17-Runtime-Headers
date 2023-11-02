
@interface AMSContiguousActionPerformer : NSObject {
    void lock;
    void queue;
    void suspendableQueue;
}

- (void).cxx_destruct;
- (void)async:(id /* block */)arg1;
- (void)continueContiguousActionWithIdentifier:(unsigned long long)arg1 withBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)finishContiguousActionWithIdentifier:(unsigned long long)arg1;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (unsigned long long)performInitialContiguousActionWithBlock:(id /* block */)arg1;
- (void)sync:(id /* block */)arg1;

@end
