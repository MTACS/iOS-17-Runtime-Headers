
@interface PFUbiquityPeerRangeCache : NSObject {
    NSMutableDictionary * _allEntityRanges;
    NSMutableDictionary * _cachedRanges;
    bool  _cachedStorePeerRanges;
    NSString * _localPeerID;
    NSPersistentStore * _privateStore;
    NSString * _storeName;
    NSMutableDictionary * _translatedGlobalIDs;
}

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)initWithPrivateStore:(id)arg1 storeName:(id)arg2 andLocalPeerID:(id)arg3;

@end
