
@interface NSCloudKitMirroringDelegatePreJazzkonMetadata : NSObject {
    NSString * _ckIdentityRecordName;
    bool  _hasChanges;
    bool  _hasCheckedCKIdentity;
    bool  _hasInitializedDatabaseSubscription;
    bool  _hasInitializedZone;
    bool  _hasInitializedZoneSubscription;
    NSDictionary * _keyToPreviousServerChangeToken;
    NSPersistentHistoryToken * _lastHistoryToken;
    bool  _loaded;
    NSPersistentStore * _store;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithStore:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
