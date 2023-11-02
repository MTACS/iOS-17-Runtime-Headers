
@interface HUSafetyAndSecuritySettingsNotificationsViewController : HUItemTableViewController {
    HMHome * _home;
    HUSafetyAndSecuritySettingsNotificationsItemModuleController * _moduleController;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HUSafetyAndSecuritySettingsNotificationsItemModuleController *moduleController;

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)moduleController;
- (void)setModuleController:(id)arg1;

@end
