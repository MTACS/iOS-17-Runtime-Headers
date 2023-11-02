
@interface DATransactionMonitor : NSObject {
    int  _transactionCount;
    <DATransactionMonitorDelegate> * _transactionMonitorDelegate;
    NSMutableArray * _transactions;
}

@property (nonatomic) int transactionCount;
@property (nonatomic) <DATransactionMonitorDelegate> *transactionMonitorDelegate;
@property (nonatomic, retain) NSMutableArray *transactions;

+ (id)sharedTransactionMonitor;

- (void).cxx_destruct;
- (void)decrementTransactionCountForTransaction:(id)arg1;
- (void)incrementTransactionCountForTransaction:(id)arg1;
- (id)init;
- (void)setTransactionCount:(int)arg1;
- (void)setTransactionMonitorDelegate:(id)arg1;
- (void)setTransactions:(id)arg1;
- (int)transactionCount;
- (id)transactionMonitorDelegate;
- (id)transactions;

@end
