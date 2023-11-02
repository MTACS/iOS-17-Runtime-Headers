
@interface AXElementTransactionLogging : NSObject {
    NSMutableDictionary * _pendingTransactions;
    NSMutableDictionary * _pidsToBundleIDs;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedLogger;
+ (id)transactionSummary;

- (void).cxx_destruct;
- (id)_appNameForUIElement:(struct __AXUIElement { }*)arg1 pid:(int)arg2;
- (void)failedTransaction:(unsigned long long)arg1;
- (void)finishedTransaction:(unsigned long long)arg1 withValue:(void*)arg2;
- (void)finishedTransaction:(unsigned long long)arg1 withValue:(void*)arg2 amortization:(double)arg3;
- (id)init;
- (unsigned long long)willFetchAttribute:(long long)arg1 forElement:(struct __AXUIElement { }*)arg2;

@end
