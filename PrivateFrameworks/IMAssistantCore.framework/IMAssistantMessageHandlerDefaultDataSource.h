
@interface IMAssistantMessageHandlerDefaultDataSource : NSObject <IMAssistantMessageHandlerDataSource> {
    CNContactStore * _contactStore;
    bool  _didRegisterForContactStoreChangeNotifications;
}

@property (nonatomic, readonly) <IMAssistantAccountDataSource> *accountDataSource;
@property (nonatomic, readonly) <IMAssistantChatDataSource> *chatDataSource;
@property (nonatomic, readonly) <IMAssistantCommSafetyManager> *commSafetyDataSource;
@property (nonatomic, readonly) NSCache *contactIdentifierToUnifiedContactIdentifierCache;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, readonly) <IMAssistantContactsDataSource> *contactsDataSource;
@property (nonatomic, readonly) <IMAssistantCoreTelephonySubscriptionsDataSource> *coreTelephonySubscriptionsDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didRegisterForContactStoreChangeNotifications;
@property (nonatomic, readonly) <IMAssistantFileManager> *fileManagerDataSource;
@property (nonatomic, readonly) <IMFileTransferCenter> *fileTransferCenterDataSource;
@property (nonatomic, readonly) NSCache *handleToContactIdentifierCache;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInternationalSpamFilteringEnabled;
@property (nonatomic, readonly) <IMLocationManager> *locationManagerDataSource;
@property (nonatomic, readonly) NSCache *spiHandleToPersonCache;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)accountDataSource;
- (id)chatDataSource;
- (id)commSafetyDataSource;
- (id)contactIdentifierToUnifiedContactIdentifierCache;
- (id)contactStore;
- (void)contactStoreDidChange:(id)arg1;
- (id)contactsDataSource;
- (id)coreTelephonySubscriptionsDataSource;
- (bool)didRegisterForContactStoreChangeNotifications;
- (id)fileManagerDataSource;
- (id)fileTransferCenterDataSource;
- (id)handleToContactIdentifierCache;
- (bool)isInternationalSpamFilteringEnabled;
- (id)locationManagerDataSource;
- (void)registerForContactStoreChangeNotificationsIfNecessary;
- (bool)screentimeAllowedToShowChat:(id)arg1 error:(id*)arg2;
- (bool)screentimeAllowedToShowConversationWithHandleIDs:(id)arg1 error:(id*)arg2;
- (void)setContactStore:(id)arg1;
- (void)setDidRegisterForContactStoreChangeNotifications:(bool)arg1;
- (id)spiHandleToPersonCache;

@end
