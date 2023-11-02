
@interface CXVoicemailController : NSObject {
    NSObject<OS_dispatch_queue> * _completionQueue;
    CXVoicemailObserver * _voicemailObserver;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, readonly) CXVoicemailObserver *voicemailObserver;

- (void).cxx_destruct;
- (void)_requestTransaction:(id)arg1 completion:(id /* block */)arg2;
- (id)completionQueue;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)requestTransaction:(id)arg1 completion:(id /* block */)arg2;
- (void)requestTransactionWithAction:(id)arg1 completion:(id /* block */)arg2;
- (void)requestTransactionWithActions:(id)arg1 completion:(id /* block */)arg2;
- (id)voicemailObserver;

@end
