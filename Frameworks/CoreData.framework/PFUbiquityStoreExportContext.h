
@interface PFUbiquityStoreExportContext : NSObject {
    PFUbiquitySwitchboardCacheWrapper * _cacheWrapper;
    NSString * _localPeerID;
    NSSQLCore * _store;
    NSString * _storeName;
    NSMutableSet * _transactionEntries;
    PFUbiquityLocation * _ubiquityRootLocation;
}

- (void)dealloc;
- (id)description;
- (id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 forLocalPeerID:(id)arg3;

@end
