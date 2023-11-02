
@interface STSCASessionStats : NSObject {
    long long  _totalSuccessfulTransactionsInSession;
    long long  _totalTransactionsInSession;
}

@property (nonatomic) long long totalSuccessfulTransactionsInSession;
@property (nonatomic) long long totalTransactionsInSession;

- (id)init;
- (void)postReaderSessionEvent;
- (void)setTotalSuccessfulTransactionsInSession:(long long)arg1;
- (void)setTotalTransactionsInSession:(long long)arg1;
- (long long)totalSuccessfulTransactionsInSession;
- (long long)totalTransactionsInSession;

@end
