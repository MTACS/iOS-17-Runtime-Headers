
@interface HUTriggerActionEditorItemManager : HFSimpleItemManager {
    HUTriggerHeaderItem * _addShortcutHeader;
    HUButtonItem * _addShortcutItem;
    HUViewControllerTableViewItem * _gridItem;
}

@property (nonatomic, retain) HUTriggerHeaderItem *addShortcutHeader;
@property (nonatomic, retain) HUButtonItem *addShortcutItem;
@property (nonatomic, retain) HUViewControllerTableViewItem *gridItem;

- (void).cxx_destruct;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)addShortcutHeader;
- (id)addShortcutItem;
- (id)gridItem;
- (id)initWithDelegate:(id)arg1 showShortcutItem:(bool)arg2;
- (void)setAddShortcutHeader:(id)arg1;
- (void)setAddShortcutItem:(id)arg1;
- (void)setGridItem:(id)arg1;

@end
