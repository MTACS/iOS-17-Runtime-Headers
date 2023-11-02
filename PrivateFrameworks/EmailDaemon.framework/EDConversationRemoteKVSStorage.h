
@interface EDConversationRemoteKVSStorage : NSObject <EDConversationRemoteStorage, EFLoggable> {
    <EDConversationRemoteStorageDelegate> * _delegate;
    bool  _initialized;
    NSUbiquitousKeyValueStore * _kvStore;
    NSObject<OS_dispatch_queue> * _privateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EDConversationRemoteStorageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInitialized, nonatomic) bool initialized;
@property (nonatomic, retain) NSUbiquitousKeyValueStore *kvStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *privateQueue;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)_storeChangedExternally:(id)arg1;
- (id)delegate;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDelegate:(id)arg1;
- (bool)initialized;
- (bool)isInitialized;
- (id)kvStore;
- (id)privateQueue;
- (void)refresh;
- (void)removeDictionaryForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setInitialized:(bool)arg1;
- (void)setKvStore:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (id)storageName;
- (id)subsetOfMessageIDsToSyncFromMessageIDString:(id)arg1;
- (bool)synchronize;

@end
