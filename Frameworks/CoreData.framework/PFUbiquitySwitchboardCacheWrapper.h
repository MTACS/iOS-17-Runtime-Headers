
@interface PFUbiquitySwitchboardCacheWrapper : NSObject {
    bool  _allowSchedulingOfReceiptFileWrites;
    PFUbiquityKnowledgeVector * _baselineKV;
    PFUbiquityGlobalObjectIDCache * _globalIDCache;
    PFUbiquityKnowledgeVector * _kv;
    NSString * _localPeerID;
    PFUbiquityPeerRangeCache * _peerRangeCache;
    PFUbiquityPeerReceipt * _peerReceipt;
    bool  _pendingReceiptWrite;
    NSLock * _receiptFileLock;
    NSString * _storeName;
    PFUbiquityTransactionHistoryCache * _transactionHistoryCache;
    PFUbiquityTransactionLogCache * _transactionLogCache;
    PFUbiquityLocation * _ubiquityRootLocation;
}

- (void)_appWillResignActive:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithStoreName:(id)arg1 privateStore:(id)arg2 forLocalPeerID:(id)arg3 andUbiquityRootLocation:(id)arg4;

@end
