
@interface HUDashboardViewController : HUControllableItemCollectionViewController <HFAccessoryObserver, HFExecutionEnvironmentObserver, HFHomeManagerObserver, HFHomeObserver, HUAccessoryTileCellDelegate, HUBannerItemModuleControllerDelegate, HUCollectionLayoutManagerDelegate, HUDashboardItemManagerDelegate, HUEditActionDelegate, HUEditRoomViewControllerPresentationDelegate, HUEnergyDashboardItemModuleControllerDelegate, HUHomeKitObjectPresenting, HUNavigationBarButtonOwner, HUPerformanceTestableViewController, HUPreloadableViewController, HUPresentationDelegate, HURoomSettingsDelegate, UICollectionViewDropDelegate, UIViewControllerTransitioningDelegate> {
    HUAccessoryControlAnimator * _accessoryControlAnimator;
    HUBannerItemModuleController * _bannerItemModuleController;
    HUBlurGroupingEffectView * _blurGroupingEffectView;
    HUDashboardCameraItemModuleController * _cameraItemModuleController;
    HUDashboardContext * _context;
    <HUDashboardViewControllerDelegate> * _delegate;
    NSDate * _energyCategoryViewStartTime;
    UIView * _energyIndicatorView;
    HUROARUpgradeView * _homeUpgradedToRoarView;
    bool  _isOverlay;
    HFItem<HFAccessoryRepresentableItem> * _itemShowingSizeToggleButton;
    HUDashboardLayoutManager * _layoutManager;
    HUNavigationBarButton * _navigationAddButton;
    HUNavigationBarButton * _navigationAnnounceButton;
    HUNavigationBarButton * _navigationEditDoneButton;
    HUNavigationBarButton * _navigationHomeButton;
    UIVisualEffectView * _roarBackdropView;
    NSArray * _upgradeViewConstraints;
    NAFuture * _viewFullyVisibleFuture;
    bool  _viewIsFullyVisible;
    HUWallpaperView * _wallpaperView;
}

@property (nonatomic, retain) HUAccessoryControlAnimator *accessoryControlAnimator;
@property (nonatomic, retain) HUBannerItemModuleController *bannerItemModuleController;
@property (nonatomic, retain) HUBlurGroupingEffectView *blurGroupingEffectView;
@property (nonatomic, retain) HUDashboardCameraItemModuleController *cameraItemModuleController;
@property (nonatomic, retain) HUDashboardContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUDashboardViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *editActionTitle;
@property (nonatomic, readonly) NSString *editActionTitleLocalizationKey;
@property (nonatomic, retain) NSDate *energyCategoryViewStartTime;
@property (nonatomic, retain) UIView *energyIndicatorView;
@property (nonatomic, readonly) bool hasCustomControlPresentationAnimations;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUROARUpgradeView *homeUpgradedToRoarView;
@property (nonatomic, readonly) bool isOverlay;
@property (nonatomic, readonly) HUDashboardItemManager *itemManager;
@property (nonatomic, retain) HFItem<HFAccessoryRepresentableItem> *itemShowingSizeToggleButton;
@property (nonatomic, readonly) HUDashboardLayoutManager *layoutManager;
@property (nonatomic, retain) HUNavigationBarButton *navigationAddButton;
@property (nonatomic, retain) HUNavigationBarButton *navigationAnnounceButton;
@property (nonatomic, retain) HUNavigationBarButton *navigationEditDoneButton;
@property (nonatomic, retain) HUNavigationBarButton *navigationHomeButton;
@property (nonatomic, readonly) HUCameraController *ppt_cameraController;
@property (nonatomic, retain) UIVisualEffectView *roarBackdropView;
@property (nonatomic, readonly) bool shouldIncludeRoomsInHomeMenu;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsEditing;
@property (nonatomic, retain) NSArray *upgradeViewConstraints;
@property (nonatomic, retain) NAFuture *viewFullyVisibleFuture;
@property (nonatomic) bool viewIsFullyVisible;
@property (nonatomic, retain) HUWallpaperView *wallpaperView;

