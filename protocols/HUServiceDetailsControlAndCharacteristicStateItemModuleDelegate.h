
@protocol HUServiceDetailsControlAndCharacteristicStateItemModuleDelegate <NSObject>

@required

- (NSSet *)controlAndCharacteristicStateItemModule:(HUServiceDetailsControlAndCharacteristicStateItemModule *)arg1 childItemsForItem:(HFItem *)arg2;
- (NSString *)controlAndCharacteristicStateItemModule:(HUServiceDetailsControlAndCharacteristicStateItemModule *)arg1 sectionFooterForControlPanelItem:(HFControlPanelItem *)arg2 forServiceItem:(HFServiceItem *)arg3;
- (NSString *)controlAndCharacteristicStateItemModule:(HUServiceDetailsControlAndCharacteristicStateItemModule *)arg1 sectionTitleForControlPanelItem:(HFControlPanelItem *)arg2 forServiceItem:(HFServiceItem *)arg3;
- (bool)controlAndCharacteristicStateItemModule:(HUServiceDetailsControlAndCharacteristicStateItemModule *)arg1 shouldShowControlPanelItem:(HFControlPanelItem *)arg2;
- (bool)controlAndCharacteristicStateItemModule:(HUServiceDetailsControlAndCharacteristicStateItemModule *)arg1 shouldShowSectionTitleForControlPanelItem:(HFControlPanelItem *)arg2;

@end
