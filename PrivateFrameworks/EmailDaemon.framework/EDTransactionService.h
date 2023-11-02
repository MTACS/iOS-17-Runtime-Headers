
@interface EDTransactionService : NSObject {
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSString * _serviceName;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, retain) NSString *serviceName;

- (void).cxx_destruct;
- (void)endTransaction:(id)arg1;
- (bool)hasPendingTransactions;
- (id)initWithServiceName:(id)arg1;
- (void)resetPendingTransactions;
- (id)serialQueue;
- (id)serviceName;
- (void)setSerialQueue:(id)arg1;
- (void)setServiceName:(id)arg1;
- (id)startTransaction;

@end
