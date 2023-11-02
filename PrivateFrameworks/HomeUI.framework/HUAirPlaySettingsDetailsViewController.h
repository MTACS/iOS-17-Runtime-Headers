
@interface HUAirPlaySettingsDetailsViewController : HUItemTableViewController <HUHomeKitAccessorySettingDetailsViewControllerProtocol, HUHomeKitAccessorySettingsItemModuleControllerDelegate, HUSwitchCellDelegate> {
    HUAirPlaySettingsDetailsItemManager * _airPlaySettingsDetailsItemManager;
    NSMapTable * _cellToItemMap;
    NSMapTable * _moduleToModuleControllerMap;
}

@property (nonatomic, retain) HUAirPlaySettingsDetailsItemManager *airPlaySettingsDetailsItemManager;
@property (retain) NSMapTable *cellToItemMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *moduleToModuleControllerMap;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)airPlaySettingsDetailsItemManager;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)cellToItemMap;
- (id)initWithAccessorySettingItem:(id)arg1 module:(id)arg2;
- (id)itemModuleControllers;
- (id)moduleToModuleControllerMap;
- (void)setAirPlaySettingsDetailsItemManager:(id)arg1;
- (void)setCellToItemMap:(id)arg1;
- (void)setModuleToModuleControllerMap:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;

@end
