
@interface SKIMessagesInvocation : NSObject

+ (id)announceMessagesRequestFromAnnounceDirectInvocationPayload:(id)arg1;
+ (id)announceMessagesRequestFromNotificationIdentifier:(id)arg1 fromApp:(id)arg2 synchronousBurstIndex:(id)arg3;
+ (id)beginSiriRequestForApp:(id)arg1;
+ (id)composeNewMessageRequestInApp:(id)arg1;
+ (id)composeNewMessageRequestToContact:(id)arg1 phoneNumber:(id)arg2 emailAddress:(id)arg3 inApp:(id)arg4;
+ (id)composeReplyRequestToConversationIdentifier:(id)arg1 inApp:(id)arg2;
+ (id)makeParameterMetadataForIntent:(id)arg1;
+ (id)makeParameterMetadataForParameterNamed:(id)arg1;
+ (id)readMessagesRequestFromConversationIdentifier:(id)arg1 inApp:(id)arg2;
+ (id)readMessagesRequestFromNotificationIdentifier:(id)arg1 fromApp:(id)arg2;
+ (id)sendMessageFromInteractiveSnippetWithUpdatedContent:(id)arg1 withContext:(id)arg2;
+ (id)updateMessageContentFromInteractiveSnippet:(id)arg1 withContext:(id)arg2;

@end
