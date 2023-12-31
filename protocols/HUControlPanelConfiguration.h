
@protocol HUControlPanelConfiguration <NSObject>

@required

- (Class)cellClass;
- (<HUControlPanelRule> *)rule;
- (void)setupControlsForCell:(HUControlPanelCell *)arg1 item:(HFControlPanelItem *)arg2;

@optional

- (NSString *)sectionFooterForItem:(HFControlPanelItem *)arg1 forSourceItem:(HFServiceItem *)arg2;
- (NSString *)sectionTitleForItem:(HFControlPanelItem *)arg1 forSourceItem:(HFServiceItem *)arg2;
- (bool)shouldShowSectionFooterForItem:(HFControlPanelItem *)arg1;
- (bool)shouldShowSectionTitleForItem:(HFControlPanelItem *)arg1;
- (HFValueTransformer *)valueTransformerForControlItem:(HFControlItem *)arg1;

@end
