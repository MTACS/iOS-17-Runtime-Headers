
@protocol IMAssistantMessageHandlerDataSource <NSObject>

@required

- (<IMAssistantAccountDataSource> *)accountDataSource;
- (<IMAssistantChatDataSource> *)chatDataSource;
- (<IMAssistantCommSafetyManager> *)commSafetyDataSource;
- (NSCache *)contactIdentifierToUnifiedContactIdentifierCache;
- (<IMAssistantContactsDataSource> *)contactsDataSource;
- (<IMAssistantCoreTelephonySubscriptionsDataSource> *)coreTelephonySubscriptionsDataSource;
- (<IMAssistantFileManager> *)fileManagerDataSource;
- (<IMFileTransferCenter> *)fileTransferCenterDataSource;
- (NSCache *)handleToContactIdentifierCache;
- (bool)isInternationalSpamFilteringEnabled;
- (<IMLocationManager> *)locationManagerDataSource;
- (bool)screentimeAllowedToShowChat:(IMChat *)arg1 error:(id*)arg2;
- (bool)screentimeAllowedToShowConversationWithHandleIDs:(NSArray *)arg1 error:(id*)arg2;
- (NSCache *)spiHandleToPersonCache;

@end
