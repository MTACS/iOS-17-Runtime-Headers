
@interface PFUbiquityTransactionLogCache : NSObject {
    PFUbiquityGlobalObjectIDCache * _gidCache;
    NSString * _localPeerID;
    NSMutableDictionary * _transactionLogCache;
    NSRecursiveLock * _transactionLogCacheLock;
}

- (void)dealloc;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 andGlobalIDCache:(id)arg2;

@end
