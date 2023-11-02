
@interface HFReorderableItemList : HFReorderableItemListAbstractBase {
    void applicationDataKey;
    void sortedIdentifiers;
}

@property (nonatomic, readonly) bool isEmpty;

- (void).cxx_destruct;
- (id)initWithApplicationDataContainer:(id)arg1 category:(id)arg2;
- (bool)isEmpty;
- (id)saveWithSender:(id)arg1;
- (void)setSortedItems:(id)arg1;
- (bool)sortedIdentifiersWithIdentifier1:(id)arg1 identifier2:(id)arg2;
- (bool)sortedItemsWithItem1:(id)arg1 item2:(id)arg2;

@end
