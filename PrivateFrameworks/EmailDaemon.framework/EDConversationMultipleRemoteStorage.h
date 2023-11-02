
@interface EDConversationMultipleRemoteStorage : NSObject <EDConversationRemoteStorage, EDConversationRemoteStorageDelegate, EFLoggable> {
    EDConversationRemoteCloudKitStorage * _cloudKitStorage;
    EDTransactionService * _dataReplicationTransaction;
    <EDConversationRemoteStorageDelegate> * _delegate;
    <EDConversationRemoteStorage> * _kvsStorage;
    NSObject<OS_dispatch_queue> * _privateQueue;
}

@property (nonatomic, retain) EDConversationRemoteCloudKitStorage *cloudKitStorage;
@property (nonatomic, retain) EDTransactionService *dataReplicationTransaction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EDConversationRemoteStorageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <EDConversationRemoteStorage> *kvsStorage;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *privateQueue;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)_handleStorageReady:(id)arg1;
- (void)_replicateAllContentFromStore:(id)arg1 toStore:(id)arg2 synchronize:(bool)arg3;
- (void)_saveChanges:(id)arg1 fromStorage:(id)arg2 toStorage:(id)arg3 synchronize:(bool)arg4;
- (id)cloudKitStorage;
- (void)conversationRemoteStorage:(id)arg1 didChangeEntries:(id)arg2 reason:(long long)arg3;
- (void)conversationRemoteStorageDidInitialize:(id)arg1;
- (void)conversationRemoteStorageDidResetData:(id)arg1;
- (void)conversationRemoteStorageWillResetData:(id)arg1;
- (id)dataReplicationTransaction;
- (id)delegate;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDelegate:(id)arg1;
- (bool)isInitialized;
- (id)kvsStorage;
- (id)privateQueue;
- (void)refresh;
- (void)removeDictionaryForKey:(id)arg1;
- (void)setCloudKitStorage:(id)arg1;
- (void)setDataReplicationTransaction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setKvsStorage:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (id)storageName;
- (bool)synchronize;

@end
