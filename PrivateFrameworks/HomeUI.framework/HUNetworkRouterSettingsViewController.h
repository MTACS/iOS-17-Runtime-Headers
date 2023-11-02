
@interface HUNetworkRouterSettingsViewController : HUItemTableViewController <HUPresentationDelegate, HUSwitchCellDelegate> {
    HUNetworkConfigurationItemListModuleController * _networkConfigurationItemListModuleController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUNetworkRouterSettingsItemManager *itemManager;
@property (nonatomic, retain) HUNetworkConfigurationItemListModuleController *networkConfigurationItemListModuleController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)_networkRouterDetailsViewControllerClass;
- (bool)_shouldShowNetworkRouterDetails;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (id)initWithHome:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)networkConfigurationItemListModuleController;
- (id)presentNetworkConfigurationSettingsForProfile:(id)arg1 animated:(bool)arg2;
- (id)presentNetworkRouterSettingsForItem:(id)arg1 animated:(bool)arg2;
- (id)presentNetworkRouterSettingsForProfile:(id)arg1 animated:(bool)arg2;
- (void)setNetworkConfigurationItemListModuleController:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;

@end
