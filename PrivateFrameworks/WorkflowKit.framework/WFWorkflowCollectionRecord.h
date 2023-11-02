
@interface WFWorkflowCollectionRecord : WFRecord {
    NSData * _cloudKitFolderRecordMetadata;
    NSData * _cloudKitOrderingRecordMetadata;
    NSOrderedSet * _collectionOrdering;
    bool  _deleted;
    bool  _folder;
    WFWorkflowIcon * _icon;
    NSOrderedSet * _lastRemoteCollectionOrdering;
    NSOrderedSet * _lastRemoteCollectionOrderingSubset;
    NSOrderedSet * _lastRemoteShortcutOrdering;
    NSOrderedSet * _lastRemoteShortcutOrderingSubset;
    long long  _lastSyncedEncryptedSchemaVersion;
    long long  _lastSyncedHash;
    NSString * _name;
    NSOrderedSet * _shortcutOrdering;
    long long  _wantedEncryptedSchemaVersion;
}

@property (nonatomic, copy) NSData *cloudKitFolderRecordMetadata;
@property (nonatomic, copy) NSData *cloudKitOrderingRecordMetadata;
@property (nonatomic, copy) NSOrderedSet *collectionOrdering;
@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (getter=isFolder, nonatomic, readonly) bool folder;
@property (nonatomic, retain) WFWorkflowIcon *icon;
@property (nonatomic, copy) NSOrderedSet *lastRemoteCollectionOrdering;
@property (nonatomic, copy) NSOrderedSet *lastRemoteCollectionOrderingSubset;
@property (nonatomic, copy) NSOrderedSet *lastRemoteShortcutOrdering;
@property (nonatomic, copy) NSOrderedSet *lastRemoteShortcutOrderingSubset;
@property (nonatomic) long long lastSyncedEncryptedSchemaVersion;
@property (nonatomic) long long lastSyncedHash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSOrderedSet *shortcutOrdering;
@property (nonatomic) long long wantedEncryptedSchemaVersion;

- (void).cxx_destruct;
- (id)cloudKitFolderRecordMetadata;
- (id)cloudKitOrderingRecordMetadata;
- (id)collectionOrdering;
- (long long)computedSyncHash;
- (id)icon;
- (bool)isDeleted;
- (bool)isFolder;
- (id)lastRemoteCollectionOrdering;
- (id)lastRemoteCollectionOrderingSubset;
- (id)lastRemoteShortcutOrdering;
- (id)lastRemoteShortcutOrderingSubset;
- (long long)lastSyncedEncryptedSchemaVersion;
- (long long)lastSyncedHash;
- (id)name;
- (bool)saveChangesToStorage:(id)arg1 error:(id*)arg2;
- (void)setCloudKitFolderRecordMetadata:(id)arg1;
- (void)setCloudKitOrderingRecordMetadata:(id)arg1;
- (void)setCollectionOrdering:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setLastRemoteCollectionOrdering:(id)arg1;
- (void)setLastRemoteCollectionOrderingSubset:(id)arg1;
- (void)setLastRemoteShortcutOrdering:(id)arg1;
- (void)setLastRemoteShortcutOrderingSubset:(id)arg1;
- (void)setLastSyncedEncryptedSchemaVersion:(long long)arg1;
- (void)setLastSyncedHash:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setShortcutOrdering:(id)arg1;
- (void)setWantedEncryptedSchemaVersion:(long long)arg1;
- (id)shortcutOrdering;
- (long long)wantedEncryptedSchemaVersion;

@end
