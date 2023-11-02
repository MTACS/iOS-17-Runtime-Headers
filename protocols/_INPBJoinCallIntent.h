
@protocol _INPBJoinCallIntent <NSObject>

@required

- (_INPBCallGroupConversation *)groupConversation;
- (_INPBCallGroupConversationFilter *)groupConversationFilter;
- (bool)hasGroupConversation;
- (bool)hasGroupConversationFilter;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setGroupConversation:(_INPBCallGroupConversation *)arg1;
- (void)setGroupConversationFilter:(_INPBCallGroupConversationFilter *)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;

@end
