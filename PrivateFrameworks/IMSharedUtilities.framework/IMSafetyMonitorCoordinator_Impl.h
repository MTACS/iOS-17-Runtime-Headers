
@interface IMSafetyMonitorCoordinator_Impl : NSObject {
    void currentBestEstimates;
}

@property (nonatomic, readonly) NSDictionary *appPayload;
@property (nonatomic, readonly) NSString *appPayloadID;
@property (nonatomic, readonly) bool shouldDisallowBasedOnRegulatoryDomain;

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (id)appPayload;
- (id)appPayloadID;
- (void)checkPreferredHandlesCacheForInitiatorHandleID:(id)arg1 andReceiver:(id)arg2 completion:(id /* block */)arg3;
- (void)checkPreferredHandlesCacheForReceiverWith:(id)arg1 completion:(id /* block */)arg2;
- (void)informOfCancelledScheduledMessageSendWithMessageGUID:(id)arg1 sentSuccessfully:(bool)arg2 error:(id)arg3;
- (void)informOfDeletedConversationWithReceiverHandles:(id)arg1;
- (void)informOfDeletedMessagesWithMessages:(id)arg1;
- (void)informOfIncomingMessageWithMessage:(id)arg1;
- (void)informOfOutgoingMessageWithMessage:(id)arg1 sentSuccessfully:(bool)arg2 error:(id)arg3;
- (void)informOfScheduledMessageSendWithMessage:(id)arg1 sentSuccessfully:(bool)arg2 error:(id)arg3;
- (void)informOfTriggeredScheduledMessageSendWithMessage:(id)arg1;
- (id)init;
- (long long)notificationContentForInitiator:(id)arg1 messageURL:(id)arg2 content:(id)arg3;
- (void)respondToNotificationWithIdentifier:(id)arg1 sessionIdentifier:(id)arg2 actionIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (bool)shouldDisallowBasedOnRegulatoryDomain;
- (bool)shouldDropIncomingCheckInMessageWithURL:(id)arg1 senderHandle:(id)arg2 isFromMe:(bool)arg3;
- (void)shouldShowKeyboardSuggestionForInitiator:(id)arg1 andReceiver:(id)arg2 completion:(id /* block */)arg3;
- (void)shouldShowTipKitSuggestionForInitiator:(id)arg1 andReceiver:(id)arg2 completion:(id /* block */)arg3;

@end
