
@interface WBSWebExtensionContextMenuItemManager : NSObject {
    NSMutableDictionary * _entriesByIdentifier;
    NSMutableOrderedSet * _topLevelEntries;
}

- (void).cxx_destruct;
- (id)_itemToShowForEntry:(id)arg1 inContext:(id)arg2 inheritedContextTypes:(id)arg3;
- (void)_radioEntryDidMoveToGroup:(id)arg1;
- (void)_radioEntryWillBeRemovedFromGroup:(id)arg1;
- (id)_radioGroupForEntry:(id)arg1;
- (void)_radioGroupWillBeSplitByEntry:(id)arg1;
- (void)_toggleCheckedStateOfEntry:(id)arg1;
- (void)_updateNeighboringRadioGroupsForItemBeingRemoved:(id)arg1;
- (void)addItem:(id)arg1 outErrorMessage:(id*)arg2;
- (id)didSelectItem:(id)arg1;
- (id)init;
- (id)itemsToShowInContext:(id)arg1;
- (void)removeAllItems;
- (void)removeItemWithIdentifier:(id)arg1 outErrorMessage:(id*)arg2;
- (void)updateItemWithIdentifier:(id)arg1 properties:(id)arg2 outErrorMessage:(id*)arg3;

@end
