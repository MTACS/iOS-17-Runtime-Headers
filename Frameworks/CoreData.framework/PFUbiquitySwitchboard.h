
@interface PFUbiquitySwitchboard : NSObject {
    NSRecursiveLock * _registrationLock;
    NSMutableDictionary * _rootLocationToLocalPeerIDToFilePresenters;
    NSMutableDictionary * _rootLocationToLocalPeerIDToPreviousEntries;
    NSMutableDictionary * _storeNameToLocalPeerIDToEntry;
}

+ (void)initialize;

- (void)coordinatorWillRemoveStore:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;

@end
