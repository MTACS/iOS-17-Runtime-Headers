
@interface SKADatabaseProvider : NSObject <SKADatabaseProviding> {
    CKContainer * _ckContainer;
    <SKADatabaseProvidingDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _historyProcessingQueue;
    NSPersistentContainer * _persistentContainer;
}

@property (nonatomic, retain) CKContainer *ckContainer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKADatabaseProvidingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *historyProcessingQueue;
@property (nonatomic, retain) NSPersistentContainer *persistentContainer;
@property (readonly) Class superclass;

+ (id)logger;

- (void).cxx_destruct;
- (id)appTransactionAuthorName;
- (id)ckContainer;
- (id)ckContainerIdentifier;
- (id)cloudDatabaseFileURL;
- (id)cloudPersistentStoreDescription;
- (id)containerName;
- (id)createCkContainer;
- (id)createPersistentContainer;
- (id)databaseDirectoryURL;
- (bool)databaseHasBeenCreated;
- (id)delegate;
- (void)deviceToDeviceEncryptedDatabaseCapableWithCompletion:(id /* block */)arg1;
- (id)existingManagedObjectWithID:(id)arg1 managedObjectContext:(id)arg2;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForChannel:(id)arg1 managedObjectContext:(id)arg2;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForReceivedInvitation:(id)arg1 managedObjectContext:(id)arg2;
- (id)fileManager;
- (void)handlePersistentStoreRemoteChangeNotification:(id)arg1;
- (id)historyProcessingQueue;
- (id)initWithDelegate:(id)arg1;
- (id)lastProcessedPersistentHistoryToken;
- (id)lastProcessedPersistentHistoryTokenFileURL;
- (id)localDatabaseFileURL;
- (id)localPersistentStoreDescription;
- (id)newBackgroundContext;
- (bool)overrideDeviceEncryptionCheck;
- (id)persistentContainer;
- (void)processPersistentStoreRemoteChanges;
- (void)setCkContainer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHistoryProcessingQueue:(id)arg1;
- (void)setLastProcessedPersistentHistoryToken:(id)arg1;
- (void)setPersistentContainer:(id)arg1;

@end
