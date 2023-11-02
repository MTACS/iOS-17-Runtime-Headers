
@interface WBSHistoryTopicTag : WBSHistoryTag {
    NSMutableOrderedSet * _taggedItems;
}

@property (nonatomic, readonly, copy) NSArray *historyItems;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_historyItemsWereRemoved:(id)arg1;
- (bool)containsHistoryItem:(id)arg1;
- (void)dealloc;
- (void)groupHistoryItemsBySessionWithCompletionHandler:(id /* block */)arg1;
- (id)historyItems;
- (id)initWithTag:(id)arg1 historyItems:(id)arg2;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 databaseID:(long long)arg3 modificationTimestamp:(double)arg4 level:(long long)arg5;
- (void)removeHistoryItems:(id)arg1;
- (void)tagHistoryItem:(id)arg1;

@end
