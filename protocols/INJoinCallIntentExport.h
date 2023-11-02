
@protocol INJoinCallIntentExport <NSObject, JSExport>

@required

- (INCallGroupConversation *)groupConversation;
- (INCallGroupConversationFilter *)groupConversationFilter;
- (id)init;
- (void)setGroupConversation:(INCallGroupConversation *)arg1;
- (void)setGroupConversationFilter:(INCallGroupConversationFilter *)arg1;

@end
