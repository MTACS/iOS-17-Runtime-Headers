
@interface EDConversationRemoteCloudKitStorage : NSObject <EDConversationRemoteStorage, EFLoggable, NSFetchedResultsControllerDelegate> {
    <EDConversationRemoteStorageDelegate> * _delegate;
    EDTransactionService * _exportTransaction;
    NSFetchedResultsController * _fetchedResultsController;
    NSPersistentHistoryToken * _historyToken;
    EDTransactionService * _importTransaction;
    bool  _initialized;
    EDCloudMirroringPersistentStore * _mirroringPersistentStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EDConversationRemoteStorageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EDTransactionService *exportTransaction;
@property (nonatomic, readonly) NSFetchedResultsController *fetchedResultsController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSPersistentHistoryToken *historyToken;
@property (nonatomic, retain) EDTransactionService *importTransaction;
@property (getter=isInitialized, nonatomic) bool initialized;
@property (getter=isMigratedFromKVSStorage, nonatomic) bool migratedFromKVSStorage;
@property (nonatomic, readonly) EDCloudMirroringPersistentStore *mirroringPersistentStore;
@property (readonly) Class superclass;

+ (id)cloudKitAPSTopics;
+ (id)log;

- (void).cxx_destruct;
- (void)_addOrUpdateConversationInfo:(id)arg1 managedObjectContext:(id)arg2;
- (id)_controlInManagedObjectContext:(id)arg1;
- (id)_conversationInfoWithObjectId:(id)arg1 managedObjectContext:(id)arg2;
- (id)_conversationInfoWithUUID:(id)arg1 managedObjectContext:(id)arg2;
- (id)_conversationInfosWithUUID:(id)arg1 managedObjectContext:(id)arg2;
- (void)_handleDidResetSyncDataNotification:(id)arg1;
- (void)_handleDuplicationsForConversationUUIDs:(id)arg1 managedObjectContext:(id)arg2;
- (void)_handlePushNotification:(id)arg1;
- (void)_handleWillResetSyncDataNotification:(id)arg1;
- (void)_initialSetup;
- (void)_recoverHistoryToken;
- (void)_removeConversationInfoWithId:(id)arg1 managedObjectContext:(id)arg2;
- (void)_removeConversationInfoWithObjectId:(id)arg1 save:(bool)arg2 managedObjectContext:(id)arg3;
- (void)_requestExportWithManagedObjectContext:(id)arg1;
- (void)_requestFirstSyncWithManagedObjectContext:(id)arg1;
- (void)_requestImportWithManagedObjectContext:(id)arg1;
- (void)_retrieveChangesSinceLastRequestInManagedObjectContext:(id)arg1;
- (id)_transactionHistorySinceToken:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3;
- (void)_updateConversationInfo:(id)arg1 withAnotherConversationInfo:(id)arg2;
- (id)allConversationInfosInManagedObjectContext:(id)arg1;
- (id)delegate;
- (id)dictionaryForConversationInfo:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (id)entityForConversationDictionary:(id)arg1 key:(id)arg2 managedObjectContext:(id)arg3;
- (id)enumerateChangeHistorySinceToken:(id)arg1 managedObjectContext:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)exportTransaction;
- (id)fetchedResultsController;
- (id)historyToken;
- (id)importTransaction;
- (id)initWithDelegate:(id)arg1;
- (bool)isInitialized;
- (bool)isMigratedFromKVSStorage;
- (id)mirroringPersistentStore;
- (void)persistHistoryToken;
- (void)refresh;
- (void)removeDictionaryForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setExportTransaction:(id)arg1;
- (void)setHistoryToken:(id)arg1;
- (void)setImportTransaction:(id)arg1;
- (void)setInitialized:(bool)arg1;
- (void)setMigratedFromKVSStorage:(bool)arg1;
- (id)storageName;
- (bool)synchronize;

@end
