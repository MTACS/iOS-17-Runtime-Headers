
@interface IMDMessageSortOrderAssigner : NSObject

- (void)assignAndPersistSortIDForIncomingMessage:(id)arg1 onChat:(id)arg2;
- (void)assignSortIDToIncomingMessage:(id)arg1 onChat:(id)arg2;
- (void)assignSortIDToIncomingMessageWithNoExistingMessagesWithSameReplyToGUID:(id)arg1 onChat:(id)arg2;
- (void)compareMessageToOtherMessagesWithSameReplyToGUIDAndAssignSortID:(id)arg1 existingMessagesWithSameReplyToGUID:(id)arg2;
- (id)copyOfMessagesWithReplyToGUID:(id)arg1;
- (id)messageWithGUID:(id)arg1;
- (void)persistMessage:(id)arg1;

@end
