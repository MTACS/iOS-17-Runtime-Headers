
@interface HUUserNotificationTopicServiceListModuleController : HUItemModuleController

- (bool)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (Class)collectionCellClassForItem:(id)arg1;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (unsigned long long)didSelectItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (id)showNotificationSettingsForServiceLikeItem:(id)arg1 animated:(bool)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
