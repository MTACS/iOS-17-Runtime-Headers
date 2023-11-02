
@interface HUAccessorySettingsDetailsViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol, HUAccessorySettingsItemModuleControllerDelegate> {
    HUAccessorySettingsItemModuleController * _accessorySettingsItemModuleController;
    HFAccessorySettingItem * _fileUploadItem;
    HFAccessorySettingGroupItem * _groupItem;
}

@property (nonatomic, retain) HUAccessorySettingsItemModuleController *accessorySettingsItemModuleController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFAccessorySettingItem *fileUploadItem;
@property (nonatomic, retain) HFAccessorySettingGroupItem *groupItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessorySettingsItemManager;
- (id)accessorySettingsItemModuleController;
- (id)fileUploadItem;
- (id)groupItem;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)itemModuleControllers;
- (void)moduleController:(id)arg1 presentGroup:(id)arg2;
- (id)moduleController:(id)arg1 requestPresentViewController:(id)arg2 animated:(bool)arg3;
- (void)setAccessorySettingsItemModuleController:(id)arg1;
- (void)setFileUploadItem:(id)arg1;
- (void)setGroupItem:(id)arg1;

@end
