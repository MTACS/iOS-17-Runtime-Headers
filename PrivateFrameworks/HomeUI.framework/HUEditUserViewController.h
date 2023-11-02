
@interface HUEditUserViewController : HUUserTableViewController <HUAboutResidentDeviceFooterViewDelegate, HUAboutResidentDeviceViewControllerDelegate, HUAccessorySettingsItemModuleControllerDelegate, HUMediaServiceSettingsItemModuleControllerDelegate, HUSwitchCellDelegate, UINavigationControllerDelegate, UITextViewDelegate> {
    HUAboutResidentDeviceFooterView * _aboutResidentDeviceFooterView;
    HUEditUserItemManager * _editUserItemManager;
    HUMediaServiceSettingsItemModuleController * _mediaServiceSettingsItemModuleController;
    HUPendingAccessoriesGridViewController * _pendingAccessoriesViewController;
    HFPinCodeManager * _pinCodeManager;
    HFUserItem * _userItem;
    HUAccessorySettingsItemModuleController * _userSettingsItemModuleController;
}

@property (nonatomic, retain) HUAboutResidentDeviceFooterView *aboutResidentDeviceFooterView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HUEditUserItemManager *editUserItemManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUMediaServiceSettingsItemModuleController *mediaServiceSettingsItemModuleController;
@property (nonatomic, readonly) HUPendingAccessoriesGridViewController *pendingAccessoriesViewController;
@property (nonatomic, retain) HFPinCodeManager *pinCodeManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HFUserItem *userItem;
@property (nonatomic, retain) HUAccessorySettingsItemModuleController *userSettingsItemModuleController;

- (void).cxx_destruct;
- (void)_handleUpdatedItem:(id)arg1 atIndexPath:(id)arg2;
- (id)_lazyAboutResidentDeviceFooterView;
- (void)_removeUser;
- (id)aboutResidentDeviceFooterView;
- (void)aboutResidentDeviceViewControllerDidFinish:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)childViewControllersToPreload;
- (void)didSelectDefaultAccounts:(id)arg1;
- (void)diffableDataItemManager:(id)arg1 didUpdateItems:(id)arg2 addItems:(id)arg3 removeItems:(id)arg4;
- (void)doneButtonTapped:(id)arg1;
- (id)editUserItemManager;
- (id)initWithItem:(id)arg1 home:(id)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (id)itemModuleControllers;
- (void)learnMoreLinkTapped:(id)arg1;
- (id)mediaServiceSettingsItemModuleController;
- (void)mediaServiceSettingsItemModuleController:(id)arg1 didSelectMediaService:(id)arg2;
- (void)moduleController:(id)arg1 preflightCheckToAllowSwitchingForSettingItem:(id)arg2 changingToOn:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)moduleController:(id)arg1 presentGroup:(id)arg2;
- (id)moduleController:(id)arg1 requestPresentViewController:(id)arg2 animated:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)moduleController:(id)arg1 settingUpdatedForItem:(id)arg2;
- (bool)moduleController:(id)arg1 shouldDisableItem:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)pendingAccessoriesViewController;
- (id)pinCodeManager;
- (id)presentDefaultAccountViewController;
- (id)presentPinDetailsViewController;
- (void)setAboutResidentDeviceFooterView:(id)arg1;
- (void)setMediaServiceSettingsItemModuleController:(id)arg1;
- (void)setPinCodeManager:(id)arg1;
- (void)setUserSettingsItemModuleController:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (id)user;
- (id)userItem;
- (id)userSettingsItemModuleController;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
