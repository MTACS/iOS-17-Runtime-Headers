
@interface PFUbiquityExportContext : NSObject {
    NSString * _localPeerID;
    NSMutableDictionary * _storeNameToStoreExportContext;
    PFUbiquityLocation * _ubiquityRootLocation;
    NSMutableDictionary * _ubiquityRootPathToStack;
    bool  _useLocalStorage;
}

- (void)dealloc;
- (id)description;
- (id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;

@end
