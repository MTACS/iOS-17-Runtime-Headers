
@interface EDReadLaterCloudStorage : NSObject <EDMessageChangeHookResponder, EDReadLaterCloudStorageDateProvider, EMUbiquitouslyPersistedDictionaryDelegate> {
    EDPersistenceHookRegistry * _hookRegistry;
    EDMessagePersistence * _messagePersistence;
    <EMMutableDictionaryProtocol> * _persistentDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDPersistenceHookRegistry *hookRegistry;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dateFromDictionary:(id)arg1 forKey:(id)arg2;
- (id)_keyFormessage:(id)arg1;
- (id)_messageHashForKey:(id)arg1;
- (void)addEntryForMessage:(id)arg1 date:(id)arg2;
- (id)cloudStorageReadLaterDateForMessage:(id)arg1 displayDate:(id*)arg2;
- (id)hookRegistry;
- (id)initWithHookRegistry:(id)arg1;
- (id)initWithMutableDictionary:(id)arg1 hookRegistry:(id)arg2;
- (id)messagePersistence;
- (void)persistedDictionaryDidChangeRemotelyWithChangedItems:(id)arg1 deletedItems:(id)arg2;
- (void)persistenceDidChangeReadLaterDate:(id)arg1 messages:(id)arg2 changeIsRemote:(bool)arg3 generationWindow:(id)arg4;
- (void)persistenceDidUpdateDisplayDateForMessages:(id)arg1 changeIsRemote:(bool)arg2 generation:(long long)arg3;
- (void)removeEntryForMessage:(id)arg1;
- (void)updateDisplayDateForMessage:(id)arg1 displayDate:(id)arg2;

@end
