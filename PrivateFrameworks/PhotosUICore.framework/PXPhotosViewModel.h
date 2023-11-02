
@interface PXPhotosViewModel : PXObservable <PXAssetsDataSourceManagerObserver, PXMutablePhotosViewModel, PXSectionedSelectionManagerSnapshotValidator> {
    bool  __shouldMimicSystemChromelessUsingManualScrollEdgeAppearance;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _additionalAspectFitEdgeMargins;
    bool  _allowsAccessoriesContextMenuCustomization;
    bool  _allowsActionMenuBehavior;
    bool  _allowsAddAction;
    bool  _allowsAddToLibraryAction;
    bool  _allowsAspectFitToggle;
    bool  _allowsCMMActions;
    bool  _allowsCaptionsInSquareBehavior;
    bool  _allowsChromeManagementBehavior;
    bool  _allowsContentSyndicationSaveAllAction;
    bool  _allowsContextMenuCustomization;
    bool  _allowsCopyAction;
    bool  _allowsDismissAction;
    bool  _allowsDoubleTapBehavior;
    bool  _allowsDragIn;
    bool  _allowsDragOut;
    bool  _allowsEmptyPlaceholderBehavior;
    bool  _allowsFileRadarAction;
    bool  _allowsGridAppearanceActions;
    bool  _allowsHoverBehavior;
    bool  _allowsInfoAction;
    bool  _allowsInlineAddBehavior;
    bool  _allowsInteractiveFavoriteBadges;
    bool  _allowsLinkInteractions;
    bool  _allowsMacStyleSelection;
    bool  _allowsMergeDuplicatesAction;
    bool  _allowsMoveToLibraryAction;
    bool  _allowsMoveToPersonalLibraryAction;
    bool  _allowsMoveToSharedLibraryAction;
    bool  _allowsMultiSelectMenu;
    bool  _allowsOneUpPresentation;
    bool  _allowsPickAssetAction;
    bool  _allowsPopOnContainerDeleteBehavior;
    bool  _allowsPopOnEmptyBehavior;
    bool  _allowsQuickLookAction;
    bool  _allowsReplyAction;
    bool  _allowsSelectAllAction;
    bool  _allowsSelectModeToggle;
    bool  _allowsSelectSectionAction;
    bool  _allowsSelectionUserActivityBehavior;
    bool  _allowsShareAction;
    bool  _allowsShareAllAction;
    bool  _allowsShowDetails;
    bool  _allowsShowMapAction;
    bool  _allowsSlideshowAction;
    bool  _allowsSwipeToSelect;
    bool  _allowsSwitchLibraryAction;
    bool  _allowsSyndicatedContentFiltering;
    bool  _allowsTapbackAction;
    bool  _allowsTrashAction;
    bool  _allowsUserDefaults;
    bool  _alwaysIncludeSharedWithYouAssets;
    bool  _aspectFitContent;
    NSMutableSet * _aspectRatioTogglePreventedForReasons;
    PXAssetActionManager * _assetActionManager;
    PXAssetCollectionActionManager * _assetCollectionActionManager;
    <PXAssetImportStatusManager> * _assetImportStatusManager;
    id /* block */  _badgesModifier;
    bool  _captionsVisible;
    long long  _configuredSectionBodyStyle;
    long long  _configuredSectionHeaderStyle;
    NSString * _containerTitle;
    bool  _contentBelowTitle;
    PXContentFilterState * _contentFilterState;
    long long  _contentMode;
    long long  _contentPrivacyState;
    long long  _contentStartingPosition;
    Class  _cplActionManagerClass;
    PXAssetsDataSource * _currentDataSource;
    <PXZoomablePhotosUserDefaults> * _customUserDefaults;
    PXAssetsDataSourceManager * _dataSourceManager;
    Class  _decorationViewClass;
    long long  _dismissAffordance;
    bool  _dismissRequested;
    NSSet * _draggedAssetReferences;
    PXAssetReference * _dropTargetAssetReference;
    id /* block */  _effectProvider;
    long long  _emptyPlaceholderState;
    PXStatusViewModel * _emptyPlaceholderStatusViewModel;
    NSMutableSet * _enterSelectModePreventedForReasons;
    bool  _faceModeEnabled;
    <NSObject> * _filterTimeoutObserver;
    double  _floatingTitleOpacity;
    bool  _footerHasImportantInformation;
    NSString * _footerSubtitle;
    PXFooterViewModel * _footerViewModel;
    long long  _footerVisibilityStyle;
    unsigned long long  _forbiddenBadges;
    PXPhotosGridActionManager * _gridActionManager;
    long long  _gridStyle;
    bool  _hasScrollableContent;
    PXPhotosHeaderCustomizationModel * _headerCustomizationModel;
    double  _headerTitleTopInset;
    bool  _hideFooterInSelectMode;
    NSMutableSet * _hideSurroundingContentForReasons;
    bool  _hidesNavbar;
    bool  _hidesToolbar;
    bool  _ignoreContentFilterStateWhenNotFiltering;
    bool  _ignoreFilterPredicateAssert;
    id /* block */  _infoActionHandler;
    PXSectionedObjectReference * _initialNavigationObjectReference;
    long long  _initialNavigationScrollPosition;
    PXGridInlinePlaybackController<PXGDisplayAssetPixelBufferSourcesProvider> * _inlinePlaybackController;
    bool  _isAppearing;
    bool  _isEmbedded;
    bool  _isInCompactMode;
    bool  _isInSelectMode;
    bool  _isInitializing;
    bool  _isInteractiveZooming;
    double  _itemAspectRatio;
    bool  _keepsTabBarAlwaysHidden;
    PXLibraryFilterState * _libraryFilterState;
    PXLoadingStatusManager * _loadingStatusManager;
    bool  _lowMemoryMode;
    PXMediaProvider * _mediaProvider;
    long long  _navBarStyle;
    NSString * _noContentPlaceholderFallbackMessage;
    NSString * _noContentPlaceholderFallbackTitle;
    long long  _noContentPlaceholderType;
    long long  _numberOfZoomSteps;
    long long  _oneUpPresentationOrigin;
    NSMutableSet * _oneUpPresentationPreventedForReasons;
    <PXPhotosGridOptionsController> * _optionsController;
    long long  _overrideDefaultNumberOfColumns;
    NSString * _pickerClientBundleIdentifier;
    <PXPhotosPreferredAssetCropDelegate> * _preferredAssetCropDelegate;
    <PXPhotosPreferredColumnCountsDelegate> * _preferredColumnCountsDelegate;
    long long  _preferredUserInterfaceStyle;
    bool  _prefersActionsInToolbar;
    PXContentPrivacyController * _privacyController;
    bool  _providesOneUpActionManager;
    bool  _requiresLightTopBars;
    bool  _scrolledToTop;
    long long  _scrollingBehavior;
    PXSearchQueryMatchInfo * _searchQueryMatchInfo;
    long long  _selectionContext;
    PXSectionedSelectionManager * _selectionManager;
    PXSelectionSnapshot * _selectionSnapshot;
    PXSharedLibraryStatusProvider * _sharedLibraryStatusProvider;
    bool  _shouldAlwaysRespectToolbarActionPlacementPreference;
    bool  _shouldAnimateZooming;
    bool  _shouldOptOutOfChromelessBars;
    bool  _showLoadingPlaceholderWhenEmpty;
    bool  _showingAlternateContent;
    bool  _showsOnlySelectedItemsInOneUp;
    PXPhotosLayoutSpecManager * _specManager;
    bool  _supportsAspectRatioToggle;
    bool  _supportsPeopleActions;
    bool  _supportsZooming;
    long long  _systemAuthenticationType;
    <PXTapbackStatusManager> * _tapbackStatusManager;
    NSString * _title;
    double  _titleBackgroundOpacity;
    double  _topBarsAppearanceChangeAnimationDuration;
    PXUpdater * _updater;
    bool  _useLowMemoryDecode;
    NSNumber * _userWantsAspectFitContent;
    bool  _viewBasedDecorationsEnabled;
    <PXPhotosViewDelegate> * _viewDelegate;
    unsigned long long  _viewDelegateRespondsTo;
    NSMutableOrderedSet * _visibleAssetCollections;
    bool  _wantsAggregationsLayout;
    bool  _wantsCPLStatus;
    bool  _wantsContentFilterIndicatorVisible;
    bool  _wantsContentFilterVisible;
    bool  _wantsContentUnavailableUnlockButtonVisible;
    bool  _wantsDimmedSelectionStyle;
    bool  _wantsDynamicTitles;
    bool  _wantsFileSizeBadge;
    bool  _wantsFloatingTitle;
    bool  _wantsFooterMask;
    bool  _wantsFooterVisible;
    bool  _wantsFooterVisibleImmediately;
    bool  _wantsModernNavBarButtons;
    bool  _wantsNavbarVisible;
    bool  _wantsNumberedSelectionStyle;
    bool  _wantsOneUpShowInLibraryButton;
    bool  _wantsRenderingStatus;
    bool  _wantsShareGridButtonVisible;
    bool  _wantsSingleRowScrollingLayout;
    bool  _wantsTabBarVisible;
    bool  _wantsToolbarVisible;
    bool  _wantsTopBadgesWithViewBasedDecorations;
    PXAssetReference * _zoomAnchorAssetReference;
    double  _zoomStep;
}

