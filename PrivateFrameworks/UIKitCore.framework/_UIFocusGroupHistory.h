
@interface _UIFocusGroupHistory : NSObject {
    NSMapTable * _groupToItemMap;
}

- (void).cxx_destruct;
- (void)_uiktest_clearHistory;
- (id)init;
- (id)lastFocusedItemForGroupIdentifier:(id)arg1;
- (void)setLastFocusedItem:(id)arg1 forGroupIdentifier:(id)arg2;

@end
