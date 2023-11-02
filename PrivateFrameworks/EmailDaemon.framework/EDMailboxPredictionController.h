
@interface EDMailboxPredictionController : NSObject <EDMessageChangeHookResponder, EFLoggable> {
    EDCachingMailboxPredictor * _cachingPredictor;
    EDPersistenceHookRegistry * _hookRegistry;
    EDMailboxPersistence * _mailboxPersistence;
    EDMessagePersistence * _messagePersistence;
    NSObject<OS_dispatch_queue> * _processingQueue;
    <EDMailboxPredictionQueryAdapter> * _queryAdapter;
    <EMUserProfileProvider> * _userProfileProvider;
}

@property (nonatomic, readonly) EDCachingMailboxPredictor *cachingPredictor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDPersistenceHookRegistry *hookRegistry;
@property (nonatomic, readonly) EDMailboxPersistence *mailboxPersistence;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, readonly) <EDMailboxPredictionQueryAdapter> *queryAdapter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <EMUserProfileProvider> *userProfileProvider;

+ (id)log;

- (void).cxx_destruct;
- (id)_accountsForMessages:(id)arg1;
- (id)_createPredictor;
- (void)_invalidateCacheForAddedMessage:(id)arg1;
- (void)_predictMailboxForMovingMessages:(id)arg1 cancelationToken:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_processPredictionForMessages:(id)arg1;
- (id)cachingPredictor;
- (id)hookRegistry;
- (id)initWithMessagePersistence:(id)arg1 mailboxPersistence:(id)arg2 hookRegistry:(id)arg3 userProfileProvider:(id)arg4;
- (id)mailboxPersistence;
- (id)messagePersistence;
- (void)persistenceWillAddNewMessage:(id)arg1 fromExistingMessage:(bool)arg2;
- (id)predictMailboxForMovingObjectIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)processingQueue;
- (id)queryAdapter;
- (id)userProfileProvider;

@end
