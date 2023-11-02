
@protocol _INPBSendMessageIntent <NSObject>

@required

+ (Class)attachmentsType;
+ (Class)recipientType;

- (int)StringAsEffect:(NSString *)arg1;
- (int)StringAsOutgoingMessageType:(NSString *)arg1;
- (void)addAttachments:(_INPBSendMessageAttachment *)arg1;
- (void)addRecipient:(_INPBContact *)arg1;
- (NSString *)alternativeConversationIdentifier;
- (NSArray *)attachments;
- (_INPBSendMessageAttachment *)attachmentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)attachmentsCount;
- (void)clearAttachments;
- (void)clearRecipients;
- (_INPBString *)content;
- (NSString *)conversationIdentifier;
- (int)effect;
- (NSString *)effectAsString:(int)arg1;
- (_INPBString *)groupName;
- (bool)hasAlternativeConversationIdentifier;
- (bool)hasContent;
- (bool)hasConversationIdentifier;
- (bool)hasEffect;
- (bool)hasGroupName;
- (bool)hasIntentMetadata;
- (bool)hasNotificationThreadIdentifier;
- (bool)hasOutgoingMessageType;
- (bool)hasSender;
- (bool)hasServiceName;
- (bool)hasSpeakableGroupName;
- (_INPBIntentMetadata *)intentMetadata;
- (NSString *)notificationThreadIdentifier;
- (int)outgoingMessageType;
- (NSString *)outgoingMessageTypeAsString:(int)arg1;
- (_INPBContact *)recipientAtIndex:(unsigned long long)arg1;
- (NSArray *)recipients;
- (unsigned long long)recipientsCount;
- (_INPBContact *)sender;
- (NSString *)serviceName;
- (void)setAlternativeConversationIdentifier:(NSString *)arg1;
- (void)setAttachments:(NSArray *)arg1;
- (void)setContent:(_INPBString *)arg1;
- (void)setConversationIdentifier:(NSString *)arg1;
- (void)setEffect:(int)arg1;
- (void)setGroupName:(_INPBString *)arg1;
- (void)setHasEffect:(bool)arg1;
- (void)setHasOutgoingMessageType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setNotificationThreadIdentifier:(NSString *)arg1;
- (void)setOutgoingMessageType:(int)arg1;
- (void)setRecipients:(NSArray *)arg1;
- (void)setSender:(_INPBContact *)arg1;
- (void)setServiceName:(NSString *)arg1;
- (void)setSpeakableGroupName:(_INPBDataString *)arg1;
- (_INPBDataString *)speakableGroupName;

@end
