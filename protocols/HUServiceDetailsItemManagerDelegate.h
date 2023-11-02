
@protocol HUServiceDetailsItemManagerDelegate <HFItemManagerDelegate>

@required

- (NSString *)itemManager:(HFItemManager *)arg1 sectionFooterForControlPanelItem:(HFControlPanelItem *)arg2 forServiceItem:(HFServiceItem *)arg3;
- (NSString *)itemManager:(HFItemManager *)arg1 sectionTitleForControlPanelItem:(HFControlPanelItem *)arg2 forServiceItem:(HFServiceItem *)arg3;
- (bool)itemManager:(HFItemManager *)arg1 shouldShowControlPanelItem:(HFControlPanelItem *)arg2;
- (bool)itemManager:(HFItemManager *)arg1 shouldShowSectionTitleForControlPanelItem:(HFControlPanelItem *)arg2;
- (void)updateSiriFooter:(NSAttributedString *)arg1;

@end
