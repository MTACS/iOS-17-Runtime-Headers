
@interface REExpectation : NSObject {
    _Atomic int  _count;
    NSObject<OS_dispatch_group> * _group;
}

@property (nonatomic, readonly) long long outstandingOperations;

- (void).cxx_destruct;
- (void)beginOperation;
- (void)endOperation;
- (id)init;
- (void)notifyOperationsCompleteOnQueue:(id)arg1 block:(id /* block */)arg2;
- (void)notifyOperationsCompleteOrPerformUsingQueue:(id)arg1 block:(id /* block */)arg2;
- (long long)outstandingOperations;

@end
