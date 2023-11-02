
@interface HUServiceDetailsViewController : HUItemTableViewController <HFAccessoryObserver, HFHomeObserver, HUAccessorySettingsItemModuleControllerDelegate, HUChildServiceModuleControllerDelegate, HUContainedAccessoryElementsGridViewControllerDelegate, HUContainedMediaAccessoriesGridViewControllerDelegate_legacy, HUContainedServiceGridViewControllerDelegate_legacy, HUControlPanelControllerDelegate, HUDetailsPresentationDelegateHost, HUEditRoomViewControllerPresentationDelegate, HUHomeAssistantDeviceSplitAccountActionDelegate, HUHomeKitAccessorySettingsItemModuleControllerDelegate, HUMatterConnectedServicesViewControllerDelegate, HUMediaSystemEditorViewControllerDelegate, HUPickerCellDelegate, HUPresentationDelegate, HUServiceDetailsItemManagerDelegate, HUServiceGroupEditorViewControllerDelegate, HUServiceLikeItemDetailsViewControllerProtocol, HUSoftwareUpdateItemModuleControllerDelegate, HUSwitchCellDelegate, HUTriggerEditorDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate> {
    HUChildServiceItemModuleController * _accessoryServicesEditorItemModuleController;
    HUAccessorySettingsItemModuleController * _accessorySettingsItemModuleController;
    NAFuture * _accountFuture;
    HUAvailableRelatedTriggerItemModuleController * _associatedTriggerModuleController;
    UIButton * _closeButton;
    HUMatterConnectedServicesItemModuleController * _connectedServicesItemModuleController;
    HUControlPanelController * _controlPanelController;
    HUServiceDetailsItemManager * _detailsItemManager;
    NSHashTable * _expandedControlPanelItems;
    HMHome * _home;
    NAFuture * _homePodIdentifyFuture;
    long long  _inProgressExportDiagnosticsIndex;
    HUChildServiceItemModuleController * _inputSourceItemModuleController;
    bool  _isItemGroup;
    bool  _isMultiServiceAccessory;
    bool  _isPresentingRoomsList;
    UILongPressGestureRecognizer * _longPressRecognizer;
    NSMapTable * _moduleToModuleControllerMap;
    HUNameItemModuleController * _nameItemModuleController;
    HFNamingComponents * _namingComponent;
    HUQuickControlSummaryNavigationBarTitleView * _navigationBarTitleView;
    <HUPresentationDelegate> * _presentationDelegate;
    HUQuickControlProxHandOffSummaryViewUpdater * _proxHandOffSummaryViewUpdater;
    NSMutableSet * _registeredButtonFutures;
    bool  _requiresPresentingViewControllerDismissal;
    HUAssociatedSceneAndTriggerModuleController * _sceneAndTriggerModuleController;
    bool  _shouldDisableAdditionalDismissalForTogglingSeparatingTiles;
    bool  _shouldIncludeRoomNameInHeaderTitle;
    bool  _shouldTrackProgrammableSwitchActivations;
    HUSoftwareUpdateItemModuleController * _softwareUpdateItemModuleController;
    bool  _supportsCustomIconEditing;
    HUTelevisionSettingsItemModuleController * _televisionSettingsItemModuleController;
    HUServiceDetailsTextViewDelegate * _textViewDelegate;
    HUChildServiceItemModuleController * _valveEditorItemModuleController;
}

