
@interface RTTDatabaseManager : HCDatabaseManager {
    CHManager * _callHistoryManager;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_callHistoryDBDidChange:(id)arg1;
- (void)callHistoryDBDidChange:(id)arg1;
- (id)cloudKitContainer;
- (bool)contactIDIsTTYContact:(id)arg1;
- (bool)contactIsTTYContact:(id)arg1;
- (bool)contactPathWasUsedForTTY:(id)arg1;
- (id)containerIdentifier;
- (id)conversationForCallUID:(id)arg1;
- (bool)deleteConversationWithCallUID:(id)arg1;
- (bool)deleteConversationsWithCallUIDs:(id)arg1;
- (id)init;
- (void)logMessage:(id)arg1;
- (id)managedObjectModelName;
- (bool)saveConversation:(id)arg1;

@end
