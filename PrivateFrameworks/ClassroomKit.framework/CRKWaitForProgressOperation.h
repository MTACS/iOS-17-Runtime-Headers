
@interface CRKWaitForProgressOperation : CATOperation {
    long long  _expctedCompletedUnitCount;
    long long  _expectedTotalUnitCount;
    CATOperation * _operation;
    CATOperationQueue * _operationQueue;
}

@property (nonatomic, readonly) long long expctedCompletedUnitCount;
@property (nonatomic, readonly) long long expectedTotalUnitCount;
@property (nonatomic, readonly) CATOperation *operation;
@property (nonatomic, readonly) CATOperationQueue *operationQueue;

- (void).cxx_destruct;
- (void)cancel;
- (long long)expctedCompletedUnitCount;
- (long long)expectedTotalUnitCount;
- (id)initWithOperationQueue:(id)arg1 operation:(id)arg2 expectedCompletedUnitCount:(long long)arg3 expectedTotalUnitCount:(long long)arg4;
- (bool)isAsynchronous;
- (void)main;
- (void)observedOperationDidFail:(id)arg1;
- (void)observedOperationDidProgress:(id)arg1;
- (id)operation;
- (id)operationQueue;

@end
