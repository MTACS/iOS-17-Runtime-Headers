
@interface NTKJetsamMonitor : NSObject {
    NTKJetsamInfoFetcher * _fetcher;
    NSObject<OS_dispatch_queue> * _monitorQ;
    NSObject<OS_dispatch_source> * _monitorTimer;
    int  _transactionCount;
}

+ (id)sharedJetsamMonitor;

- (void).cxx_destruct;
- (void)decrementTransactionCount;
- (void)incrementTransactionCount;
- (id)init;

@end
