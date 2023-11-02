
@interface _PFUbiquityRecordsExporter : NSObject {
    bool  _allowTempLogStorage;
    NSDate * _lastTransactionDate;
    NSString * _localPeerID;
    PFUbiquityLocation * _localRootLocation;
    bool  _pendingTempLogMove;
    NSMutableDictionary * _pendingTransactionsToStoreNameAndTransactionNumber;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSString * _storeName;
    bool  _throwOptimisticLockingException;
    NSLock * _transactionLock;
    PFUbiquityLocation * _ubiquityRootLocation;
    bool  _useLocalStorage;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (void)managedObjectContextDidSave:(id)arg1;

@end
