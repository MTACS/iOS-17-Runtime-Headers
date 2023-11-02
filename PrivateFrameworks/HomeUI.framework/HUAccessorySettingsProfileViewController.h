
@interface HUAccessorySettingsProfileViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol, HUAccessorySettingsProfileModuleControllerDelegate, HUAccessorySettingsProfileModuleDelegate> {
    HFAccessorySettingGroupItem * _item;
    HUAccessorySettingsProfileModule * _profileModule;
    HUAccessorySettingsProfileModuleController * _profileModuleController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HFAccessorySettingGroupItem *item;
@property (nonatomic, retain) HUAccessorySettingsProfileModule *profileModule;
@property (nonatomic, retain) HUAccessorySettingsProfileModuleController *profileModuleController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accessorySettingsProfileModuleController:(id)arg1 needsNavigationToController:(id)arg2;
- (id)hu_preloadContent;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (id)item;
- (id)itemModuleControllers;
- (id)profileModule;
- (id)profileModuleController;
- (void)setProfileModule:(id)arg1;
- (void)setProfileModuleController:(id)arg1;
- (id)settingsProfileModule:(id)arg1 wantsProfileItemDeleted:(id)arg2;

@end
