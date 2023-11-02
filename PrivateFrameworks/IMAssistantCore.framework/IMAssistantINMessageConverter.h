
@interface IMAssistantINMessageConverter : NSObject

+ (id)INMessageForOutgoingIMMessage:(id)arg1 toChat:(id)arg2 messageType:(long long)arg3 personProvider:(id)arg4;
+ (id)INMessagesForSPIMessage:(id)arg1 personProvider:(id)arg2;
+ (id)INPersonsForSPIHandles:(id)arg1 personProvider:(id)arg2;
+ (id)__INMessageLinkMetadataForLPLinkMetadata:(id)arg1;
+ (id)__INSpeakableStringForChat:(id)arg1;
+ (id)__INSpeakableStringForMessage:(id)arg1;
+ (id)_stringByRemovingMessagesControlCharactersFromString:(id)arg1;
+ (id)expressiveSendIdFromMessageEffectType:(long long)arg1;
+ (id)makeINMessage:(long long)arg1 message:(id)arg2 numberOfAttachments:(long long)arg3 personProvider:(id)arg4 referencedINMessage:(id)arg5 content:(id)arg6;
+ (long long)messageEffectTypeFromExpressiveSendId:(id)arg1;
+ (id)messageEffectTypeToExpressiveSendIdDictionary;
+ (id)prepareAttachments:(long long)arg1 message:(id)arg2;
+ (id)spiHandleForIMHandle:(id)arg1 isMe:(bool)arg2;

@end
