
@interface SSTransactionStore : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSCountedSet * _transactionCount;
    NSMutableDictionary * _transactionStore;
}

+ (id)defaultStore;

- (void).cxx_destruct;
- (id)init;
- (void)releaseKeepAliveWithTransactionID:(id)arg1;
- (void)takeKeepAliveWithTransactionID:(id)arg1;

@end
