
@interface HUSoftwareUpdateStandaloneViewController : HUItemTableViewController <HUBannerViewDelegate, HUSoftwareUpdateItemModuleControllerDelegate, HUSwitchCellDelegate> {
    bool  _allowRefresh;
    HUFirmwareUpdateItemModuleController * _firmwareUpdateItemModuleController;
    HUGridLayoutOptions * _layoutOptions;
    bool  _showDoneButtonInNavBar;
    HUBannerView * _softwareUpdateBannerView;
    NAFuture * _softwareUpdateFetchFuture;
    HUSoftwareUpdateItemModuleController * _softwareUpdateItemModuleController;
    UIBarButtonItem * _updateAllBarButton;
    bool  _viewVisible;
}

@property (nonatomic) bool allowRefresh;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUFirmwareUpdateItemModuleController *firmwareUpdateItemModuleController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUSoftwareUpdateStandaloneItemManager *itemManager;
@property (nonatomic, retain) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) bool showDoneButtonInNavBar;
@property (nonatomic, retain) HUBannerView *softwareUpdateBannerView;
@property (nonatomic, retain) NAFuture *softwareUpdateFetchFuture;
@property (nonatomic, retain) HUSoftwareUpdateItemModuleController *softwareUpdateItemModuleController;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIBarButtonItem *updateAllBarButton;
@property (nonatomic) bool viewVisible;

- (void).cxx_destruct;
- (id)_createUpdateAllBarButton;
- (void)_didTapUpdateAllButton:(id)arg1;
- (bool)_homePodSoftwareUpdateInProgress;
- (void)_kickoffSoftwareUpdate;
- (void)_presentHomePodSoftwareUpdateAlreadyInProgressAlert;
- (void)_refreshUpdateAllBarButton;
- (void)_triggerRefresh:(id)arg1;
- (bool)allowRefresh;
- (void)bannerView:(id)arg1 footerViewTapped:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)diffableDataItemManager:(id)arg1 didUpdateItems:(id)arg2 addItems:(id)arg3 removeItems:(id)arg4;
- (void)doneButtonPressed:(id)arg1;
- (id)firmwareUpdateItemModuleController;
- (id)initWithHome:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (id)itemModuleControllers;
- (id)keyCommands;
- (id)layoutOptions;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAllowRefresh:(bool)arg1;
- (void)setFirmwareUpdateItemModuleController:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setShowDoneButtonInNavBar:(bool)arg1;
- (void)setSoftwareUpdateBannerView:(id)arg1;
- (void)setSoftwareUpdateFetchFuture:(id)arg1;
- (void)setSoftwareUpdateItemModuleController:(id)arg1;
- (void)setUpdateAllBarButton:(id)arg1;
- (void)setViewVisible:(bool)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (bool)showDoneButtonInNavBar;
- (id)softwareUpdateBannerView;
- (id)softwareUpdateFetchFuture;
- (id)softwareUpdateItemModuleController;
- (id)softwareUpdateModuleController:(id)arg1 dismissViewController:(id)arg2;
- (id)softwareUpdateModuleController:(id)arg1 navigateToViewController:(id)arg2;
- (id)softwareUpdateModuleController:(id)arg1 presentViewController:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)updateAllBarButton;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (bool)viewVisible;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
