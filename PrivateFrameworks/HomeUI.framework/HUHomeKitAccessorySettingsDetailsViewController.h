
@interface HUHomeKitAccessorySettingsDetailsViewController : HUItemTableViewController <HFHomeKitAccessorySettingsDataSourceDelegate> {
    HUHomeKitAccessorySettingsItemModule * _collapsedModule;
    HUHomeKitAccessorySettingsItemModuleController * _moduleController;
}

@property (nonatomic, retain) HUHomeKitAccessorySettingsItemModule *collapsedModule;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUHomeKitAccessorySettingsItemModuleController *moduleController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)collapsedModule;
- (void)didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)arg1 settings:(id)arg2;
- (void)dismissPrivacyController;
- (id)initWithCollapsedAccessorySettingItemModule:(id)arg1;
- (id)moduleController;
- (void)setCollapsedModule:(id)arg1;
- (void)setModuleController:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end
