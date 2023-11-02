
@interface IMAssistantMessageQueryHandler : IMAssistantMessageHandler

+ (id)IMAssistantIMSPIQueue;

- (void)SPIQueryMessagesForChats:(id)arg1 onlyUnread:(bool)arg2 limit:(long long)arg3 completion:(id /* block */)arg4;
- (void)SPIQueryMessagesForChatsWithIdentifiers:(id)arg1 services:(id)arg2 onlyUnread:(bool)arg3 limit:(long long)arg4 completion:(id /* block */)arg5;
- (void)SPIQueryMessagesForSenders:(id)arg1 onlyUnread:(bool)arg2 limit:(long long)arg3 completion:(id /* block */)arg4;
- (void)SPIQueryMessagesWithGUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)SPIQueryMessagesWithRowIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)SPIQueryUnreadMessages:(long long)arg1 completion:(id /* block */)arg2;
- (id)allIMHandlesForHandle:(id)arg1;
- (id)chatParticipantForSPIHandle:(id)arg1;
- (id)chatParticipantsForSPIHandles:(id)arg1;
- (id)chatsContainingRequiredParticipants:(id)arg1;
- (id)chatsForChatNames:(id)arg1;
- (id)chatsWithConversationIdentifiers:(id)arg1;
- (void)handlesAndServicesForChatGuids:(id)arg1 handles:(id*)arg2 services:(id*)arg3;
- (void)handlesAndServicesForPersons:(id)arg1 handles:(id*)arg2 services:(id*)arg3;
- (id)messageContentsPredicate:(id)arg1;
- (bool)messageIsFromBlackholedChat:(id)arg1;
- (void)messagesMatchingMessageIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)recipientsPredicate:(id)arg1;
- (id)resolveDateTimeRange:(id)arg1;
- (bool)resolvePersons:(id)arg1 forIntent:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)searchMessagesWithContents:(id)arg1 messageIdentifiers:(id)arg2 notificationIdentifiers:(id)arg3 chatNames:(id)arg4 conversationIdentifiers:(id)arg5 recipients:(id)arg6 senders:(id)arg7 dateTimeRange:(id)arg8 attributes:(unsigned long long)arg9 completion:(id /* block */)arg10;
- (id)sendersPredicate:(id)arg1;
- (id)spokenPhrasesForSpeakableStrings:(id)arg1;
- (id)unifiedContactIdentifiersForPerson:(id)arg1;
- (id)vocabularyIdentifiersFromSpeakableStrings:(id)arg1;

@end
