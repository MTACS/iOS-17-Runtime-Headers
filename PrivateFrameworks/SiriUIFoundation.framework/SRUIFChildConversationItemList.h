
@interface SRUIFChildConversationItemList : NSObject {
    SRUIFConversation * _conversation;
    NSUUID * _parentItemIdentifier;
}

@property (getter=_conversation, nonatomic, readonly) SRUIFConversation *conversation;
@property (getter=_parentItemIdentifier, nonatomic, readonly) NSUUID *parentItemIdentifier;

- (void).cxx_destruct;
- (void)_addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3 asChildrenOfItemWithIdentifier:(id)arg4;
- (id)_conversation;
- (id)_identifierOfItemAtIndex:(long long)arg1;
- (id)_indexPathForItemAtIndex:(long long)arg1;
- (id)_indexPathForLastRestoredItem;
- (id)_parentItemIdentifier;
- (void)addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3;
- (void)addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3 asChildrenOfItemAtIndex:(long long)arg4;
- (id)identifiersForItemsAtIndexes:(id)arg1;
- (id)initWithConversation:(id)arg1 parentItemIdentifier:(id)arg2;
- (id)itemAtIndex:(long long)arg1;
- (bool)itemIsRestoredAtIndex:(long long)arg1;
- (id)itemWithIdentifier:(id)arg1;
- (long long)numberOfItems;
- (void)removeItemsAtIndexes:(id)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1;

@end