@property (nonatomic, readonly) bool _shouldMimicSystemChromelessUsingManualScrollEdgeAppearance;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } additionalAspectFitEdgeMargins;
@property (nonatomic, readonly) bool allowsAccessoriesContextMenuCustomization;
@property (nonatomic, readonly) bool allowsActionMenuBehavior;
@property (nonatomic, readonly) bool allowsAddAction;
@property (nonatomic, readonly) bool allowsAddToLibraryAction;
@property (nonatomic, readonly) bool allowsCMMActions;
@property (nonatomic, readonly) bool allowsCaptionsInSquareBehavior;
@property (nonatomic, readonly) bool allowsChromeManagementBehavior;
@property (nonatomic, readonly) bool allowsContentSyndicationSaveAllAction;
@property (nonatomic, readonly) bool allowsContextMenuCustomization;
@property (nonatomic, readonly) bool allowsCopyAction;
@property (nonatomic, readonly) bool allowsDismissAction;
@property (nonatomic, readonly) bool allowsDoubleTapBehavior;
@property (nonatomic, readonly) bool allowsDragIn;
@property (nonatomic, readonly) bool allowsDragOut;
@property (nonatomic, readonly) bool allowsEmptyPlaceholderBehavior;
@property (nonatomic, readonly) bool allowsFileRadarAction;
@property (nonatomic, readonly) bool allowsGridAppearanceActions;
@property (nonatomic, readonly) bool allowsHoverBehavior;
@property (nonatomic, readonly) bool allowsInfoAction;
@property (nonatomic, readonly) bool allowsInlineAddBehavior;
@property (nonatomic, readonly) bool allowsInteractiveFavoriteBadges;
@property (nonatomic, readonly) bool allowsLinkInteractions;
@property (nonatomic, readonly) bool allowsMacStyleSelection;
@property (nonatomic, readonly) bool allowsMergeDuplicatesAction;
@property (nonatomic, readonly) bool allowsMoveToLibraryAction;
@property (nonatomic, readonly) bool allowsMoveToPersonalLibraryAction;
@property (nonatomic, readonly) bool allowsMoveToSharedLibraryAction;
@property (nonatomic, readonly) bool allowsMultiSelectMenu;
@property (nonatomic, readonly) bool allowsOneUpPresentation;
@property (nonatomic, readonly) bool allowsPickAssetAction;
@property (nonatomic, readonly) bool allowsPopOnContainerDeleteBehavior;
@property (nonatomic, readonly) bool allowsPopOnEmptyBehavior;
@property (nonatomic, readonly) bool allowsQuickLookAction;
@property (nonatomic, readonly) bool allowsReplyAction;
@property (nonatomic, readonly) bool allowsSelectAllAction;
@property (nonatomic, readonly) bool allowsSelectModeToggle;
@property (nonatomic, readonly) bool allowsSelectSectionAction;
@property (nonatomic, readonly) bool allowsSelectionUserActivityBehavior;
@property (nonatomic, readonly) bool allowsShareAction;
@property (nonatomic, readonly) bool allowsShareAllAction;
@property (nonatomic, readonly) bool allowsShowDetails;
@property (nonatomic, readonly) bool allowsShowMapAction;
@property (nonatomic, readonly) bool allowsSlideshowAction;
@property (nonatomic, readonly) bool allowsSwipeToSelect;
@property (nonatomic, readonly) bool allowsSwitchLibraryAction;
@property (nonatomic, readonly) bool allowsSyndicatedContentFiltering;
@property (nonatomic, readonly) bool allowsTapbackAction;
@property (nonatomic, readonly) bool allowsTrashAction;
@property (nonatomic, readonly) bool allowsUserDefaults;
@property (nonatomic, readonly) bool alwaysIncludeSharedWithYouAssets;
@property (nonatomic) bool aspectFitContent;
@property (nonatomic, readonly) PXAssetActionManager *assetActionManager;
@property (nonatomic, readonly) PXAssetCollectionActionManager *assetCollectionActionManager;
@property (nonatomic, readonly) <PXAssetImportStatusManager> *assetImportStatusManager;
@property (nonatomic, readonly) id /* block */ badgesModifier;
@property (nonatomic, readonly) <PXBrowserSelectionSnapshot> *browserSelectionSnapshot;
@property (nonatomic, readonly) bool canEnterSelectMode;
@property (nonatomic, readonly) bool canExitSelectMode;
@property (nonatomic, readonly) bool canFilterContent;
@property (nonatomic, readonly) bool canPresentOneUp;
@property (nonatomic, readonly) bool canSwipeSelect;
@property (nonatomic, readonly) bool captionsVisible;
@property (nonatomic, readonly) long long configuredSectionBodyStyle;
@property (nonatomic, readonly) long long configuredSectionHeaderStyle;
@property (nonatomic, readonly, copy) NSString *containerTitle;
@property (getter=isContentBelowTitle, nonatomic, readonly) bool contentBelowTitle;
@property (nonatomic, readonly) PXContentFilterState *contentFilterState;
@property (nonatomic) long long contentPrivacyState;
@property (nonatomic, readonly) bool contentStartsAtEnd;
@property (nonatomic, readonly) Class cplActionManagerClass;
@property (nonatomic, readonly) PXAssetsDataSource *currentDataSource;
@property (nonatomic, readonly) <PXZoomablePhotosUserDefaults> *customUserDefaults;
@property (nonatomic, readonly) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) Class decorationViewClass;
@property (readonly, copy) NSString *description;
@property (readonly) long long dismissAffordance;
@property (nonatomic, readonly) bool dismissRequested;
@property (nonatomic, readonly, copy) NSSet *draggedAssetReferences;
@property (nonatomic, readonly) PXAssetReference *dropTargetAssetReference;
@property (nonatomic, readonly) id /* block */ effectProvider;
@property (nonatomic) long long emptyPlaceholderState;
@property (nonatomic, retain) PXStatusViewModel *emptyPlaceholderStatusViewModel;
@property (getter=isFaceModeEnabled, nonatomic, readonly) bool faceModeEnabled;
@property (nonatomic, readonly) double floatingTitleOpacity;
@property (nonatomic, readonly) bool footerHasImportantInformation;
@property (nonatomic, readonly, copy) NSString *footerSubtitle;
@property (nonatomic, readonly) PXFooterViewModel *footerViewModel;
@property (nonatomic, readonly) long long footerVisibilityStyle;
@property (nonatomic, readonly) unsigned long long forbiddenBadges;
@property (nonatomic, readonly) PXPhotosGridActionManager *gridActionManager;
@property (nonatomic, readonly) long long gridStyle;
@property (nonatomic, readonly) bool hasScrollableContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXPhotosHeaderCustomizationModel *headerCustomizationModel;
@property (nonatomic, readonly) double headerTitleTopInset;
@property (nonatomic, readonly) bool hideFooterInSelectMode;
@property (nonatomic, readonly) bool hideSurroundingContent;
@property (nonatomic, readonly) bool hidesNavbar;
@property (nonatomic, readonly) bool hidesToolbar;
@property (nonatomic, readonly) bool ignoreContentFilterStateWhenNotFiltering;
@property (nonatomic, copy) id /* block */ infoActionHandler;
@property (nonatomic, readonly) PXSectionedObjectReference *initialNavigationObjectReference;
@property (nonatomic, readonly) long long initialNavigationScrollPosition;
@property (nonatomic, readonly) PXGridInlinePlaybackController<PXGDisplayAssetPixelBufferSourcesProvider> *inlinePlaybackController;
@property (nonatomic, readonly) bool isAppearing;
@property (nonatomic, readonly) bool isEmbedded;
@property (nonatomic, readonly) bool isInCompactMode;
@property (nonatomic, readonly) bool isInSelectMode;
@property (nonatomic, readonly) bool isInitializing;
@property (nonatomic) bool isInteractiveZooming;
@property (nonatomic, readonly) double itemAspectRatio;
@property (nonatomic) bool keepsTabBarAlwaysHidden;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) PXLoadingStatusManager *loadingStatusManager;
@property (nonatomic, readonly) bool lowMemoryMode;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (nonatomic, readonly) long long navBarStyle;
@property (nonatomic, readonly) NSString *noContentPlaceholderFallbackMessage;
@property (nonatomic, readonly) NSString *noContentPlaceholderFallbackTitle;
@property (nonatomic, readonly) long long noContentPlaceholderType;
@property (nonatomic, readonly) long long numberOfZoomSteps;
@property (nonatomic, readonly) long long oneUpPresentationOrigin;
@property (nonatomic, readonly) <PXPhotosGridOptionsController> *optionsController;
@property (nonatomic) long long overrideDefaultNumberOfColumns;
@property (nonatomic, readonly, copy) NSString *pickerClientBundleIdentifier;
@property (nonatomic, readonly) <PXPhotosPreferredAssetCropDelegate> *preferredAssetCropDelegate;
@property (nonatomic, readonly) <PXPhotosPreferredColumnCountsDelegate> *preferredColumnCountsDelegate;
@property (nonatomic, readonly) long long preferredUserInterfaceStyle;
@property (nonatomic, readonly) bool prefersActionsInToolbar;
@property (nonatomic, readonly) PXContentPrivacyController *privacyController;
@property (nonatomic, readonly) bool providesOneUpActionManager;
@property (nonatomic, readonly) bool requiresLightTopBars;
@property (getter=isScrolledToTop, nonatomic, readonly) bool scrolledToTop;
@property (nonatomic, readonly) long long scrollingBehavior;
@property (nonatomic, readonly) PXSearchQueryMatchInfo *searchQueryMatchInfo;
@property (nonatomic, readonly) long long selectionContext;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, retain) PXSelectionSnapshot *selectionSnapshot;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (nonatomic, readonly) bool shouldAlwaysRespectToolbarActionPlacementPreference;
@property (nonatomic) bool shouldAnimateZooming;
@property (nonatomic, readonly) bool shouldAspectFitContentByDefault;
@property (nonatomic, readonly) bool shouldOptOutOfChromelessBars;
@property (nonatomic, readonly) bool showLoadingPlaceholderWhenEmpty;
@property (getter=isShowingAlternateContent, nonatomic, readonly) bool showingAlternateContent;
@property (nonatomic) bool showsOnlySelectedItemsInOneUp;
@property (nonatomic, readonly) PXAssetReference *singleSelectedAssetReference;
@property (nonatomic, readonly) PXPhotosLayoutSpecManager *specManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAspectRatioToggle;
@property (nonatomic, readonly) bool supportsPeopleActions;
@property (nonatomic, readonly) bool supportsZooming;
@property (nonatomic) long long systemAuthenticationType;
@property (nonatomic, readonly) <PXTapbackStatusManager> *tapbackStatusManager;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) double titleBackgroundOpacity;
@property (nonatomic, readonly) double topBarsAppearanceChangeAnimationDuration;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, readonly) bool useLowMemoryDecode;
@property (nonatomic, readonly, copy) NSNumber *userWantsAspectFitContent;
@property (nonatomic, readonly) bool viewBasedDecorationsEnabled;
@property (nonatomic) <PXPhotosViewDelegate> *viewDelegate;
@property (nonatomic, readonly) unsigned long long viewDelegateRespondsTo;
@property (nonatomic, readonly) NSOrderedSet *visibleAssetCollections;
@property (nonatomic, readonly) bool wantsAggregationsLayout;
@property (nonatomic, readonly) bool wantsCPLStatus;
@property (nonatomic, readonly) bool wantsContentFilterIndicatorVisible;
@property (nonatomic, readonly) bool wantsContentFilterVisible;
@property (nonatomic, readonly) bool wantsContentUnavailableUnlockButtonVisible;
@property (nonatomic, readonly) bool wantsDimmedSelectionStyle;
@property (nonatomic, readonly) bool wantsDynamicTitles;
@property (nonatomic, readonly) bool wantsFileSizeBadge;
@property (nonatomic, readonly) bool wantsFloatingTitle;
@property (nonatomic, readonly) bool wantsFooterMask;
@property (nonatomic) bool wantsFooterVisible;
@property (nonatomic, readonly) bool wantsFooterVisibleImmediately;
@property (nonatomic, readonly) bool wantsModernNavBarButtons;
@property (nonatomic) bool wantsNavbarVisible;
@property (nonatomic, readonly) bool wantsNumberedSelectionStyle;
@property (nonatomic, readonly) bool wantsOneUpShowInLibraryButton;
@property (nonatomic, readonly) bool wantsRenderingStatus;
@property (nonatomic, readonly) bool wantsShareGridButtonVisible;
@property (nonatomic, readonly) bool wantsSingleRowScrollingLayout;
@property (nonatomic) bool wantsTabBarVisible;
@property (nonatomic) bool wantsToolbarVisible;
@property (nonatomic, readonly) bool wantsTopBadgesWithViewBasedDecorations;
@property (nonatomic, retain) PXAssetReference *zoomAnchorAssetReference;
@property (nonatomic) double zoomStep;

