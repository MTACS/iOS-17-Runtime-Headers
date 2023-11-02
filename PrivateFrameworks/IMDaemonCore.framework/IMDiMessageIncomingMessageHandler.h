
@interface IMDiMessageIncomingMessageHandler : NSObject

- (void)_enqueueBlock:(id /* block */)arg1 withTimeout:(double)arg2 description:(id)arg3;
- (void)handleChatSessionCloseWithPipeline:(id)arg1 input:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)handleEditMessageCommandWithPipeline:(id)arg1 input:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)handleMessageDeliveredQuietlyReceiptWithPipeline:(id)arg1 input:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)handleMessageDeliveryReceiptWithPipeline:(id)arg1 input:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)handleMessageMarkUnreadRequestWithPipeline:(id)arg1 input:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)handleMessagePlayedReceiptWithPipeline:(id)arg1 input:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)handleMessageReadReceiptWithPipeline:(id)arg1 input:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)handleMessageWithPipeline:(id)arg1 input:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)handleNotifyRecipientCommandWithPipeline:(id)arg1 input:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)handleRecoverJunkCommandWithPipeline:(id)arg1 input:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)handleSyndicatedActionWithPipeline:(id)arg1 input:(id)arg2 completionBlock:(id /* block */)arg3;

@end
