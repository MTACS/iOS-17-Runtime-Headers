
@interface EMOutgoingMessageRepository : NSObject <EFLoggable, EMOutgoingMessageRepositoryInterfaceObserver> {
    EMRemoteConnection * _connection;
    bool  _hasDelayedMessages;
    _Atomic bool  _hasStartedObservingUnsentChanges;
    NSMutableArray * _observers;
    NSNumber * _pendingMessages;
    <EFCancelable> * _registrationCancelable;
    <EFScheduler> * _scheduler;
}

@property (retain) EMRemoteConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasDelayedMessages;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *observers;
@property (nonatomic, retain) NSNumber *pendingMessages;
@property (retain) <EFCancelable> *registrationCancelable;
@property (nonatomic, readonly) <EFScheduler> *scheduler;
@property (readonly) Class superclass;

+ (id)log;
+ (id)remoteInterface;
+ (id)signpostLog;

- (void).cxx_destruct;
- (void)_restartObservingUnsentChangesIfNecessary;
- (void)_startObservingUnsentChangesIfNecessary;
- (void)addObserver:(id)arg1;
- (void)cancelLastDelayedMessage:(id /* block */)arg1;
- (id)connection;
- (void)dealloc;
- (void)deleteDraftsInMailbox:(id)arg1 documentID:(id)arg2 previousDraftObjectID:(id)arg3;
- (id)deliverMessage:(id)arg1 usingMailDrop:(bool)arg2 isCancelable:(bool)arg3;
- (bool)hasDelayedMessages;
- (void)hasDelayedMessagesDidChange:(bool)arg1;
- (id)initWithRemoteConnection:(id)arg1;
- (bool)isProcessing;
- (unsigned long long)numberOfPendingMessages;
- (void)numberOfPendingMessagesChanged:(id)arg1;
- (id)observers;
- (bool)outboxContainsMessageFromAccount:(id)arg1;
- (id)pendingMessages;
- (void)processAllQueuedMessages;
- (id)registrationCancelable;
- (void)removeObserver:(id)arg1;
- (id)removeSendLaterDateFromMessage:(id)arg1 draftsMailboxObjectID:(id)arg2;
- (void)resumeDeliveryQueue;
- (id)saveDraftMessage:(id)arg1 mailboxObjectID:(id)arg2 previousDraftObjectID:(id)arg3;
- (id)saveSendLaterMessage:(id)arg1 sendLaterDate:(id)arg2;
- (void)scheduleAlarmForSendLaterDate:(id)arg1 completion:(id /* block */)arg2;
- (id)scheduler;
- (void)setConnection:(id)arg1;
- (void)setHasDelayedMessages:(bool)arg1;
- (void)setPendingMessages:(id)arg1;
- (void)setRegistrationCancelable:(id)arg1;
- (unsigned long long)signpostID;
- (void)suspendDeliveryQueue;
- (void)updateObserversForHasDelayedMessagesDidChange;
- (void)updateObserversForPendingMessagesChange;
- (id)updateSendLaterDate:(id)arg1 message:(id)arg2;

@end
