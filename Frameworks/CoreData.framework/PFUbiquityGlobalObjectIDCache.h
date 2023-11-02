
@interface PFUbiquityGlobalObjectIDCache : NSObject {
    NSString * _localPeerID;
    NSMutableDictionary * _peerIDToEntityNameToPrimaryKey;
    NSRecursiveLock * _peerIDToEntityNameToPrimaryKeyLock;
    NSString * _storeName;
}

+ (id)stringValueFromArray:(id)arg1 atIndexDescribedByStringNumber:(id)arg2;

- (void)dealloc;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 forStoreName:(id)arg2;

@end
