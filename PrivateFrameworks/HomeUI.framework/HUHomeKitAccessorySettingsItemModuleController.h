
@interface HUHomeKitAccessorySettingsItemModuleController : HUItemModuleController <HUSwitchCellDelegate> {
    NSMapTable * _cellToItemMap;
    <HUHomeKitAccessorySettingsItemModuleControllerDelegate> * _delegate;
}

@property (retain) NSMapTable *cellToItemMap;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUHomeKitAccessorySettingsItemModuleControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateSwitchSettingItem:(id)arg1 forCell:(id)arg2 withValue:(bool)arg3;
- (Class)cellClassForItem:(id)arg1;
- (id)cellToItemMap;
- (id)delegate;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1 delegate:(id)arg2;
- (void)setCellToItemMap:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
