
@interface HUMediaServiceTableViewController : HUItemTableViewController <HUAccessorySettingsItemModuleControllerDelegate, HUSwitchCellDelegate> {
    HUMediaServiceItem * _mediaServiceItem;
    HUMediaServiceItemManager * _mediaServiceItemManager;
    HFUserItem * _userItem;
    HUAccessorySettingsItemModuleController * _userSettingsItemModuleController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HUMediaServiceItem *mediaServiceItem;
@property (nonatomic, readonly, copy) HUMediaServiceItemManager *mediaServiceItemManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HFUserItem *userItem;
@property (nonatomic, retain) HUAccessorySettingsItemModuleController *userSettingsItemModuleController;

- (void).cxx_destruct;
- (void)_removeService;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithItem:(id)arg1 mediaServiceItem:(id)arg2;
- (id)itemModuleControllers;
- (id)mediaServiceItem;
- (id)mediaServiceItemManager;
- (void)moduleController:(id)arg1 preflightCheckToAllowSwitchingForSettingItem:(id)arg2 changingToOn:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)moduleController:(id)arg1 presentGroup:(id)arg2;
- (id)moduleController:(id)arg1 requestPresentViewController:(id)arg2 animated:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)moduleController:(id)arg1 settingUpdatedForItem:(id)arg2;
- (bool)moduleController:(id)arg1 shouldDisableItem:(id)arg2;
- (void)setUserSettingsItemModuleController:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideFooterBelowSection:(long long)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (id)userItem;
- (id)userSettingsItemModuleController;
- (void)viewDidLoad;

@end
