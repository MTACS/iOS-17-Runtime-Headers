
@interface HUAccessorySettingsSiriOutputVoiceViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol, HUHomeKitAccessorySettingDetailsViewControllerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUAccessorySettingsSiriOutputVoiceItemManager *itemManager;
@property (readonly) Class superclass;

- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (id)initWithAccessorySettingItem:(id)arg1 module:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;

@end
