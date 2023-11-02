
@protocol EDUbiquitousConversationManagerDelegate <NSObject>

@required

- (void)clearConversationFlagsAndSyncKeyForConversationIDs:(NSArray *)arg1;
- (long long)conversationIDForMessageIDs:(NSArray *)arg1;
- (NSArray *)messageIDsForConversationID:(long long)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)persistenceConversationFlagsForConversationID:(long long)arg1;
- (void)pruneConversationTables:(double)arg1;
- (void)remoteMessageIDsAdded:(NSArray *)arg1 forConversationID:(long long)arg2;
- (void)setPersistenceConversationFlags:(unsigned long long)arg1 syncKey:(NSString *)arg2 forConversationID:(long long)arg3 reason:(long long)arg4;
- (NSDictionary *)syncedConversationIDsBySyncKey;

@end
