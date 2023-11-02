
@interface IMItemsController : NSObject {
    unsigned long long  _capacity;
    struct __CFArray { } * _items;
}

@property (nonatomic, readonly, copy) NSArray *_items;
@property (nonatomic) unsigned long long capacity;
@property (nonatomic, readonly) bool isMoreToLoad;
@property (nonatomic) struct __CFArray { }*items;

+ (id)_charactersToIgnoreWhenParsingTextContent;

- (id)_appendArchivedItemsToItemsArray:(id)arg1;
- (void)_didReplaceItem:(struct __CFArray { }*)arg1 oldItem:(id)arg2 idx:(long long)arg3;
- (id)_firstMessage;
- (void)_handleItem:(id)arg1 forChatStyle:(unsigned char)arg2;
- (unsigned long long)_indexOfItem:(id)arg1;
- (id)_initWithItems:(id)arg1;
- (id)_itemForGUID:(id)arg1;
- (id)_items;
- (void)_itemsDidChange:(id)arg1;
- (id)_lastFinishedMessage;
- (id)_lastIncomingFinishedMessage;
- (id)_lastIncomingFinishedMessageWithTextContent;
- (id)_lastIncomingMessage;
- (id)_lastMessage;
- (id)_lastRelatedIncomingFinishedMessageTextContentWithLimit:(long long)arg1;
- (id)_lastSentMessage;
- (void)_removeAllItems;
- (void)_removeItem:(id)arg1;
- (void)_replaceAndSortItemsWithUnsortedItems:(id)arg1;
- (void)_replaceItems:(id)arg1;
- (void)_replaceStaleTypingMessage;
- (void)_resortItems;
- (void)_setSortID:(id)arg1;
- (bool)_shouldPinUnsentMessagesToBottom;
- (bool)_trimIfNeeded;
- (id)_typingMessage;
- (void)assignSortIDsToItems:(id)arg1;
- (void)assignSortIDsToItems:(id)arg1 shouldRecalculateSortIDForAllMessages:(bool)arg2;
- (unsigned long long)capacity;
- (void)dealloc;
- (id)init;
- (bool)isMoreToLoad;
- (struct __CFArray { }*)items;
- (void)setCapacity:(unsigned long long)arg1;
- (void)setItems:(struct __CFArray { }*)arg1;

@end
