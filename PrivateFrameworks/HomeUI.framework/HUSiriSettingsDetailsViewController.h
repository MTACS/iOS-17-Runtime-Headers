
@interface HUSiriSettingsDetailsViewController : HUItemTableViewController <HUHomeKitAccessorySettingDetailsViewControllerProtocol, HUHomeKitAccessorySettingsItemModuleControllerDelegate, HUSwitchCellDelegate, UITextViewDelegate> {
    NSMapTable * _cellToItemMap;
    NSMapTable * _moduleToModuleControllerMap;
    HUSiriSettingsDetailsItemManager * _siriSettingsDetailsItemManager;
}

@property (retain) NSMapTable *cellToItemMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *moduleToModuleControllerMap;
@property (nonatomic, retain) HUSiriSettingsDetailsItemManager *siriSettingsDetailsItemManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_preflightCheckToAllowSwitchingForSettingItem:(id)arg1 changingToOn:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_updateSwitchSettingItem:(id)arg1 forCell:(id)arg2 withValue:(bool)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)cellToItemMap;
- (id)initWithAccessorySettingItem:(id)arg1 module:(id)arg2;
- (id)itemModuleControllers;
- (void)moduleController:(id)arg1 preflightCheckToAllowSwitchingForSettingItem:(id)arg2 changingToOn:(bool)arg3 withCompletion:(id /* block */)arg4;
- (id)moduleToModuleControllerMap;
- (void)setCellToItemMap:(id)arg1;
- (void)setModuleToModuleControllerMap:(id)arg1;
- (void)setSiriSettingsDetailsItemManager:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (id)siriSettingsDetailsItemManager;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;

@end