@property (nonatomic, retain) HUChildServiceItemModuleController *accessoryServicesEditorItemModuleController;
@property (nonatomic, retain) HUAccessorySettingsItemModuleController *accessorySettingsItemModuleController;
@property (nonatomic, retain) NAFuture *accountFuture;
@property (nonatomic, retain) HUAvailableRelatedTriggerItemModuleController *associatedTriggerModuleController;
@property (nonatomic, retain) UIButton *closeButton;
@property (nonatomic, retain) HUMatterConnectedServicesItemModuleController *connectedServicesItemModuleController;
@property (nonatomic, readonly) HUControlPanelController *controlPanelController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) HUServiceDetailsItemManager *detailsItemManager;
@property (nonatomic, readonly) NSHashTable *expandedControlPanelItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) NAFuture *homePodIdentifyFuture;
@property (nonatomic) long long inProgressExportDiagnosticsIndex;
@property (nonatomic, retain) HUChildServiceItemModuleController *inputSourceItemModuleController;
@property (nonatomic, readonly) bool isItemGroup;
@property (nonatomic, readonly) bool isMultiServiceAccessory;
@property (nonatomic) bool isPresentingRoomsList;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *item;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressRecognizer;
@property (nonatomic, retain) NSMapTable *moduleToModuleControllerMap;
@property (nonatomic, retain) HUNameItemModuleController *nameItemModuleController;
@property (nonatomic, retain) HFNamingComponents *namingComponent;
@property (nonatomic, retain) HUQuickControlSummaryNavigationBarTitleView *navigationBarTitleView;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (nonatomic, retain) HUQuickControlProxHandOffSummaryViewUpdater *proxHandOffSummaryViewUpdater;
@property (nonatomic, retain) NSMutableSet *registeredButtonFutures;
@property (nonatomic) bool requiresPresentingViewControllerDismissal;
@property (nonatomic, retain) HUAssociatedSceneAndTriggerModuleController *sceneAndTriggerModuleController;
@property (nonatomic) bool shouldDisableAdditionalDismissalForTogglingSeparatingTiles;
@property (nonatomic) bool shouldIncludeRoomNameInHeaderTitle;
@property (nonatomic) bool shouldTrackProgrammableSwitchActivations;
@property (nonatomic, retain) HUSoftwareUpdateItemModuleController *softwareUpdateItemModuleController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsCustomIconEditing;
@property (nonatomic, retain) HUTelevisionSettingsItemModuleController *televisionSettingsItemModuleController;
@property (nonatomic, retain) HUServiceDetailsTextViewDelegate *textViewDelegate;
@property (nonatomic, retain) HUChildServiceItemModuleController *valveEditorItemModuleController;

+ (id)acceptableItemClasses;