- (void).cxx_destruct;
- (id)_allNavigationBarButtons;
- (bool)_canShowWhileLocked;
- (bool)_canSkipStatusDetailsForItem:(id)arg1;
- (void)_clipToNavigationBar;
- (id)_dashboardNavigator;
- (id)_dismissPresentedViewControllersAnimated:(bool)arg1;
- (id)_filterBarController;
- (void)_handleBackgroundTap:(id)arg1;
- (bool)_hasDetailViewControllerForItem:(id)arg1;
- (bool)_hasTapActionForItem:(id)arg1;
- (id)_itemForHomeKitObject:(id)arg1;
- (id)_performTapActionForItem:(id)arg1 tappedArea:(id)arg2;
- (id)_presentAccessoryControlsForHomeKitObject:(id)arg1 fromStatusItem:(id)arg2 animated:(bool)arg3;
- (id)_presentAccessorySettingsForHomeKitObject:(id)arg1 fromStatusItem:(id)arg2 animated:(bool)arg3;
- (void)_presentDetailsViewControllerForSectionWithIdentifier:(id)arg1 animated:(bool)arg2;
- (id)_presentQuickControlsForHomeKitItem:(id)arg1 animated:(bool)arg2;
- (id)_presentRoomEditorForRoom:(id)arg1;
- (id)_quickControlDetailViewControllerForItem:(id)arg1;
- (void)_registerObservers;
- (void)_registerSectionDecorationViews;
- (void)_requestLocationAuth;
- (void)_sendContextMenuMetricsWithContext:(id)arg1 title:(id)arg2;
- (void)_setNavigationButtons:(id)arg1 forEdge:(unsigned long long)arg2;
- (void)_setUpFilterBar;
- (void)_setUpNavigationBar;
- (void)_setUpTabBar;
- (void)_setupBackgroundView;
- (bool)_shouldShowAccessoryControlsForHomeKitObject:(id)arg1 fromStatusItem:(id)arg2;
- (void)_showRoarUpgradeViewIfNeeded;
- (bool)_statusItemRepresentsOnlyResidentIPads:(id)arg1;
- (id)_titleForSectionIdentifier:(id)arg1;
- (void)_toggleSizeForCell:(id)arg1 withItem:(id)arg2;
- (void)_updateAllHeaderViews;
- (void)_updateAnnounceNotificationSettingsIfNeeded;
- (void)_updateBadgeCountForHomeButton;
- (void)_updateBarButtons;
- (void)_updateHeaderView:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateHomeEnergyIndicatorVisibility;
- (void)_updatePaletteHeight;
- (void)accessory:(id)arg1 didUpdateApplicationDataForService:(id)arg2;
- (id)accessoryControlAnimator;
- (void)accessoryControlViewControllerFor:(void *)arg1 tileItem:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 103: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, BOOL, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, short, out const /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: unhandled bit fieldencoding: 'b' */ unsigned int, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const void, int, BOOL, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned long, int, /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, unsigned int, oneway int, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'w' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const out long, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in long double, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, out short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)accessoryDidUpdateApplicationData:(id)arg1;
- (void)accessoryTileSizeButtonTappedFor:(id)arg1 withItem:(id)arg2;
- (id)addActionDelegateForNavigationBarButton:(id)arg1;
- (bool)allowsCondensedAccessoryTiles;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)applicationDataCellNeedReconfiguring:(id)arg1;
- (void)applicationWentIntoBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (bool)automaticallyUpdatesViewControllerTitle;
- (id)bannerItemModuleController;
- (void)bannerSizeUpdated:(id)arg1;
- (id)blurGroupingEffectView;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)cameraItemModuleController;
- (bool)canReorderItemAtIndexPath:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)childViewControllersToPreload;
- (bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;
- (void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;
- (void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint { double x1; double x2; })arg4;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)compositionalLayoutConfigurationForTraitCollection:(id)arg1;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)configureWithAccessoryControlViewController:(id)arg1;
- (id)context;
- (id)contextTypeDescriptionForAnalytics;
- (id)controlItemSupprtingToggleInteractionForItem:(id)arg1;
- (id)createDashboardTipModuleControllerWithModule:(id)arg1;
- (id)createEnergyDashboardModuleControllerWith:(id)arg1;
- (void)dashboardItemManager:(id)arg1 didUpdateContext:(id)arg2;
- (void)dashboardItemManager:(id)arg1 didUpdateHomeMenuStatusItems:(id)arg2;
- (id)delegate;
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (void)didReorderItemWithSortedItemsBySectionID:(id)arg1;
- (void)didSelectHomeHubMigrationBanner:(id)arg1;
- (void)didSelectUnreachableResidentsBanner:(id)arg1;
- (void)didSelectWelcomeBanner:(id)arg1;
- (void)diffableDataItemManager:(id)arg1 didUpdateItems:(id)arg2 addItems:(id)arg3 removeItems:(id)arg4;
- (id)displayedItemsInSection:(id)arg1;
- (id)editActionDelegate;
- (id)editActionDelegateForNavigationBarButton:(id)arg1;
- (id)editActionTitle;
- (id)editActionTitleLocalizationKey;
- (void)editRoomViewControllerDidFinish:(id)arg1 withNewRoom:(id)arg2;
- (void)endEditing;
- (id)energyCategoryViewStartTime;
- (void)energyFeaturesDidHide;
- (id)energyIndicatorView;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (bool)hasCustomControlPresentationAnimations;
- (bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)home:(id)arg1 didUpdateApplicationDataForServiceGroup:(id)arg2;
- (void)home:(id)arg1 didUpdateLocation:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForRoom:(id)arg2;
- (void)home:(id)arg1 didUpdateWallpaperForRoom:(id)arg2;
- (void)homeDidUpdateHomeEnergyManagerEnabled:(id)arg1;
- (void)homeDidUpdateWallpaper:(id)arg1;
- (void)homeEnergyNavigationBarIndicatorTapped:(id)arg1;
- (id)homeForNavigationBarButton:(id)arg1;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (id)homeKitObjectWithID:(id)arg1;
- (void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)homeUpgradedToRoarView;
- (id)hu_performanceTestReadyFuture;
- (id)hu_preloadContent;
- (id)init;
- (id)initWithContext:(id)arg1 asOverlay:(bool)arg2 delegate:(id)arg3;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (bool)isOverlay;
- (id)itemManager:(id)arg1 futureToUpdateItems:(id)arg2 itemUpdateOptions:(id)arg3;
- (void)itemManagerDidUpdate:(id)arg1;
- (id)itemShowingSizeToggleButton;
- (bool)itemSupportsToggleInteraction:(id)arg1;
- (id)layoutManager;
- (id)layoutSectionForSection:(long long)arg1 layoutEnvironment:(id)arg2;
- (id)matchingItemForHomeKitObject:(id)arg1;
- (void)migrationUpdatedTileSize:(id)arg1;
- (id)navigationActionDelegateForNavigationBarButton:(id)arg1;
- (id)navigationAddButton;
- (id)navigationAnnounceButton;
- (id)navigationBarButtonIdentifierOrderForEdge:(unsigned long long)arg1;
- (unsigned long long)navigationBarEdgeForButton:(id)arg1;
- (id)navigationEditDoneButton;
- (id)navigationHomeButton;
- (id)ppt_cameraController;
- (id)presentAccessorySettingsForItem:(id)arg1;
- (id)presentAccessorySettingsForItem:(id)arg1 secondaryDestination:(unsigned long long)arg2;
- (id)presentCameraProfile:(id)arg1 forCameraClip:(id)arg2 animated:(bool)arg3;
- (id)presentCameraProfile:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 animated:(bool)arg4;
- (id)presentDetailsForItem:(id)arg1 animated:(bool)arg2;
- (id)presentDetailsForItem:(id)arg1 animated:(bool)arg2 secondaryDestination:(unsigned long long)arg3;
- (id)presentFeedbackFlowForCameraClip:(id)arg1 fromProfile:(id)arg2;
- (id)presentHomeKitObject:(id)arg1 destination:(unsigned long long)arg2 animated:(bool)arg3;
- (id)presentItem:(id)arg1 animated:(bool)arg2;
- (id)presentItemWithUUID:(id)arg1 destination:(unsigned long long)arg2 secondaryDestination:(unsigned long long)arg3 animated:(bool)arg4;
- (id)presentRoomSettingsForRoom:(id)arg1;
- (id)presentStatusDetailsForStatusItemClass:(Class)arg1 animated:(bool)arg2;
- (void)presentationCoordinator:(id)arg1 didRecognizeTapForItem:(id)arg2 tappedArea:(id)arg3;
- (bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x1; double x2; })arg2 view:(id)arg3;
- (bool)presentationCoordinator:(id)arg1 shouldBeginLongPressPresentationWithContext:(id)arg2;
- (bool)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (void)presentationCoordinator:(id)arg1 touchDidBeginForItem:(id)arg2 tappedArea:(id)arg3;
- (void)presentationCoordinator:(id)arg1 touchDidEndForItem:(id)arg2 tappedArea:(id)arg3;
- (id)quickControlPresentationContextForItem:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)refreshTileHelper;
- (void)reloadLayoutAnimated:(bool)arg1 fastUpdate:(bool)arg2;
- (id)reorderableItemListForSection:(long long)arg1;
- (id)roarBackdropView;
- (id)roomForNavigationBarButton:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)sendContextMenuMetricsWithTitleLocalizationKey:(id)arg1;
- (void)setAccessoryControlAnimator:(id)arg1;
- (void)setBannerItemModuleController:(id)arg1;
- (void)setBlurGroupingEffectView:(id)arg1;
- (void)setCameraItemModuleController:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEnergyCategoryViewStartTime:(id)arg1;
- (void)setEnergyIndicatorView:(id)arg1;
- (void)setHomeUpgradedToRoarView:(id)arg1;
- (void)setItemShowingSizeToggleButton:(id)arg1;
- (void)setItemShowingSizeToggleButton:(id)arg1 animated:(bool)arg2;
- (void)setNavigationAddButton:(id)arg1;
- (void)setNavigationAnnounceButton:(id)arg1;
- (void)setNavigationEditDoneButton:(id)arg1;
- (void)setNavigationHomeButton:(id)arg1;
- (void)setReorderableItemList:(id)arg1 forSection:(long long)arg2;
- (void)setRoarBackdropView:(id)arg1;
- (void)setUpgradeViewConstraints:(id)arg1;
- (void)setViewFullyVisibleFuture:(id)arg1;
- (void)setViewIsFullyVisible:(bool)arg1;
- (void)setWallpaperView:(id)arg1;
- (bool)shouldHideNavigationBarButton:(id)arg1;
- (bool)shouldIncludeRoomsInHomeMenu;
- (bool)shouldOverrideTraitCollectionForPresentationCoordinator:(id)arg1;
- (bool)shouldShowAccessoryControlForHomeKitObject:(id)arg1;
- (bool)shouldShowAnnounceButton;
- (bool)shouldShowHeaderForSection:(id)arg1;
- (void)startEditing;
- (id)statusItemsForNavigationBarButton:(id)arg1 inHome:(id)arg2;
- (bool)supportsEditing;
- (id)tappableAreaForPoint:(struct CGPoint { double x1; double x2; })arg1 inItem:(id)arg2 atIndexPath:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (id)traitCollectionForPresentationCoordinator:(id)arg1;
- (id)transformWithLayoutOptions:(id)arg1;
- (void)updateEnergyNavigationAccessoryView;
- (id)upgradeViewConstraints;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (id)viewFullyVisibleFuture;
- (bool)viewIsFullyVisible;
- (void)viewLayoutMarginsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)wallpaperView;

@end
