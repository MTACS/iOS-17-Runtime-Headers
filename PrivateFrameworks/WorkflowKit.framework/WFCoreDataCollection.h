
@interface WFCoreDataCollection : NSManagedObject <WFRecordStorage>

@property (nonatomic, retain) NSData *cloudKitFolderRecordMetadata;
@property (nonatomic, retain) NSData *cloudKitOrderingRecordMetadata;
@property (nonatomic, copy) NSArray *collectionOrdering;
@property (nonatomic, retain) NSOrderedSet *collections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSOrderedSet *deserializedLastRemoteCollectionOrdering;
@property (nonatomic, copy) NSOrderedSet *deserializedLastRemoteCollectionOrderingSubset;
@property (nonatomic, copy) NSOrderedSet *deserializedLastRemoteShortcutOrdering;
@property (nonatomic, copy) NSOrderedSet *deserializedLastRemoteShortcutOrderingSubset;
@property (getter=isFolder, nonatomic, readonly) bool folder;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFCoreDataWorkflowIcon *icon;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSData *lastRemoteCollectionOrderingData;
@property (nonatomic, retain) NSData *lastRemoteCollectionOrderingSubsetData;
@property (nonatomic, retain) NSData *lastRemoteShortcutOrderingData;
@property (nonatomic, retain) NSData *lastRemoteShortcutOrderingSubsetData;
@property (nonatomic) long long lastSyncedEncryptedSchemaVersion;
@property (nonatomic) long long lastSyncedHash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSSet *parents;
@property (nonatomic, copy) NSArray *shortcutOrdering;
@property (nonatomic, retain) NSOrderedSet *shortcuts;
@property (readonly) Class superclass;
@property (nonatomic) bool tombstoned;
@property (nonatomic) long long wantedEncryptedSchemaVersion;
@property (nonatomic, retain) WFWorkflowIcon *workflowIcon;

+ (id)descriptorFetchRequest;
+ (id)fetchRequest;
+ (id)recordPropertyMap;

- (id)collectionOrdering;
- (id)descriptor;
- (id)deserializedLastRemoteCollectionOrdering;
- (id)deserializedLastRemoteCollectionOrderingSubset;
- (id)deserializedLastRemoteShortcutOrdering;
- (id)deserializedLastRemoteShortcutOrderingSubset;
- (bool)isFolder;
- (void)setCollectionOrdering:(id)arg1;
- (void)setDeserializedLastRemoteCollectionOrdering:(id)arg1;
- (void)setDeserializedLastRemoteCollectionOrderingSubset:(id)arg1;
- (void)setDeserializedLastRemoteShortcutOrdering:(id)arg1;
- (void)setDeserializedLastRemoteShortcutOrderingSubset:(id)arg1;
- (void)setShortcutOrdering:(id)arg1;
- (void)setWorkflowIcon:(id)arg1;
- (id)shortcutOrdering;
- (id)workflowIcon;

@end
