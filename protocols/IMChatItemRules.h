
@protocol IMChatItemRules <NSObject>

@required

- (NSMutableArray *)_chatItems;
- (NSArray *)_chatItemsForItem:(IMItem *)arg1 previousItem:(IMItem *)arg2;
- (void)_didProcessChatItems:(NSMutableArray *)arg1;
- (id)_initWithChat:(IMChat *)arg1;
- (void)_invalidateSpamIndicatorCachedValues;
- (IMItem *)_itemWithChatItemsDeleted:(NSArray *)arg1 fromItem:(IMItem *)arg2 indexesOfItemsDeleted:(id*)arg3 indexToRangeMapOfItemsDeleted:(id*)arg4;
- (NSArray *)_items;
- (NSDate *)_nextStaleTime;
- (void)_setItems:(NSArray *)arg1;
- (void)_setNextStaleTime:(NSDate *)arg1;
- (bool)_shouldRegenerateChatItemsForItem:(IMItem *)arg1 previousItem:(IMItem *)arg2 oldPreviousItem:(IMItem *)arg3;
- (bool)_shouldReloadChatItem:(IMChatItem *)arg1 oldChatItem:(IMChatItem *)arg2;
- (bool)_shouldReloadChatItemWithAssociatedChatItems:(NSArray *)arg1 oldAssociatedChatItems:(NSArray *)arg2;

@end
