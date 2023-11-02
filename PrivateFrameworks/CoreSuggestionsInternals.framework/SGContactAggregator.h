
@interface SGContactAggregator : NSObject {
    _PASLRUCache * _cachedContacts;
}

+ (id)mergeContact:(id)arg1 withContact:(id)arg2;
+ (id)messageIdentifiersGeneratingContact:(id)arg1;
+ (id)replaceDetailsInContact:(id)arg1 onDiskContact:(id)arg2;

- (void).cxx_destruct;
- (id)augmentSuggestedContactWithContact:(id)arg1 conversationId:(id)arg2 store:(id)arg3 handle:(id)arg4;
- (void)clear;
- (void)clearContactsWithConversationIdentifier:(id)arg1;
- (id)init;
- (void)removeContact:(id)arg1;

@end
