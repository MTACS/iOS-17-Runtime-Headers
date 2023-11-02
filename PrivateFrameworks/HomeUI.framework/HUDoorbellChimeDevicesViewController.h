
@interface HUDoorbellChimeDevicesViewController : HUItemTableViewController <HFItemManagerDelegate, HUAccessorySettingsDetailsViewControllerProtocol, HUHomeKitAccessorySettingDetailsViewControllerProtocol, HUSwitchCellDelegate> {
    HUDoorbellChimeDevicesItemManager * _doorbellChimeDevicesItemManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUDoorbellChimeDevicesItemManager *doorbellChimeDevicesItemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)doorbellChimeDevicesItemManager;
- (id)init;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (id)initWithAccessorySettingItem:(id)arg1;
- (id)initWithAccessorySettingItem:(id)arg1 module:(id)arg2;
- (void)setDoorbellChimeDevicesItemManager:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;

@end
