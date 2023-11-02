
@interface HUAnnounceSettingsViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol> {
    HMHome * _home;
    HUAnnounceSettingsItemModuleController * _moduleController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HUAnnounceSettingsItemModuleController *moduleController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)home;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (id)initWithAccessorySettingItem:(id)arg1;
- (id)initWithAccessorySettingItem:(id)arg1 module:(id)arg2;
- (id)initWithHome:(id)arg1;
- (id)moduleController;
- (void)setModuleController:(id)arg1;

@end