- (void).cxx_destruct;
- (id)_indexPathsForAssetCollectionReference:(id)arg1;
- (id)_initialContentFilterStateForConfiguration:(id)arg1;
- (id)_initialLibraryFilterStateForConfiguration:(id)arg1;
- (void)_invalidateAspectFitContent;
- (void)_invalidateAssetsDataSourceManager;
- (void)_invalidateChromeVisibility;
- (void)_invalidateContentPrivacyState;
- (void)_invalidateDraggedAssetReferences;
- (void)_invalidateEmptyPlaceholderState;
- (void)_invalidateFooterVisibility;
- (void)_invalidateGridAppearance;
- (void)_invalidateSystemAuthenticationType;
- (void)_invalidateTopBarsStyles;
- (void)_invalidateUserWantsAspectFitContent;
- (void)_invalidateWantsContentFilterIndicatorVisible;
- (void)_invalidateWantsContentUnavailableUnlockButtonVisible;
- (void)_setNeedsUpdate;
- (bool)_shouldMimicSystemChromelessUsingManualScrollEdgeAppearance;
- (void)_updateAspectFitContent;
- (void)_updateAssetsDataSourceManager;
- (void)_updateChromeVisibility;
- (void)_updateContentPrivacyState;
- (void)_updateDataSourceDependentProperties;
- (void)_updateDraggedAssetReferences;
- (void)_updateEmptyPlaceholderState;
- (void)_updateFilteringTimeoutObserver;
- (void)_updateFooterVisibility;
- (void)_updateGridAppearance;
- (void)_updateSystemAuthenticationType;
- (void)_updateTopBarsStyles;
- (void)_updateUserWantsAspectFitContent;
- (void)_updateWantsContentFilterIndicatorVisible;
- (void)_updateWantsContentUnavailableUnlockButtonVisible;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalAspectFitEdgeMargins;
- (bool)allowsAccessoriesContextMenuCustomization;
- (bool)allowsActionMenuBehavior;
- (bool)allowsAddAction;
- (bool)allowsAddToLibraryAction;
- (bool)allowsCMMActions;
- (bool)allowsCaptionsInSquareBehavior;
- (bool)allowsChromeManagementBehavior;
- (bool)allowsContentSyndicationSaveAllAction;
- (bool)allowsContextMenuCustomization;
- (bool)allowsCopyAction;
- (bool)allowsDismissAction;
- (bool)allowsDoubleTapBehavior;
- (bool)allowsDragIn;
- (bool)allowsDragOut;
- (bool)allowsEmptyPlaceholderBehavior;
- (bool)allowsFileRadarAction;
- (bool)allowsGridAppearanceActions;
- (bool)allowsHoverBehavior;
- (bool)allowsInfoAction;
- (bool)allowsInlineAddBehavior;
- (bool)allowsInteractiveFavoriteBadges;
- (bool)allowsLinkInteractions;
- (bool)allowsMacStyleSelection;
- (bool)allowsMergeDuplicatesAction;
- (bool)allowsMoveToLibraryAction;
- (bool)allowsMoveToPersonalLibraryAction;
- (bool)allowsMoveToSharedLibraryAction;
- (bool)allowsMultiSelectMenu;
- (bool)allowsOneUpPresentation;
- (bool)allowsPickAssetAction;
- (bool)allowsPopOnContainerDeleteBehavior;
- (bool)allowsPopOnEmptyBehavior;
- (bool)allowsQuickLookAction;
- (bool)allowsReplyAction;
- (bool)allowsSelectAllAction;
- (bool)allowsSelectModeToggle;
- (bool)allowsSelectSectionAction;
- (bool)allowsSelectionUserActivityBehavior;
- (bool)allowsShareAction;
- (bool)allowsShareAllAction;
- (bool)allowsShowDetails;
- (bool)allowsShowMapAction;
- (bool)allowsSlideshowAction;
- (bool)allowsSwipeToSelect;
- (bool)allowsSwitchLibraryAction;
- (bool)allowsSyndicatedContentFiltering;
- (bool)allowsTapbackAction;
- (bool)allowsTrashAction;
- (bool)allowsUserDefaults;
- (bool)alwaysIncludeSharedWithYouAssets;
- (bool)aspectFitContent;
- (id)assetActionManager;
- (id)assetCollectionActionManager;
- (id)assetImportStatusManager;
- (void)assetsDataSourceManagerDidFinishBackgroundFetching:(id)arg1;
- (void)assetsDataSourceManagerDidFinishLoadingInitialDataSource:(id)arg1;
- (bool)attemptSetInSelectMode:(bool)arg1;
- (id /* block */)badgesModifier;
- (id)browserSelectionSnapshot;
- (bool)canEnterSelectMode;
- (bool)canExitSelectMode;
- (bool)canFilterContent;
- (bool)canPresentOneUp;
- (bool)canSwipeSelect;
- (bool)captionsVisible;
- (void)clickSelectAssetReference:(id)arg1 updateCursorIndexPath:(bool)arg2;
- (void)clickSelectIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 updateCursorIndexPath:(bool)arg2;
- (long long)configuredSectionBodyStyle;
- (long long)configuredSectionHeaderStyle;
- (id)containerTitle;
- (id)contentFilterState;
- (long long)contentPrivacyState;
- (bool)contentStartsAtEnd;
- (Class)cplActionManagerClass;
- (id)currentDataSource;
- (id)customUserDefaults;
- (id)dataSourceManager;
- (void)dealloc;
- (Class)decorationViewClass;
- (void)deselectAll;
- (void)didPerformChanges;
- (long long)dismissAffordance;
- (bool)dismissRequested;
- (id)draggedAssetReferences;
- (id)dropTargetAssetReference;
- (id /* block */)effectProvider;
- (long long)emptyPlaceholderState;
- (id)emptyPlaceholderStatusViewModel;
- (double)floatingTitleOpacity;
- (bool)footerHasImportantInformation;
- (id)footerSubtitle;
- (id)footerViewModel;
- (long long)footerVisibilityStyle;
- (unsigned long long)forbiddenBadges;
- (id)gridActionManager;
- (long long)gridStyle;
- (bool)hasScrollableContent;
- (id)headerCustomizationModel;
- (double)headerTitleTopInset;
- (bool)hideFooterInSelectMode;
- (bool)hideSurroundingContent;
- (bool)hidesNavbar;
- (bool)hidesToolbar;
- (bool)ignoreContentFilterStateWhenNotFiltering;
- (id /* block */)infoActionHandler;
- (id)init;
- (id)initWithConfiguration:(id)arg1 specManager:(id)arg2;
- (id)initWithConfiguration:(id)arg1 specManager:(id)arg2 inlinePlaybackController:(id)arg3;
- (id)initialNavigationObjectReference;
- (long long)initialNavigationScrollPosition;
- (id)inlinePlaybackController;
- (bool)isAppearing;
- (bool)isContentBelowTitle;
- (bool)isEmbedded;
- (bool)isFaceModeEnabled;
- (bool)isInCompactMode;
- (bool)isInSelectMode;
- (bool)isInitializing;
- (bool)isInteractiveZooming;
- (bool)isScrolledToTop;
- (bool)isShowingAlternateContent;
- (double)itemAspectRatio;
- (bool)keepsTabBarAlwaysHidden;
- (id)libraryFilterState;
- (id)loadingStatusManager;
- (bool)lowMemoryMode;
- (id)mediaProvider;
- (id)memoryAssetsActionFactory;
- (long long)navBarStyle;
- (id)noContentPlaceholderFallbackMessage;
- (id)noContentPlaceholderFallbackTitle;
- (long long)noContentPlaceholderType;
- (long long)numberOfZoomSteps;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)oneUpPresentationOrigin;
- (id)optionsController;
- (long long)overrideDefaultNumberOfColumns;
- (id)pickerClientBundleIdentifier;
- (id)preferredAssetCropDelegate;
- (id)preferredColumnCountsDelegate;
- (long long)preferredUserInterfaceStyle;
- (bool)prefersActionsInToolbar;
- (id)privacyController;
- (bool)providesOneUpActionManager;
- (bool)requiresLightTopBars;
- (long long)scrollingBehavior;
- (id)searchQueryMatchInfo;
- (void)selectAll;
- (long long)selectionContext;
- (id)selectionManager;
- (id)selectionManager:(id)arg1 validateSnapshot:(id)arg2;
- (bool)selectionManagerShouldAvoidEmptySelection:(id)arg1;
- (id)selectionSnapshot;
- (void)setAdditionalAspectFitEdgeMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setAspectFitContent:(bool)arg1;
- (void)setAspectRatioToggleAllowed:(bool)arg1 forReason:(id)arg2;
- (void)setCaptionsVisible:(bool)arg1;
- (void)setContentBelowTitle:(bool)arg1;
- (void)setContentFilterState:(id)arg1;
- (void)setContentPrivacyState:(long long)arg1;
- (void)setCplActionManagerClass:(Class)arg1;
- (void)setCurrentDataSource:(id)arg1;
- (void)setDecorationViewClass:(Class)arg1;
- (void)setDismissRequested:(bool)arg1;
- (void)setDraggedAssetReferences:(id)arg1;
- (void)setDropTargetAssetReference:(id)arg1;
- (void)setEffectProvider:(id /* block */)arg1;
- (void)setEmptyPlaceholderState:(long long)arg1;
- (void)setEmptyPlaceholderStatusViewModel:(id)arg1;
- (void)setEnterSelectModeAllowed:(bool)arg1 forReason:(id)arg2;
- (void)setFaceModeEnabled:(bool)arg1;
- (void)setFloatingTitleOpacity:(double)arg1;
- (void)setFooterHasImportantInformation:(bool)arg1;
- (void)setFooterVisibilityStyle:(long long)arg1;
- (void)setHasScrollableContent:(bool)arg1;
- (void)setHeaderTitleTopInset:(double)arg1;
- (void)setHideSurroundingContent:(bool)arg1 forReason:(id)arg2;
- (void)setHidesNavbar:(bool)arg1;
- (void)setHidesToolbar:(bool)arg1;
- (void)setInfoActionHandler:(id /* block */)arg1;
- (void)setIsAppearing:(bool)arg1;
- (void)setIsInCompactMode:(bool)arg1;
- (void)setIsInSelectMode:(bool)arg1;
- (void)setIsInteractiveZooming:(bool)arg1;
- (void)setKeepsTabBarAlwaysHidden:(bool)arg1;
- (void)setNoContentPlaceholderFallbackMessage:(id)arg1;
- (void)setNoContentPlaceholderFallbackTitle:(id)arg1;
- (void)setNumberOfZoomSteps:(long long)arg1;
- (void)setOneUpPresentationAllowed:(bool)arg1 forReason:(id)arg2;
- (void)setOverrideDefaultNumberOfColumns:(long long)arg1;
- (void)setRequiresLightTopBars:(bool)arg1;
- (void)setScrolledToTop:(bool)arg1;
- (void)setSelectionSnapshot:(id)arg1;
- (void)setShouldAlwaysRespectToolbarActionPlacementPreference:(bool)arg1;
- (void)setShouldAnimateZooming:(bool)arg1;
- (void)setShowLoadingPlaceholderWhenEmpty:(bool)arg1;
- (void)setShowingAlternateContent:(bool)arg1;
- (void)setShowsOnlySelectedItemsInOneUp:(bool)arg1;
- (void)setSupportsAspectRatioToggle:(bool)arg1;
- (void)setSystemAuthenticationType:(long long)arg1;
- (void)setTapbackStatusManager:(id)arg1;
- (void)setTitleBackgroundOpacity:(double)arg1;
- (void)setUserWantsAspectFitContent:(id)arg1;
- (void)setViewBasedDecorationsEnabled:(bool)arg1;
- (void)setViewDelegate:(id)arg1;
- (void)setWantsContentFilterIndicatorVisible:(bool)arg1;
- (void)setWantsContentFilterVisible:(bool)arg1;
- (void)setWantsContentUnavailableUnlockButtonVisible:(bool)arg1;
- (void)setWantsFooterVisible:(bool)arg1;
- (void)setWantsNavbarVisible:(bool)arg1;
- (void)setWantsTabBarVisible:(bool)arg1;
- (void)setWantsToolbarVisible:(bool)arg1;
- (void)setZoomAnchorAssetReference:(id)arg1;
- (void)setZoomStep:(double)arg1;
- (void)setZoomStep:(double)arg1 isInteractive:(bool)arg2 shouldAnimate:(bool)arg3 anchorAssetReference:(id)arg4;
- (id)sharedLibraryStatusProvider;
- (bool)shouldAlwaysRespectToolbarActionPlacementPreference;
- (bool)shouldAnimateZooming;
- (bool)shouldAspectFitContentByDefault;
- (bool)shouldOptOutOfChromelessBars;
- (bool)showLoadingPlaceholderWhenEmpty;
- (bool)showsOnlySelectedItemsInOneUp;
- (id)singleSelectedAssetReference;
- (id)specManager;
- (bool)supportsAspectRatioToggle;
- (bool)supportsPeopleActions;
- (bool)supportsZooming;
- (long long)systemAuthenticationType;
- (id)tapbackStatusManager;
- (id)title;
- (double)titleBackgroundOpacity;
- (void)toggleSelectionForAssetCollectionReference:(id)arg1;
- (void)toggleSelectionForAssetReference:(id)arg1;
- (void)toggleSelectionForAssetReference:(id)arg1 updateCursorIndexPath:(bool)arg2;
- (void)toggleSelectionForIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)toggleSelectionForIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 updateCursorIndexPath:(bool)arg2;
- (double)topBarsAppearanceChangeAnimationDuration;
- (id)updater;
- (bool)useLowMemoryDecode;
- (id)userWantsAspectFitContent;
- (bool)viewBasedDecorationsEnabled;
- (id)viewDelegate;
- (unsigned long long)viewDelegateRespondsTo;
- (bool)viewDelegateRespondsTo:(unsigned long long)arg1;
- (id)visibleAssetCollections;
- (bool)wantsAggregationsLayout;
- (bool)wantsCPLStatus;
- (bool)wantsContentFilterIndicatorVisible;
- (bool)wantsContentFilterVisible;
- (bool)wantsContentUnavailableUnlockButtonVisible;
- (bool)wantsDimmedSelectionStyle;
- (bool)wantsDynamicTitles;
- (bool)wantsFileSizeBadge;
- (bool)wantsFloatingTitle;
- (bool)wantsFooterMask;
- (bool)wantsFooterVisible;
- (bool)wantsFooterVisibleImmediately;
- (bool)wantsModernNavBarButtons;
- (bool)wantsNavbarVisible;
- (bool)wantsNumberedSelectionStyle;
- (bool)wantsOneUpShowInLibraryButton;
- (bool)wantsRenderingStatus;
- (bool)wantsShareGridButtonVisible;
- (bool)wantsSingleRowScrollingLayout;
- (bool)wantsTabBarVisible;
- (bool)wantsToolbarVisible;
- (bool)wantsTopBadgesWithViewBasedDecorations;
- (id)zoomAnchorAssetReference;
- (double)zoomStep;

@end