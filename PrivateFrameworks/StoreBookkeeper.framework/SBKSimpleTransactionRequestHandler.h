
@interface SBKSimpleTransactionRequestHandler : SBKRequestHandler {
    bool  _canceled;
    SBKTransactionController * _transactionController;
}

@property (nonatomic, readonly) bool canceled;
@property (nonatomic, readonly) SBKTransactionController *transactionController;

- (void).cxx_destruct;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (bool)canceled;
- (id)initWithBagContext:(id)arg1;
- (void)scheduleTransaction:(id)arg1 finishedBlock:(id /* block */)arg2;
- (void)timeout;
- (id)transactionController;

@end
