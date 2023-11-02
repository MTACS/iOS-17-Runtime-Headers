
@interface BDSOSTransaction : NSObject {
    <BDSOSTransactionDelegate> * _delegate;
    NSObject<OS_os_transaction> * _osTransaction;
}

@property (nonatomic) <BDSOSTransactionDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_os_transaction> *osTransaction;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)endTransaction;
- (id)initWithTransactionName:(const char *)arg1;
- (id)osTransaction;
- (void)setDelegate:(id)arg1;
- (void)setOsTransaction:(id)arg1;
- (void)transactionNeedsMoreTime;

@end
