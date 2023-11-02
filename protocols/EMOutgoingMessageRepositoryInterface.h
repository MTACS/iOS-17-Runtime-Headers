
@protocol EMOutgoingMessageRepositoryInterface <NSObject>

@required

- (void)cancelLastDelayedMessage:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)cancelObservation:(EMObjectID *)arg1;
- (void)deleteDraftsInMailboxID:(EMMailboxObjectID *)arg1 documentID:(NSString *)arg2 previousDraftObjectID:(EMMessageObjectID *)arg3;
- (void)deliverMessage:(void *)arg1 usingMailDrop:(void *)arg2 isCancelable:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: EMOutgoingMessage *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, EMMessageDeliveryResult *, void*
- (void)isProcessingWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)numberOfPendingMessagesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)outboxContainsMessageFromAccountObjectID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: EMObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)processAllQueuedMessages;
- (void)removeSendLaterDateFromMessage:(void *)arg1 draftsMailboxObjectID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: EMMessage *, EMMailboxObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, EMMessage *, void*
- (void)resumeDeliveryQueue;
- (void)saveDraftMessage:(void *)arg1 mailboxID:(void *)arg2 previousDraftObjectID:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: EMOutgoingMessage *, EMMailboxObjectID *, EMMessageObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, EMMessage *, void*
- (void)saveSendLaterMessage:(void *)arg1 sendLaterDate:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: EMOutgoingMessage *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, EMMessage *, void*
- (void)scheduleAlarmForSendLaterDate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startObservingPendingMessageChangesWithChangeObserver:(id <EMOutgoingMessageRepositoryInterfaceObserver>)arg1 observationIdentifier:(EMObjectID *)arg2;
- (void)suspendDeliveryQueue;
- (void)updateSendLaterDate:(void *)arg1 message:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSDate *, EMMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, EMMessage *, void*

@end
