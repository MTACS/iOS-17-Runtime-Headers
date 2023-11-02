
@interface PFUbiquityStoreMetadataMedic : NSObject {
    NSString * _localPeerID;
    NSPersistentStore * _store;
    NSString * _storeName;
    PFUbiquityLocation * _ubiquityRootLocation;
}

- (void)dealloc;
- (id)initWithStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;

@end
