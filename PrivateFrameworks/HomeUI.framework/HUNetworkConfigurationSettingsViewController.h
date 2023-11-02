
@interface HUNetworkConfigurationSettingsViewController : HUItemTableViewController <UITextViewDelegate> {
    HUNetworkConfigurationSettingsModuleController * _networkConfigurationSettingsModuleController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUNetworkConfigurationSettingsItemManager *itemManager;
@property (nonatomic, retain) HUNetworkConfigurationSettingsModuleController *networkConfigurationSettingsModuleController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithNetworkConfigurationGroupItem:(id)arg1;
- (void)itemManagerDidFinishUpdate:(id)arg1;
- (id)networkConfigurationSettingsModuleController;
- (void)setNetworkConfigurationSettingsModuleController:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)updateNetworkConfigurationSettingsModuleFooter;

@end
