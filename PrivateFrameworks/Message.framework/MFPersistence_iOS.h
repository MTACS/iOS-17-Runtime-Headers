
@interface MFPersistence_iOS : EDPersistence <EFLoggable> {
    <EDAccountsProvider> * _accountsProvider;
    EDAttachmentPersistenceManager * _attachmentPersistenceManager;
    EDBIMIManager * _bimiManager;
    EDConversationPersistence * _conversationPersistence;
    EDDataDetectionPersistence * _dataDetectionPersistence;
    EDPersistenceDatabase * _database;
    MFMailMessageLibrary * _library;
    EDLocalActionPersistence * _localActionPersistence;
    EDMailboxActionPersistence * _mailboxActionPersistence;
    EDMailboxPersistence * _mailboxPersistence;
    EDMessageChangeManager * _messageChangeManager;
    EDMessagePersistence * _messagePersistence;
    EDReadLaterPersistence * _readLaterPersistence;
    EDRemindMeNotificationController * _remindMeNotificationController;
    EDRemoteContentCacheConfiguration * _remoteContentCacheConfiguration;
    EDRemoteContentManager * _remoteContentManager;
    EDRemoteContentPersistence * _remoteContentPersistence;
    EMRemoteContentURLCache * _remoteContentURLCache;
    EMRemoteContentURLSession * _remoteContentURLSession;
    <EDRemoteSearchProvider> * _remoteSearchProvider;
    EDRichLinkPersistence * _richLinkPersistence;
    EDSearchableIndexManager * _searchableIndexManager;
    EDSenderPersistence * _senderPersistence;
    EDServerMessagePersistenceFactory * _serverMessagePersistenceFactory;
    EDThreadPersistence * _threadPersistence;
    <EMUserProfileProvider> * _userProfileProvider;
}

@property (nonatomic, retain) <EDAccountsProvider> *accountsProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) MFMailMessageLibrary *library;
@property (nonatomic, retain) EDMailboxPersistence *mailboxPersistence;
@property (readonly) Class superclass;
@property (nonatomic, retain) <EMUserProfileProvider> *userProfileProvider;

+ (id)log;

- (void).cxx_destruct;
- (void)_configureAttachmentPersistenceManager;
- (void)_configureSearchableIndexManagerIfNecessary;
- (id)accountsProvider;
- (id)attachmentPersistenceManager;
- (id)bimiManager;
- (id)conversationPersistence;
- (id)dataDetectionPersistence;
- (id)database;
- (id)initWithPath:(id)arg1 inMemoryIdentifier:(id)arg2 library:(id)arg3 propertyMapper:(id)arg4;
- (id)library;
- (id)localActionPersistence;
- (id)mailboxActionPersistence;
- (id)mailboxPersistence;
- (id)messageChangeManager;
- (id)messagePersistence;
- (id)persistenceStatistics;
- (id)readLaterPersistence;
- (id)remindMeNotificationController;
- (id)remoteContentCacheConfiguration;
- (id)remoteContentManager;
- (id)remoteContentPersistence;
- (id)remoteContentURLCache;
- (id)remoteContentURLSession;
- (id)remoteSearchProvider;
- (id)richLinkPersistence;
- (void)scheduleRecurringActivity;
- (id)searchableIndexManager;
- (id)senderPersistence;
- (id)serverMessagePersistenceFactory;
- (void)setAccountsProvider:(id)arg1;
- (void)setLibrary:(id)arg1;
- (void)setMailboxPersistence:(id)arg1;
- (void)setRemoteContentURLCache:(id)arg1;
- (void)setRemoteContentURLSession:(id)arg1;
- (void)setUpWithMailboxProvider:(id)arg1 remoteSearchProvider:(id)arg2;
- (void)setUserProfileProvider:(id)arg1;
- (void)test_tearDown;
- (id)threadPersistence;
- (id)userProfileProvider;

@end
