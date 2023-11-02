
@protocol EDMessageChangeManagerSubClassMethods <NSObject>

@required

- (<EDReceivingAccount> *)accountForMailboxURL:(NSURL *)arg1;
- (void)actionHasChangedAccount:(ECLocalMessageAction *)arg1;
- (NSArray *)addLabels:(NSSet *)arg1 removeLabels:(NSSet *)arg2 toMessagesInDatabase:(NSArray *)arg3;
- (NSArray *)applyFlagChange:(ECMessageFlagChange *)arg1 toMessagesInDatabase:(NSArray *)arg2;
- (void)applyVIPStatus:(bool)arg1 toMessagesInDatabase:(NSArray *)arg2;
- (void)checkForNewActionsInMailboxID:(long long)arg1;
- (void)deletePersistedMessages:(NSArray *)arg1;
- (void)displayErrorForTransferAction:(ECTransferMessageAction *)arg1 withResults:(ECTransferMessageActionResults *)arg2;
- (bool)haveCompleteMIMEForMessage:(id <EDBaseMessage>)arg1;
- (NSDictionary *)iterateMessagesInMailboxURLs:(void *)arg1 excludingMessages:(void *)arg2 batchSize:(void *)arg3 returnMessagesForFlagChange:(void *)arg4 handler:(void *)arg5; // needs 5 arg types, found 10: NSArray *, NSArray *, unsigned long long, ECMessageFlagChange *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (long long)mailboxDatabaseIDForURL:(NSURL *)arg1;
- (bool)mailboxIsAllMail:(NSURL *)arg1;
- (bool)mailboxPartOfAllMail:(NSURL *)arg1;
- (<EDPersistedMessage> *)messageForDatabaseID:(long long)arg1;
- (void)messageWasAppended:(id <EDBaseMessage>)arg1;
- (NSArray *)messagesForRemoteIDs:(NSArray *)arg1 mailboxURL:(NSURL *)arg2;
- (bool)persistNewMessages:(NSArray *)arg1 mailboxURL:(NSURL *)arg2 oldMessagesByNewMessage:(NSMutableDictionary *)arg3 fromSyncing:(bool)arg4;
- (void)resetStatusCountsForMailboxWithURL:(NSURL *)arg1;
- (void)setData:(NSData *)arg1 onMessage:(id <EDBaseMessage>)arg2;
- (void)setRemoteID:(NSString *)arg1 onMessageWithDatabaseID:(long long)arg2;

@end
