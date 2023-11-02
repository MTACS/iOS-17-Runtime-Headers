
@protocol HUServiceActionControlsItemManagerDelegate <HFItemManagerDelegate>

@required

- (bool)itemManager:(HFItemManager *)arg1 shouldShowControlPanelItem:(HFControlPanelItem *)arg2;
- (bool)itemManager:(HFItemManager *)arg1 shouldShowSectionTitleForControlPanelItem:(HFControlPanelItem *)arg2;

@end
