
@interface PFUbiquityImportOperation : NSOperation {
    NSObject * _delegate;
    NSLock * _delegateLock;
    NSString * _localPeerID;
    bool  _lockedDelegateLock;
    NSPersistentStore * _store;
    NSString * _storeName;
    PFUbiquityLocation * _ubiquityRootLocation;
}

@property NSObject *delegate;

- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)initWithStoreName:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)retainedDelegate;
- (void)setDelegate:(id)arg1;
- (void)storeWillBeRemoved:(id)arg1;

@end
