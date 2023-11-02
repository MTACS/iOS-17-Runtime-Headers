
@interface EDUbiquitousConversationManager : NSObject <EDConversationRemoteStorageDelegate, EFLoggable> {
    <EDConversationRemoteStorage> * _cloudStorage;
    NSMutableDictionary * _conversationIDsBySyncKey;
    <EDUbiquitousConversationManagerDelegate> * _delegate;
    bool  _initialized;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _unmatchedKeys;
}

@property (nonatomic, retain) <EDConversationRemoteStorage> *cloudStorage;
@property (nonatomic, retain) NSMutableDictionary *conversationIDsBySyncKey;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EDUbiquitousConversationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool initialized;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *unmatchedKeys;

+ (id)log;

- (void).cxx_destruct;
- (void)_mergeServerChanges:(id)arg1;
- (void)_setCloudStorageValue:(id)arg1 forKey:(id)arg2;
- (id)_syncKeyForConversationID:(long long)arg1;
- (bool)_synchronize;
- (id)cloudStorage;
- (id)conversationIDsBySyncKey;
- (void)conversationRemoteStorage:(id)arg1 didChangeEntries:(id)arg2 reason:(long long)arg3;
- (id)delegate;
- (bool)hasSubscribedConversations;
- (id)initWithDelegate:(id)arg1;
- (bool)initialized;
- (void)performDailyExportForChangedConversations:(id)arg1;
- (void)performInitialSync;
- (void)pruneDatabasePurgingOldestEntries:(bool)arg1;
- (id)queue;
- (void)setCloudStorage:(id)arg1;
- (void)setConversationIDsBySyncKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFlags:(unsigned long long)arg1 forConversations:(id)arg2;
- (void)setInitialized:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setUnmatchedKeys:(id)arg1;
- (id)syncKeyForUpdatedConversation:(long long)arg1 flags:(unsigned long long)arg2;
- (id)unmatchedKeys;

@end
