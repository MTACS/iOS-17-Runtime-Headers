
@interface EDOutgoingMessageRepository : NSObject <EMOutgoingMessageRepositoryInterface> {
    EDMessageChangeManager * _messageChangeManager;
    EDMessagePersistence * _messagePersistence;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDMessageChangeManager *messageChangeManager;
@property (nonatomic, retain) EDMessagePersistence *messagePersistence;
@property (readonly) Class superclass;

+ (id)log;
+ (id)signpostLog;

- (void).cxx_destruct;
- (void)cancelLastDelayedMessage:(id /* block */)arg1;
- (void)cancelObservation:(id)arg1;
- (void)deleteDraftsInMailboxID:(id)arg1 documentID:(id)arg2 previousDraftObjectID:(id)arg3;
- (void)deliverMessage:(id)arg1 usingMailDrop:(bool)arg2 isCancelable:(bool)arg3 completion:(id /* block */)arg4;
- (id)initWithMessagePersistence:(id)arg1 messageChangeManager:(id)arg2;
- (void)isProcessingWithCompletion:(id /* block */)arg1;
- (id)messageChangeManager;
- (id)messagePersistence;
- (id)messagesForDocumentID:(id)arg1 mailboxID:(id)arg2;
- (void)numberOfPendingMessagesWithCompletion:(id /* block */)arg1;
- (void)outboxContainsMessageFromAccountObjectID:(id)arg1 completion:(id /* block */)arg2;
- (id)outgoingMessageFromPersistedMessage:(id)arg1;
- (void)performBlock:(id /* block */)arg1;
- (void)processAllQueuedMessages;
- (void)removeSendLaterDateFromMessage:(id)arg1 draftsMailboxObjectID:(id)arg2 completion:(id /* block */)arg3;
- (void)resumeDeliveryQueue;
- (void)saveDraftMessage:(id)arg1 mailboxID:(id)arg2 previousDraftObjectID:(id)arg3 completion:(id /* block */)arg4;
- (void)saveSendLaterMessage:(id)arg1 sendLaterDate:(id)arg2 completion:(id /* block */)arg3;
- (void)scheduleAlarmForSendLaterDate:(id)arg1 completion:(id /* block */)arg2;
- (void)setMessagePersistence:(id)arg1;
- (unsigned long long)signpostID;
- (void)startObservingPendingMessageChangesWithChangeObserver:(id)arg1 observationIdentifier:(id)arg2;
- (void)suspendDeliveryQueue;
- (void)updateSendLaterDate:(id)arg1 message:(id)arg2 completion:(id /* block */)arg3;
- (id)urlForSendLaterFolder;

@end
