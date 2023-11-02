
@interface PFUbiquitySaveSnapshot : NSObject {
    NSString * _exportingPeerID;
    NSString * _localPeerID;
    NSString * _modelVersionHash;
    NSMutableDictionary * _storeNameToStoreSaveSnapshots;
    NSDate * _transactionDate;
}

- (void)dealloc;
- (id)description;
- (id)initWithSaveNotification:(id)arg1 withLocalPeerID:(id)arg2;
- (id)initWithTransactionLog:(id)arg1;

@end