- (void).cxx_destruct;
- (bool)_allowRowHighlightForItem:(id)arg1;
- (bool)_allowRowSelectionForItem:(id)arg1;
- (bool)_canShowWhileLocked;
- (id)_characteristicsAffectedByControlItem:(id)arg1;
- (void)_closeButtonPressed:(id)arg1;
- (id)_commitBuilder;
- (id)_commitBuilderFor:(id)arg1 with:(id)arg2;
- (id)_createMenuWithValues:(id)arg1 cell:(id)arg2 currentItem:(id)arg3;
- (void)_didRemoveHomeKitObject:(id)arg1;
- (void)_didSelectRoomItem:(id)arg1;
- (void)_executeSilentSoftwareUpdateCheck;
- (void)_exportDiagnosticsForItem:(id)arg1;
- (void)_identifyHomePod;
- (bool)_isCameraItem;
- (void)_longPressRecognized:(id)arg1;
- (id)_magicallyUpdateNavigationStackForNewRootItem:(id)arg1 topViewController:(id)arg2;
- (id)_microphoneStatus;
- (void)_notifyOfHomePodPairingIfNecessary:(id)arg1;
- (bool)_notifyOfHomeTheaterReconfigurationIfNecessary:(id)arg1;
- (void)_offerToCreateHomeTheaterIfPossible:(id)arg1;
- (void)_presentContainedItems;
- (void)_presentEcosystemAccessoryRemoveConfirmation:(id)arg1;
- (void)_presentGroupPicker;
- (void)_presentHomeAccessoryRemoveConfirmation:(id)arg1;
- (void)_presentRemoveConfirmation:(id)arg1;
- (void)_presentRemoveFromGroupConfirmation:(id)arg1;
- (void)_presentRemoveRouterConfirmation;
- (void)_presentResetHomePodConfirmation:(id)arg1;
- (void)_presentTriggerEditorForProgrammableSwitchEventOptionItem:(id)arg1;
- (id)_primaryStatusTextForLatestResults:(id)arg1 showingSecondaryStatus:(bool)arg2;
- (id)_recoverItemBuilder:(id)arg1 fromError:(id)arg2;
- (void)_registerButtonActionHandler:(id)arg1 item:(id)arg2;
- (id)_removeFromGroup;
- (id)_removeItem;
- (void)_restartGroupedHomePodAccessory;
- (void)_restartHomePod;
- (id)_roomForItem:(id)arg1;
- (id)_roomUpdateBuilderFor:(id)arg1;
- (id)_secondaryStatusTextForLatestResults:(id)arg1;
- (void)_separateOrUnifyTile;
- (void)_setDismissedHomePodHasNonMemberMediaAccountWarning:(bool)arg1;
- (void)_setupProgrammableSwitchCell:(id)arg1 forItem:(id)arg2;
- (bool)_shouldFollowTitleValueTintColorforItem:(id)arg1;
- (bool)_shouldPresentRemoveRouterConfirmation;
- (bool)_shouldShowAddButtonForOptionItem:(id)arg1;
- (bool)_shouldShowDetailDisclosureForItem:(id)arg1;
- (bool)_shouldShowHomeTheaterPrompt;
- (void)_updateAssociatedServiceTypeCells;
- (void)_updateCheckedStateForAssociatedServiceTypeCell:(id)arg1 item:(id)arg2;
- (void)_updateControlStatusText;
- (void)_updateIconDescriptorAnimated:(bool)arg1;
- (void)_updateName:(id)arg1;
- (void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3;
- (void)accessoryDidUpdateControllable:(id)arg1;
- (void)accessoryDidUpdateServices:(id)arg1;
- (id)accessoryServicesEditorItemModuleController;
- (id)accessorySettingsItemModuleController;
- (id)accountFuture;
- (void)addRoomButtonPressed:(id)arg1;
- (id)associatedTriggerModuleController;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (bool)automaticallyUpdatesViewControllerTitle;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)checkForAccessoriesNeedingReprovisioning;
- (id)childServiceEditorModuleController:(id)arg1 didSelectItem:(id)arg2;
- (id)closeButton;
- (void)commitChanges;
- (id)connectedServicesItemModuleController;
- (id)controlPanelController;
- (void)controlPanelController:(id)arg1 didEndPossibleWritesForControlItem:(id)arg2;
- (void)controlPanelController:(id)arg1 willBeginPossibleWritesForControlItem:(id)arg2;
- (id)createAccessoryDetailInfoListModuleControllerWith:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)detailsItemManager;
- (id)detailsViewControllerFor:(id)arg1 item:(id)arg2;
- (id)detailsViewControllerForContainedMediaAccessoryGridViewController:(id)arg1 item:(id)arg2;
- (id)detailsViewControllerForContainedServiceGridViewController:(id)arg1 item:(id)arg2;
- (void)didRemoveCHIPPairingforAccessory:(id)arg1;
- (void)didSelectHeaderWarningAction:(id)arg1;
- (void)didSelectHomeAssistantDeviceSplitAccountAction:(unsigned long long)arg1;
- (void)diffableDataItemManager:(id)arg1 didUpdateItems:(id)arg2 addItems:(id)arg3 removeItems:(id)arg4;
- (void)diffableDataItemManager:(id)arg1 willUpdateItems:(id)arg2 addItems:(id)arg3 removeItems:(id)arg4 isInitialLoad:(bool)arg5;
- (void)dismissPrivacyController;
- (void)dismissTriggerActionEditorViewController:(id)arg1;
- (void)editRoomViewControllerDidFinish:(id)arg1 withNewRoom:(id)arg2;
- (id)expandedControlPanelItems;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasDetailsActionFor:(id)arg1 item:(id)arg2;
- (bool)hasDetailsActionForContainedServiceGridViewController:(id)arg1 item:(id)arg2;
- (id)home;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveMediaSystem:(id)arg2;
- (void)home:(id)arg1 didRemoveServiceGroup:(id)arg2;
- (id)homePodIdentifyFuture;
- (long long)inProgressExportDiagnosticsIndex;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithServiceLikeItem:(id)arg1;
- (id)inputSourceItemModuleController;
- (bool)isItemGroup;
- (bool)isMultiServiceAccessory;
- (bool)isPresentingRoomsList;
- (id)item;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)itemManager:(id)arg1 sectionFooterForControlPanelItem:(id)arg2 forServiceItem:(id)arg3;
- (id)itemManager:(id)arg1 sectionTitleForControlPanelItem:(id)arg2 forServiceItem:(id)arg3;
- (bool)itemManager:(id)arg1 shouldShowControlPanelItem:(id)arg2;
- (bool)itemManager:(id)arg1 shouldShowSectionTitleForControlPanelItem:(id)arg2;
- (id)itemModuleControllers;
- (id)longPressRecognizer;
- (void)mediaSystemEditor:(id)arg1 didAbortDueTo:(id)arg2;
- (void)mediaSystemEditor:(id)arg1 didCreate:(id)arg2;
- (void)moduleController:(id)arg1 expandModule:(id)arg2;
- (void)moduleController:(id)arg1 presentSettingDetailsViewController:(id)arg2;
- (id)moduleToModuleControllerMap;
- (id)nameItemModuleController;
- (id)namingComponent;
- (id)navigationBarTitleView;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (long long)numberOfValuesForPickerViewCell:(id)arg1;
- (void)pickerViewCell:(id)arg1 didSelectValueAtIndex:(long long)arg2;
- (id)pickerViewCell:(id)arg1 titleForValueAtIndex:(long long)arg2;
- (id)presentationDelegate;
- (id)proxHandOffSummaryViewUpdater;
- (id)registeredButtonFutures;
- (bool)requiresPresentingViewControllerDismissal;
- (id)sceneAndTriggerModuleController;
- (void)serviceGroupEditor:(id)arg1 didCreateServiceGroup:(id)arg2;
- (void)setAccessoryServicesEditorItemModuleController:(id)arg1;
- (void)setAccessorySettingsItemModuleController:(id)arg1;
- (void)setAccountFuture:(id)arg1;
- (void)setAssociatedTriggerModuleController:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setConnectedServicesItemModuleController:(id)arg1;
- (void)setDetailsItemManager:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setHomePodIdentifyFuture:(id)arg1;
- (void)setInProgressExportDiagnosticsIndex:(long long)arg1;
- (void)setInputSourceItemModuleController:(id)arg1;
- (void)setIsPresentingRoomsList:(bool)arg1;
- (void)setLongPressRecognizer:(id)arg1;
- (void)setModuleToModuleControllerMap:(id)arg1;
- (void)setNameItemModuleController:(id)arg1;
- (void)setNamingComponent:(id)arg1;
- (void)setNavigationBarTitleView:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setProxHandOffSummaryViewUpdater:(id)arg1;
- (void)setRegisteredButtonFutures:(id)arg1;
- (void)setRequiresPresentingViewControllerDismissal:(bool)arg1;
- (void)setSceneAndTriggerModuleController:(id)arg1;
- (void)setShouldDisableAdditionalDismissalForTogglingSeparatingTiles:(bool)arg1;
- (void)setShouldIncludeRoomNameInHeaderTitle:(bool)arg1;
- (void)setShouldTrackProgrammableSwitchActivations:(bool)arg1;
- (void)setSoftwareUpdateItemModuleController:(id)arg1;
- (void)setTelevisionSettingsItemModuleController:(id)arg1;
- (void)setTextViewDelegate:(id)arg1;
- (void)setValveEditorItemModuleController:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldDisableAdditionalDismissalForTogglingSeparatingTiles;
- (bool)shouldHideFooterBelowSection:(long long)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (bool)shouldIncludeRoomNameInHeaderTitle;
- (bool)shouldTrackProgrammableSwitchActivations;
- (id)showConnectedEcosystems;
- (id)softwareUpdateItemModuleController;
- (id)softwareUpdateModuleController:(id)arg1 dismissViewController:(id)arg2;
- (id)softwareUpdateModuleController:(id)arg1 navigateToViewController:(id)arg2;
- (id)softwareUpdateModuleController:(id)arg1 presentViewController:(id)arg2;
- (bool)supportsCustomIconEditing;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)televisionSettingsItemModuleController;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)textViewDelegate;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;
- (bool)triggerEditor:(id)arg1 shouldCommitTriggerBuilder:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)updateSiriFooter:(id)arg1;
- (id)valveEditorItemModuleController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillDismiss;

@end