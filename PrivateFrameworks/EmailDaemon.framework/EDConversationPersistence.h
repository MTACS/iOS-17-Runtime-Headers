
@interface EDConversationPersistence : NSObject <EDConversationDailyCloudExporterDelegate, EDConversationSubscriptionProvider, EDPersistenceDatabaseSchemaProvider, EDUbiquitousConversationManagerDelegate> {
    EDUbiquitousConversationManager * _conversationManager;
    EDPersistenceDatabase * _database;
    EDPersistenceHookRegistry * _hookRegistry;
    NSObject<OS_dispatch_queue> * _notificationQueue;
}

@property (nonatomic, readonly) EDUbiquitousConversationManager *conversationManager;
@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSubscribedConversations;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDPersistenceHookRegistry *hookRegistry;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notificationQueue;
@property (readonly) Class superclass;

+ (unsigned long long)conversationFlagsForConversationNotificationLevel:(long long)arg1;
+ (id)conversationIDMessageIDTableSchema;
+ (long long)conversationNotificationLevelForConversationFlags:(unsigned long long)arg1;
+ (id)conversationsTableName;
+ (id)conversationsTableSchema;
+ (id)log;
+ (id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2;

- (void).cxx_destruct;
- (void)_notifyOfFlagChangeForConversationID:(long long)arg1 oldFlags:(unsigned long long)arg2 newFlags:(unsigned long long)arg3 reason:(long long)arg4 generationWindow:(id)arg5;
- (void)_postChangeNotificationForConversationID:(long long)arg1 flags:(unsigned long long)arg2 oldFlags:(unsigned long long)arg3 reason:(long long)arg4;
- (void)clearConversationFlagsAndSyncKeyForConversationIDs:(id)arg1;
- (long long)conversationIDForMessageIDs:(id)arg1;
- (id)conversationManager;
- (long long)createConversationWithFlags:(unsigned long long)arg1;
- (long long)currentSyncAnchorForDailyExport;
- (id)database;
- (id)flaggedConversationsChangedBetweenStartAnchor:(long long)arg1 endAnchor:(long long)arg2;
- (bool)hasSubscribedConversations;
- (id)hookRegistry;
- (id)initWithDatabase:(id)arg1 hookRegistry:(id)arg2;
- (void)initializeConversationManagerAndPerformInitialSync;
- (void)markConversationWithIDs:(id)arg1 mute:(bool)arg2;
- (void)markConversationWithIDs:(id)arg1 notify:(bool)arg2;
- (id)messageIDsForConversationID:(long long)arg1 limit:(unsigned long long)arg2;
- (id)notificationQueue;
- (unsigned long long)persistenceConversationFlagsForConversationID:(long long)arg1;
- (long long)previousSyncAnchorForDailyExport;
- (void)pruneConversationTables:(double)arg1;
- (void)remoteMessageIDsAdded:(id)arg1 forConversationID:(long long)arg2;
- (void)setNewPreviousSyncAnchorForDailyExport:(long long)arg1;
- (void)setNotificationQueue:(id)arg1;
- (void)setPersistenceConversationFlags:(unsigned long long)arg1 forConversationIDs:(id)arg2 reason:(long long)arg3;
- (void)setPersistenceConversationFlags:(unsigned long long)arg1 syncKey:(id)arg2 forConversationID:(long long)arg3 reason:(long long)arg4;
- (id)syncedConversationIDsBySyncKey;
- (void)updateAssociationTableForMessageID:(id)arg1 dateSent:(id)arg2 conversationID:(long long)arg3;
- (void)updateAssociationTableForMessageIDs:(id)arg1 conversationID:(long long)arg2;
- (void)updateAssociationTableForMessagePersistentIDs:(id)arg1 conversationID:(long long)arg2;
- (void)updateConversationNotificationLevel:(long long)arg1 forConversationIDs:(id)arg2;

@end
