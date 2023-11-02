
@interface IMMutableChatContext : IMChatContext

@property (nonatomic, retain) NSUUID *activeTelephonyConversationUUID;
@property (nonatomic) long long filterCategory;
@property (getter=hasResponded, nonatomic) bool responded;
@property (getter=areSendersUnknown, nonatomic) bool sendersUnknown;
@property (nonatomic) long long serviceType;
@property (nonatomic, retain) NSArray *showingEditHistoryForChatItemGUIDs;
@property (getter=isSpam, nonatomic) bool spam;

+ (id)chatContextForPinnedChat:(id)arg1;

- (void)setActiveTelephonyConversationUUID:(id)arg1;
- (void)setFilterCategory:(long long)arg1;
- (void)setResponded:(bool)arg1;
- (void)setSendersUnknown:(bool)arg1;
- (void)setServiceType:(long long)arg1;
- (void)setShowingEditHistoryForChatItemGUIDs:(id)arg1;
- (void)setSpam:(bool)arg1;

@end
