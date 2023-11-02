
@interface IMInlineReplyController : IMItemsController {
    IMChat * _chat;
    <IMChatItemRules> * _chatItemRules;
    IMScheduledUpdater * _chatItemsUpdater;
    bool  _disableItemInserts;
    bool  _hasEarlierMessagesToLoad;
    bool  _hasRecentMessagesToLoad;
    bool  _isUpdatingChatItems;
    NSString * _threadIdentifier;
    IMMessageItem * _threadOriginator;
}

@property (nonatomic) IMChat *chat;
@property (nonatomic, retain) <IMChatItemRules> *chatItemRules;
@property (nonatomic, readonly) NSArray *chatItems;
@property (nonatomic, retain) IMScheduledUpdater *chatItemsUpdater;
@property (nonatomic) bool disableItemInserts;
@property (nonatomic, readonly) IMMessage *firstMessage;
@property (nonatomic) bool hasEarlierMessagesToLoad;
@property (nonatomic) bool hasRecentMessagesToLoad;
@property (nonatomic) bool isUpdatingChatItems;
@property (nonatomic, readonly) IMMessage *lastMessage;
@property (nonatomic, copy) NSString *threadIdentifier;
@property (nonatomic, retain) IMMessageItem *threadOriginator;

- (void).cxx_destruct;
- (void)_itemsDidChange:(id)arg1;
- (void)_postIMChatItemsDidChangeNotificationWithInserted:(id)arg1 removed:(id)arg2 reload:(id)arg3 regenerate:(id)arg4 oldChatItems:(id)arg5 newChatItems:(id)arg6;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2;
- (void)_replaceStaleChatItems;
- (void)_setupChatItemRules;
- (void)_updateChatItemsForChatItemUpdater;
- (void)_updateChatItemsWithReason:(id)arg1 block:(id /* block */)arg2;
- (void)_updateChatItemsWithReason:(id)arg1 block:(id /* block */)arg2 shouldPost:(bool)arg3;
- (id)chat;
- (id)chatItemRules;
- (id)chatItems;
- (id)chatItemsUpdater;
- (void)dealloc;
- (bool)disableItemInserts;
- (id)firstMessage;
- (bool)hasEarlierMessagesToLoad;
- (bool)hasRecentMessagesToLoad;
- (id)initWithChat:(id)arg1 threadIdentifier:(id)arg2 threadOriginator:(id)arg3;
- (void)insertHistoricalMessages:(id)arg1 queryID:(id)arg2 hasMessagesBefore:(bool)arg3 hasMessagesAfter:(bool)arg4 isReplacingItems:(bool)arg5;
- (void)insertItem:(id)arg1;
- (bool)isUpdatingChatItems;
- (bool)itemMatchesThread:(id)arg1;
- (id)itemsMatchingThread:(id)arg1 guids:(id)arg2;
- (id)lastMessage;
- (void)performActionDisallowingItemInsert:(id /* block */)arg1;
- (void)removeItem:(id)arg1;
- (void)replaceItems:(id)arg1;
- (void)setChat:(id)arg1;
- (void)setChatItemRules:(id)arg1;
- (void)setChatItemsUpdater:(id)arg1;
- (void)setDisableItemInserts:(bool)arg1;
- (void)setHasEarlierMessagesToLoad:(bool)arg1;
- (void)setHasRecentMessagesToLoad:(bool)arg1;
- (void)setIsUpdatingChatItems:(bool)arg1;
- (void)setNeedsUpdateChatItems;
- (void)setThreadIdentifier:(id)arg1;
- (void)setThreadOriginator:(id)arg1;
- (id)threadIdentifier;
- (id)threadOriginator;
- (void)updateChatItemsIfNeeded;

@end
