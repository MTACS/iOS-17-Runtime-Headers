
@interface CXCallController : NSObject {
    CXCallObserver * _callObserver;
    NSObject<OS_dispatch_queue> * _completionQueue;
}

@property (nonatomic, retain) CXCallObserver *callObserver;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *completionQueue;

- (void).cxx_destruct;
- (void)_requestTransaction:(id)arg1 completion:(id /* block */)arg2;
- (id)callObserver;
- (id)completionQueue;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)requestTransaction:(id)arg1 completion:(id /* block */)arg2;
- (void)requestTransactionWithAction:(id)arg1 completion:(id /* block */)arg2;
- (void)requestTransactionWithActions:(id)arg1 completion:(id /* block */)arg2;
- (void)setCallObserver:(id)arg1;

@end
