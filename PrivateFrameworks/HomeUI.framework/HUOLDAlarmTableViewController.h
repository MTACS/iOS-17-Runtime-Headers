
@interface HUOLDAlarmTableViewController : HUItemTableViewController <HFAccessoryObserver, HFAccessorySettingMobileTimerAdapterObserver, HFMediaObjectObserver, HUAlarmEditViewControllerDelegate, HUHomePodAlarmItemModuleControllerDelegate, HUPresentationDelegateHost, UITableViewDelegatePrivate> {
    HUHomePodAlarmItemModuleController * _alarmModuleController;
    UIBarButtonItem * _doneButtonItem;
    bool  _isAccessoryControllable;
    bool  _isAlarmsSettingReady;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    _UIContentUnavailableView * _noItemsView;
    <HUPresentationDelegate> * _presentationDelegate;
}

@property (nonatomic, retain) HUHomePodAlarmItemModuleController *alarmModuleController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *doneButtonItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAccessoryControllable;
@property (nonatomic, readonly) bool isAlarmsSettingReady;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, retain) _UIContentUnavailableView *noItemsView;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_discernReachabilityForAccessory:(id)arg1;
- (void)_editDoneAction:(id)arg1;
- (void)_layoutNoItemsLabel;
- (void)_numberOfItemsDidChangeAnimated:(bool)arg1;
- (void)_updateAccessoryControllable:(bool)arg1 alarmsSettingReady:(bool)arg2;
- (void)accessoryDidUpdateControllable:(id)arg1;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)accessoryDidUpdateReachableTransports:(id)arg1;
- (void)alarmEditController:(id)arg1 didAddAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didAddAlarm:(id)arg2 forMediaProfile:(id)arg3;
- (void)alarmEditController:(id)arg1 didDeleteAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didDeleteAlarm:(id)arg2 forMediaProfile:(id)arg3;
- (void)alarmEditController:(id)arg1 didEditAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didEditAlarm:(id)arg2 forMediaProfile:(id)arg3;
- (void)alarmEditControllerDidCancel:(id)arg1;
- (void)alarmEditControllerGettingDismissed:(id)arg1;
- (id)alarmItemManager;
- (void)alarmItemModuleController:(id)arg1 didSelectAlarmItem:(id)arg2;
- (id)alarmModuleController;
- (bool)alwaysUseDeltaTableViewUpdatesAfterViewHasAppeared;
- (id)backgroundView;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)doneButtonItem;
- (id)editViewControllerForAlarmItem:(id)arg1;
- (double)heightForFooterInTableView:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1;
- (bool)isAccessoryControllable;
- (bool)isAlarmsSettingReady;
- (void)itemManagerDidUpdate:(id)arg1;
- (id)itemModuleControllers;
- (id)mediaProfileContainer;
- (void)mobileTimerAdapterDidUpdateReadiness:(id)arg1;
- (id)noItemsView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)presentAddNewAlarmViewController;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)presentationDelegate;
- (void)setAlarmModuleController:(id)arg1;
- (void)setDoneButtonItem:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setNoItemsView:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (bool)shouldHideFooterBelowSection:(long long)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
