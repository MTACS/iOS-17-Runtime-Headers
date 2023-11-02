
@interface EDInteractionLogger : NSObject <EDMessageChangeHookResponder, EDMessageDeliveryHookResponder, EMInteractionLoggerInterface> {
    <EDInteractionEventLog> * _eventLog;
    EDMailboxPersistence * _mailboxPersistence;
    NSMutableDictionary * _messageListMessages;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _messageListVisibleRows;
    EDMessagePersistence * _messagePersistence;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSObject<OS_dispatch_queue> * _stateTrackingQueue;
    NSMutableDictionary * _viewedMessages;
}

@property (nonatomic, retain) <EDInteractionEventLog> *_eventLog;
@property (nonatomic, retain) NSMutableDictionary *_messageListMessages;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } _messageListVisibleRows;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_stateTrackingQueue;
@property (nonatomic, retain) NSMutableDictionary *_viewedMessages;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EDMailboxPersistence *mailboxPersistence;
@property (nonatomic, retain) EDMessagePersistence *messagePersistence;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_composeStartedForMessage:(id)arg1 eventName:(id)arg2;
- (void)_conversationFlagsChanged:(id)arg1;
- (id)_eventLog;
- (void)_logMessageListDisplayEndedForState:(id)arg1 now:(id)arg2;
- (void)_logMessageListDisplayStartedMessage:(id)arg1 now:(id)arg2 type:(id)arg3 row:(long long)arg4 cellStyle:(id)arg5;
- (id)_messageListMessages;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_messageListVisibleRows;
- (id)_range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 minusRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)_stateForMessage:(id)arg1 extra:(id)arg2 container:(id)arg3;
- (id)_stateTrackingQueue;
- (id)_viewedMessages;
- (void)_viewingEndedForAllMessages;
- (void)applicationLaunched;
- (void)applicationWillResume;
- (void)applicationWillSuspend;
- (void)archivedMessages:(id)arg1;
- (void)clickedLinkInMessage:(id)arg1 scheme:(id)arg2;
- (void)composeFowardStartedForMessage:(id)arg1;
- (void)composeReplyStartedForMessage:(id)arg1;
- (void)composedMessageSent:(id)arg1 account:(id)arg2;
- (void)copiedMessages:(id)arg1 toMailbox:(id)arg2;
- (void)deletedMessages:(id)arg1;
- (void)deliveredMessage:(id)arg1 account:(id)arg2;
- (id)initWithMessagePersistence:(id)arg1 mailboxPersistence:(id)arg2 eventLog:(id)arg3;
- (void)logEvent:(id)arg1 date:(id)arg2 data:(id)arg3;
- (void)logEvent:(id)arg1 date:(id)arg2 messageID:(id)arg3 data:(id)arg4;
- (id)mailboxPersistence;
- (void)messageListDisplayEndedForAllMessages;
- (void)messageListDisplayEndedForMessage:(id)arg1 cellStyle:(id)arg2;
- (void)messageListDisplayStartedForMessage:(id)arg1 messageListType:(id)arg2 row:(long long)arg3 cellStyle:(id)arg4;
- (void)messageListDisplayVisibleRowsChanged:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)messagePersistence;
- (void)movedMessages:(id)arg1 toMailbox:(id)arg2;
- (void)movedMessages:(id)arg1 toMailboxType:(long long)arg2;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceWillChangeFlags:(id)arg1 messages:(id)arg2;
- (void)persistenceWillTransferMessages:(id)arg1 transferType:(long long)arg2 destinationMailboxURL:(id)arg3 userInitiated:(bool)arg4;
- (id)processingQueue;
- (void)scrolledToEndOfMessage:(id)arg1;
- (void)setMailboxPersistence:(id)arg1;
- (void)setMessagePersistence:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)set_eventLog:(id)arg1;
- (void)set_messageListMessages:(id)arg1;
- (void)set_messageListVisibleRows:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)set_stateTrackingQueue:(id)arg1;
- (void)set_viewedMessages:(id)arg1;
- (void)viewingEndedForMessage:(id)arg1;
- (void)viewingStartedForMessage:(id)arg1;
- (void)waitForPendingStateChanges;

@end
