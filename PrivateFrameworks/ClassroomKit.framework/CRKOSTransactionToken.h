
@interface CRKOSTransactionToken : NSObject <CRKCancelable> {
    id /* block */  _completionHandler;
    NSObject<OS_os_transaction> * _underlyingTransaction;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSObject<OS_os_transaction> *underlyingTransaction;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)initWithReason:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setUnderlyingTransaction:(id)arg1;
- (id)underlyingTransaction;

@end
