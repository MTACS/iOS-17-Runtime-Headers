
@interface MFMessagePersistence_iOS : EDMessagePersistence <EDMessageChangeHookResponder, EFLoggable> {
    MFMailMessageLibrary * _library;
    <EFScheduler> * _networkContentLoadScheduler;
    EFLazyCache * _obsoleteGlobalMessageIDToDatabaseIDMap;
    <EFScheduler> * _offlineContentLoadScheduler;
    MFMailMessageLibraryQueryTransformer * _queryTransformer;
    NSObject<OS_dispatch_queue> * _requestSummaryQueue;
    <MFMessageSummaryLoaderProvider> * _summaryLoaderProvider;
    NSMutableDictionary * _summaryLoaders;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _summaryLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MFMessageSummaryLoaderProvider> *summaryLoaderProvider;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)_libraryMessageForMessageObjectID:(id)arg1 preferNonOutgoingMessages:(bool)arg2;
- (id)_requestSummaryForLibraryMessage:(id)arg1;
- (id)cachedDatabaseIDsDictionaryForGlobalMessageIDs:(id)arg1;
- (id)collectStatistics;
- (id)createContextForIteration;
- (id)enabledAccountMailboxesExpression;
- (id)expressionForFilteringUnavailableMessagesForGlobalMessageQuery:(bool)arg1;
- (id)expressionForFilteringUnavailableMessagesFromCount;
- (id)expressionForFindingOnlyJournaledMessages;
- (void)generateSummaryForMessage:(id)arg1 downloadIfNecessary:(bool)arg2;
- (long long)globalIDForMessageWithDatabaseID:(long long)arg1 mailboxScope:(id*)arg2;
- (id)groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (id)initWithMailboxPersistence:(id)arg1 database:(id)arg2 userProfileProvider:(id)arg3 blockedSenderManager:(id)arg4 vipReader:(id)arg5 hookRegistry:(id)arg6 library:(id)arg7;
- (id)libraryMessageForMessageObjectID:(id)arg1;
- (id)persistedMessageForOutgoingMessage:(id)arg1 isDraft:(bool)arg2;
- (id)persistedMessageForSQLRow:(id)arg1 connection:(id)arg2 iterationContext:(id)arg3;
- (id)persistedMessagesForDatabaseIDs:(id)arg1 requireProtectedData:(bool)arg2 temporarilyUnavailableDatabaseIDs:(id*)arg3;
- (void)persistenceDidChangeGlobalMessageID:(long long)arg1 orConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4;
- (id)requestContentForMessageObjectID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)requestSummaryForMessageObjectID:(id)arg1;
- (void)setContentProtectionForAttachmentFile:(id)arg1;
- (void)setSummaryLoaderProvider:(id)arg1;
- (id)sqlQueryForQuery:(id)arg1 connection:(id)arg2;
- (id)summaryLoaderProvider;

@end
