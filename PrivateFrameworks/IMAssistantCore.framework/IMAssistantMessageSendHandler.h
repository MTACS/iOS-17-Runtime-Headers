
@interface IMAssistantMessageSendHandler : IMAssistantMessageHandler <INSendMessageIntentHandling> {
    NSString * _conversationIdentifierResolvedDuringRecipientResolution;
    <IMAssistantMessageSendHandlerDelegate> * _messageSendHandlerDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <IMAssistantMessageSendHandlerDelegate> *messageSendHandlerDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canSendLocationMessageWithLocationManager:(id)arg1 withError:(long long*)arg2;
- (void)confirmSendMessage:(id)arg1 completion:(id /* block */)arg2;
- (id)contactResolutionResultForContacts:(id)arg1 matchingRecipient:(id)arg2;
- (id)contactsWithDuplicateNamesAmongContacts:(id)arg1;
- (id)findValidMappingOfRequestedRecipientToChatParticipantAmongMatches:(id)arg1;
- (id)handleResolutionResultForHandles:(id)arg1 resolvedContactForAlternatives:(id)arg2 recipient:(id)arg3;
- (void)handleSendMessage:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2 intentIdentifier:(id)arg3;
- (void)isSensitiveFileAttachmentURLs:(id)arg1 chat:(id)arg2 completion:(id /* block */)arg3;
- (id)makeIMMessageFromSharedLinkURL:(id)arg1;
- (id)makeIMMessageFromText:(id)arg1;
- (id)messageSendHandlerDelegate;
- (id)recipientDisambiguationResultsFromMultipleRelevantChats:(id)arg1;
- (bool)recipientHandleResolutionResultsAllowedByScreentime:(id)arg1 error:(id*)arg2;
- (id)recipientsResolutionFailureResultWithResult:(id)arg1 forRecipient:(id)arg2 amongRecipients:(id)arg3;
- (void)resolveContentForSendMessage:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)resolveMessageContentWithString:(id)arg1;
- (void)resolveOutgoingMessageTypeForSendMessage:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)resolveRecipientsByFindingExistingRelevantChatsForRecipients:(id)arg1 withMatchingHandlesByRecipient:(id)arg2 fromChats:(id)arg3;
- (void)resolveRecipientsForSendMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveRecipientsWithCRR:(id)arg1 forIntent:(id)arg2 completion:(id /* block */)arg3;
- (id)resolveRecipientsWithGroupNameOrConversationIdentifier:(id)arg1 forIntent:(id)arg2;
- (void)resolveRecipientsWithoutCRR:(id)arg1 forIntent:(id)arg2 completion:(id /* block */)arg3;
- (void)resolveSpeakableGroupNameForSendMessage:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)resolvedRecipientsFromChat:(id)arg1;
- (void)sendFileAttachmentURLs:(id)arg1 chat:(id)arg2 executionContext:(long long)arg3 expressiveSendStyleID:(id)arg4 idsIdentifier:(id)arg5 sourceApplicationID:(id)arg6 sentMessages:(id)arg7 completion:(id /* block */)arg8;
- (void)sendLocalFileAttachmentURLs:(id)arg1 chat:(id)arg2 executionContext:(long long)arg3 expressiveSendStyleID:(id)arg4 idsIdentifier:(id)arg5 sourceApplicationID:(id)arg6 sentMessages:(id)arg7 completion:(id /* block */)arg8;
- (void)sendLocationMessageToChat:(id)arg1 sourceApplicationID:(id)arg2 sentMessages:(id)arg3 completion:(id /* block */)arg4;
- (bool)sendMessageWithDraft:(id)arg1 expressiveSendStyleID:(id)arg2 idsIdentifier:(id)arg3 executionContext:(long long)arg4 sourceApplicationID:(id)arg5 toChat:(id)arg6;
- (void)sendMessagesWithText:(id)arg1 currentLocation:(bool)arg2 sharedLinkURL:(id)arg3 audioMessageAttachment:(id)arg4 photoLibraryAttachment:(id)arg5 fileAttachments:(id)arg6 expressiveSendStyleID:(id)arg7 idsIdentifier:(id)arg8 executionContext:(long long)arg9 toChat:(id)arg10 completion:(id /* block */)arg11;
- (void)sendPhotoAssetMessageToChat:(id)arg1 executionContext:(long long)arg2 expressiveSendStyleID:(id)arg3 idsIdentifier:(id)arg4 phAsset:(id)arg5 sentMessages:(id)arg6 sourceApplicationID:(id)arg7 completion:(id /* block */)arg8;
- (void)setMessageSendHandlerDelegate:(id)arg1;
- (bool)shouldContinueToExamineRelevantChatsWithMatches:(id)arg1 nextChat:(id)arg2;
- (bool)updateSenderIdentityForNewlyCreatedChat:(id)arg1;

@end
