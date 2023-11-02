
@interface HUPrimaryUserSettingsItemModuleController : HUItemModuleController

- (Class)cellClassForItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;
- (id)updatePrimaryUserSelectionType:(unsigned long long)arg1 user:(id)arg2;

@end
