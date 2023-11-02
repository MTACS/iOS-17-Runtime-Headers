
@protocol _INPBSearchForMessagesIntent <NSObject>

@required

- (int)StringAsAttributes:(NSString *)arg1;
- (void)addAttribute:(int)arg1;
- (int)attributeAtIndex:(unsigned long long)arg1;
- (int*)attributes;
- (NSString *)attributesAsString:(int)arg1;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (_INPBStringList *)content;
- (_INPBStringList *)conversationIdentifier;
- (_INPBDateTimeRange *)dateTimeRange;
- (_INPBStringList *)groupName;
- (bool)hasContent;
- (bool)hasConversationIdentifier;
- (bool)hasDateTimeRange;
- (bool)hasGroupName;
- (bool)hasIdentifier;
- (bool)hasIntentMetadata;
- (bool)hasNotificationIdentifier;
- (bool)hasRecipient;
- (bool)hasSearchTerm;
- (bool)hasSender;
- (bool)hasSpeakableGroupName;
- (_INPBStringList *)identifier;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBStringList *)notificationIdentifier;
- (_INPBContactList *)recipient;
- (_INPBStringList *)searchTerm;
- (_INPBContactList *)sender;
- (void)setAttributes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setContent:(_INPBStringList *)arg1;
- (void)setConversationIdentifier:(_INPBStringList *)arg1;
- (void)setDateTimeRange:(_INPBDateTimeRange *)arg1;
- (void)setGroupName:(_INPBStringList *)arg1;
- (void)setIdentifier:(_INPBStringList *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setNotificationIdentifier:(_INPBStringList *)arg1;
- (void)setRecipient:(_INPBContactList *)arg1;
- (void)setSearchTerm:(_INPBStringList *)arg1;
- (void)setSender:(_INPBContactList *)arg1;
- (void)setSpeakableGroupName:(_INPBDataStringList *)arg1;
- (_INPBDataStringList *)speakableGroupName;

@end
