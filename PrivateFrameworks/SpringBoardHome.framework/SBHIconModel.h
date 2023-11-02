
@interface SBHIconModel : NSObject <BSDescriptionProviding, SBFolderObserver, SBHIconModelApplicationDataSourceObserver, SBHIconStateUnarchiverDelegate, SBHIconStateUnarchiverIconSource, SBIconDelegate, SBIconObserver, SBSHomeScreenServiceInstalledWebClipsObserver> {
    NSMutableSet * _additionalApplicationIconIdentifiers;
    <SBHIconModelApplicationDataSource> * _applicationDataSource;
    NSMutableDictionary * _applicationIconsByBundleIdentifier;
    NSSet * _archivedLeafIdentifiers;
    bool  _automaticallyAddsApplicationPlaceholders;
    bool  _automaticallyAddsApplications;
    bool  _automaticallyAddsWebClips;
    NSMutableSet * _autosaveDisableAssertions;
    NSTimer * _autosaveTimer;
    SBRootFolder * _cachedDefaultRootFolder;
    SBRootFolder * _cachedDesiredRootFolder;
    bool  _checkingModelConsistency;
    <SBHIconModelDelegate> * _delegate;
    NSDictionary * _desiredIconState;
    NSOrderedSet * _desiredIconStateFlattened;
    struct __CFRunLoopObserver { } * _discardCachedOtherRootFoldersRunLoopObserver;
    NSHashTable * _folders;
    NSSet * _hiddenIconTags;
    SBSHomeScreenService * _homeScreenService;
    struct __CFRunLoopObserver { } * _iconRunLoopObserver;
    bool  _iconStateDirty;
    bool  _ignoresIconsNotInIconState;
    <BSInvalidatable> * _installedWebClipsObservation;
    long long  _lastLayoutStatus;
    bool  _layingOut;
    NSMutableDictionary * _leafIconsByIdentifier;
    bool  _postsDidAddIconNotification;
    NSMutableSet * _removedIcons;
    bool  _restoring;
    SBRootFolder * _rootFolder;
    unsigned long long  _rootFolderAllowedGridSizeClasses;
    SBIcon * _rootFolderIcon;
    bool  _sortsIconsAlphabetically;
    <SBIconModelStore> * _store;
    bool  _tagsHaveBeenSet;
    <SBIconModelStore> * _todayListsStore;
    NSSet * _visibleIconTags;
    NSMutableDictionary * _widgetIconsByIdentifier;
}

@property (nonatomic, readonly) <SBHIconModelApplicationDataSource> *applicationDataSource;
@property (nonatomic, copy) NSSet *archivedLeafIdentifiers;
@property (nonatomic) bool automaticallyAddsApplicationPlaceholders;
@property (nonatomic) bool automaticallyAddsApplications;
@property (nonatomic) bool automaticallyAddsWebClips;
@property (nonatomic, retain) NSTimer *autosaveTimer;
@property (nonatomic, retain) SBRootFolder *cachedDefaultRootFolder;
@property (nonatomic, retain) SBRootFolder *cachedDesiredRootFolder;
@property (getter=isCheckingModelConsistency, nonatomic) bool checkingModelConsistency;
@property (nonatomic, readonly, copy) NSSet *currentLeafIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSDictionary *defaultIconState;
@property (nonatomic) <SBHIconModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *desiredIconState;
@property (nonatomic, copy) NSOrderedSet *desiredIconStateFlattened;
@property (nonatomic, readonly) struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSize { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3; struct SBHIconGridSize { unsigned short x_4_1_1; unsigned short x_4_1_2; } x4; struct SBHIconGridSize { unsigned short x_5_1_1; unsigned short x_5_1_2; } x5; } gridSizeClassSizes;
@property (nonatomic, readonly) bool hasDesiredIconState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *hiddenIconTags;
@property (nonatomic, readonly) SBSHomeScreenService *homeScreenService;
@property (getter=isIconStateDirty, nonatomic) bool iconStateDirty;
@property (nonatomic) bool ignoresIconsNotInIconState;
@property (nonatomic, retain) <BSInvalidatable> *installedWebClipsObservation;
@property (nonatomic) long long lastLayoutStatus;
@property (getter=isLayingOut, nonatomic) bool layingOut;
@property (nonatomic, readonly, copy) NSSet *leafIconIdentifiers;
@property (nonatomic, readonly, copy) NSSet *leafIcons;
@property (nonatomic, readonly, copy) NSSet *leafIconsUniquedByApplicationBundleIdentifier;
@property (nonatomic, readonly) unsigned long long listRotatedLayoutClusterGridSizeClass;
@property (nonatomic, readonly, copy) NSString *localizedDefaultFolderName;
@property (nonatomic, readonly) unsigned long long maxColumnCountForTodayList;
@property (nonatomic, readonly) unsigned long long maxIconCountForDock;
@property (nonatomic, readonly) unsigned long long maxListCountForFolders;
@property (nonatomic, readonly) unsigned long long maxRowCountForFavoriteTodayList;
@property (nonatomic, readonly, copy) NSSet *missingDesiredIconIdentifiers;
@property (nonatomic) bool postsDidAddIconNotification;
@property (getter=isRestoring, nonatomic) bool restoring;
@property (nonatomic, readonly) SBRootFolder *rootFolder;
@property (nonatomic) unsigned long long rootFolderAllowedGridSizeClasses;
@property (nonatomic, retain) SBIcon *rootFolderIcon;
@property (nonatomic) bool sortsIconsAlphabetically;
@property (nonatomic, retain) <SBIconModelStore> *store;
@property (readonly) Class superclass;
@property (nonatomic, retain) <SBIconModelStore> *todayListsStore;
@property (nonatomic, readonly, copy) NSString *unlocalizedDefaultFolderName;
@property (nonatomic, readonly, copy) NSSet *visibleIconIdentifiers;
@property (nonatomic, readonly, copy) NSSet *visibleIconTags;
@property (nonatomic, readonly, copy) NSSet *visibleLeafIcons;

+ (id)allWebClips;
+ (Class)applicationIconClass;
+ (Class)bookmarkClass;
+ (Class)bookmarkIconClass;
+ (id)currentLocaleDidChangeNotificationName;
+ (id)defaultApplicationDataSource;
+ (Class)iconClassForApplicationWithBundleIdentifier:(id)arg1;
+ (id)migratedIdentifierForLeafIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_adjustedDesiredIndexPathInRootFolder:(id)arg1 forIconWithIdentifier:(id)arg2;
- (id)_adjustedIndexPathInRootFolder:(id)arg1 withinIconState:(id)arg2 forIconWithIdentifier:(id)arg3;
- (id)_adjustedPlatformIndexPathInRootFolder:(id)arg1 forIcon:(id)arg2;
- (void)_checkRemovedIcons;
- (long long)_getLoadedIconState:(id*)arg1 error:(id*)arg2;
- (void)_noteApplicationIconImageChanged:(id)arg1;
- (void)_noteRemovedIcons:(id)arg1;
- (void)_removeIconStateAutosaveDisableAssertion:(id)arg1;
- (void)_rootFolder:(id)arg1 moveIconsToFirstPage:(id)arg2 placeBumpedIconsSomewhereNice:(id)arg3;
- (void)_saveIconState;
- (bool)_saveIconState:(id)arg1 error:(id*)arg2;
- (bool)_saveIconStateWithError:(id*)arg1;
- (void)_setUpIconRunLoopObserver;
- (bool)_shouldSkipAddingIcon:(id)arg1 toRootFolder:(id)arg2;
- (void)_tearDownDiscardCachedOtherRootFoldersRunloopObserverIfNeeded;
- (void)_tearDownIconRunloopObserverIfNeeded;
- (id)_unarchiveRootFolderWithLayoutStatus:(long long*)arg1;
- (id)addAdditionalIconMatchingIcon:(id)arg1;
- (id)addApplication:(id)arg1;
- (id)addApplication:(id)arg1 force:(bool)arg2;
- (id)addApplicationPlaceholder:(id)arg1;
- (id)addBookmarkIconForWebClip:(id)arg1;
- (void)addIcon:(id)arg1;
- (bool)addIcon:(id)arg1 toDesignatedLocationBasedOnOtherRootFolder:(id)arg2 toRootFolder:(id)arg3 options:(unsigned long long)arg4 listGridCellInfoOptions:(unsigned long long)arg5;
- (bool)addIcon:(id)arg1 toDesignatedLocationInRootFolder:(id)arg2 options:(unsigned long long)arg3 listGridCellInfoOptions:(unsigned long long)arg4;
- (bool)addIconToDesignatedLocation:(id)arg1 options:(unsigned long long)arg2 listGridCellInfoOptions:(unsigned long long)arg3;
- (bool)addIconToDesignatedLocationBasedOnDefaultIconState:(id)arg1 toRootFolder:(id)arg2 options:(unsigned long long)arg3 listGridCellInfoOptions:(unsigned long long)arg4;
- (bool)addIconToDesignatedLocationBasedOnDelegate:(id)arg1 toRootFolder:(id)arg2 options:(unsigned long long)arg3 listGridCellInfoOptions:(unsigned long long)arg4;
- (bool)addIconToDesignatedLocationBasedOnDesiredIconState:(id)arg1 toRootFolder:(id)arg2 options:(unsigned long long)arg3 listGridCellInfoOptions:(unsigned long long)arg4;
- (void)addIconsOfClass:(Class)arg1 toSet:(id)arg2;
- (void)adjustIconsToShow:(id)arg1 iconsToHide:(id)arg2 afterChangeToVisibleIconTags:(id)arg3 hiddenIconTags:(id)arg4;
- (unsigned long long)allowedGridSizeClassesForDock;
- (unsigned long long)allowedGridSizeClassesForDockForIconStateUnarchiver:(id)arg1;
- (unsigned long long)allowedGridSizeClassesForFolderClass:(Class)arg1;
- (unsigned long long)allowedGridSizeClassesForTodayList;
- (unsigned long long)allowedGridSizeClassesForTodayListForIconStateUnarchiver:(id)arg1;
- (id)applicationDataSource;
- (id)applicationIconForBundleIdentifier:(id)arg1;
- (id)applicationIconsForBundleIdentifier:(id)arg1;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (id)archivedLeafIdentifiers;
- (bool)automaticallyAddsApplicationPlaceholders;
- (bool)automaticallyAddsApplications;
- (bool)automaticallyAddsWebClips;
- (id)autosaveTimer;
- (void)autosaveTimerDidFire:(id)arg1;
- (id)bookmarkIconForWebClipIdentifier:(id)arg1;
- (id)bookmarkIconForWebClipPlaceholderBundleIdentifier:(id)arg1;
- (id)cachedDefaultRootFolder;
- (id)cachedDesiredRootFolder;
- (void)checkModelConsistency;
- (void)checkModelConsistencyInRootFolder:(id)arg1 listGridCellInfoOptions:(unsigned long long)arg2;
- (void)checkModelConsistencyWithListGridCellInfoOptions:(unsigned long long)arg1;
- (void)clearDesiredIconState;
- (void)clearDesiredIconStateIfPossible;
- (void)clearDesiredIconStateWithOptions:(unsigned long long)arg1;
- (id)currentLeafIdentifiers;
- (void)dealloc;
- (id)defaultIconState;
- (id)delegate;
- (bool)deleteIconState;
- (bool)deleteIconStateWithOptions:(unsigned long long)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)desiredIconState;
- (id)desiredIconStateFlattened;
- (id)desiredIndexPathForIconWithIdentifier:(id)arg1;
- (void)didAddIcon:(id)arg1;
- (void)didUnarchiveMetadata:(id)arg1;
- (id)disableIconStateAutosaveForReason:(id)arg1;
- (void)discardCachedOtherRootFolders;
- (void)enumerateApplicationIconsForBundleIdentifier:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateLeafIconsUsingBlock:(id /* block */)arg1;
- (id)expectedIconForDisplayIdentifier:(id)arg1;
- (id)expectedIconForDisplayIdentifier:(id)arg1 createIfNecessary:(bool)arg2;
- (void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (void)folder:(id)arg1 willAddIcon:(id)arg2;
- (void)folderIconStateDidDirty:(id)arg1;
- (struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSize { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3; struct SBHIconGridSize { unsigned short x_4_1_1; unsigned short x_4_1_2; } x4; struct SBHIconGridSize { unsigned short x_5_1_1; unsigned short x_5_1_2; } x5; })gridSizeClassSizes;
- (struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSize { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3; struct SBHIconGridSize { unsigned short x_4_1_1; unsigned short x_4_1_2; } x4; struct SBHIconGridSize { unsigned short x_5_1_1; unsigned short x_5_1_2; } x5; })gridSizeClassSizesForIconStateUnarchiver:(id)arg1;
- (bool)hasAnyDirtyModelObjects;
- (bool)hasDesiredIconState;
- (id)hiddenIconTags;
- (id)homeScreenService;
- (void)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (void)iconArchivableStateDidChange:(id)arg1;
- (Class)iconClassForApplicationWithBundleIdentifier:(id)arg1;
- (void)iconModelApplicationDataSource:(id)arg1 applicationPlaceholdersAdded:(id)arg2;
- (void)iconModelApplicationDataSource:(id)arg1 applicationPlaceholdersRemoved:(id)arg2;
- (void)iconModelApplicationDataSource:(id)arg1 applicationsAdded:(id)arg2;
- (void)iconModelApplicationDataSource:(id)arg1 applicationsRemoved:(id)arg2;
- (void)iconModelApplicationDataSource:(id)arg1 applicationsUpdated:(id)arg2;
- (id)iconModelMetadata;
- (id)iconState;
- (unsigned long long)iconStateUnarchiver:(id)arg1 allowedGridSizeClassesForFolderClass:(Class)arg2;
- (id)iconStateUnarchiver:(id)arg1 didUnarchiveWidgetIcon:(id)arg2;
- (struct SBHIconGridSize { unsigned short x1; unsigned short x2; })iconStateUnarchiver:(id)arg1 listGridSizeForFolderClass:(Class)arg2;
- (struct SBHIconGridSize { unsigned short x1; unsigned short x2; })iconStateUnarchiver:(id)arg1 listWithNonDefaultSizedIconsGridSizeForFolderClass:(Class)arg2;
- (bool)iconStateUnarchiver:(id)arg1 listsAllowRotatedLayoutForFolderClass:(Class)arg2;
- (long long)iconStateUnarchiver:(id)arg1 listsFixedIconLocationBehaviorForFolderClass:(Class)arg2;
- (unsigned long long)iconStateUnarchiver:(id)arg1 listsIconLayoutBehaviorForFolderClass:(Class)arg2;
- (void)iconWantsUninstall:(id)arg1;
- (id)iconsOfClass:(Class)arg1;
- (bool)ignoresIconsNotInIconState;
- (void)importDesiredIconState:(id)arg1;
- (void)importIconState:(id)arg1;
- (id)indexPathForIconInPlatformState:(id)arg1;
- (id)indexPathForNewIcon:(id)arg1 isDesignatedLocation:(bool*)arg2 replaceExistingIconAtIndexPath:(id*)arg3;
- (id)indexPathInRootFolder:(id)arg1 forNewIcon:(id)arg2 isDesignatedLocation:(bool*)arg3 replaceExistingIconAtIndexPath:(id*)arg4;
- (id)init;
- (id)initWithStore:(id)arg1;
- (id)initWithStore:(id)arg1 applicationDataSource:(id)arg2;
- (void)installedWebClipsDidChange;
- (id)installedWebClipsObservation;
- (bool)isCheckingModelConsistency;
- (bool)isIconStateDirty;
- (bool)isIconVisible:(id)arg1;
- (bool)isLayingOut;
- (bool)isRestoring;
- (bool)isTrackingIcon:(id)arg1;
- (long long)lastLayoutStatus;
- (void)layout;
- (void)layoutIfNeeded;
- (id)leafIconForIdentifier:(id)arg1;
- (id)leafIconIdentifiers;
- (id)leafIcons;
- (id)leafIconsForIdentifiers:(id)arg1;
- (id)leafIconsForIdentifiers:(id)arg1 notFoundMarker:(id)arg2;
- (id)leafIconsUniquedByApplicationBundleIdentifier;
- (struct SBHIconGridSize { unsigned short x1; unsigned short x2; })listGridSizeForFolderClass:(Class)arg1;
- (unsigned long long)listRotatedLayoutClusterGridSizeClass;
- (unsigned long long)listRotatedLayoutClusterGridSizeClassForIconStateUnarchiver:(id)arg1;
- (struct SBHIconGridSize { unsigned short x1; unsigned short x2; })listWithNonDefaultSizedIconsGridSizeForFolderClass:(Class)arg1;
- (bool)listsAllowRotatedLayoutForFolderClass:(Class)arg1;
- (long long)listsFixedIconLocationBehaviorForFolderClass:(Class)arg1;
- (unsigned long long)listsIconLayoutBehaviorForFolderClass:(Class)arg1;
- (void)loadAllIcons;
- (void)loadDesiredIconState;
- (void)localeChanged;
- (id)localizedDefaultFolderName;
- (id)localizedFolderNameForDefaultDisplayName:(id)arg1;
- (id)makeFolderWithDisplayName:(id)arg1;
- (id)makeFolderWithDisplayName:(id)arg1 uniqueIdentifier:(id)arg2;
- (void)markIconStateClean;
- (void)markIconStateDirty;
- (unsigned long long)maxColumnCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
- (unsigned long long)maxColumnCountForTodayList;
- (unsigned long long)maxIconCountForDock;
- (unsigned long long)maxIconCountForDockForIconStateUnarchiver:(id)arg1;
- (unsigned long long)maxListCountForFolders;
- (unsigned long long)maxListCountForFoldersForIconStateUnarchiver:(id)arg1;
- (unsigned long long)maxRowCountForFavoriteTodayList;
- (unsigned long long)maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
- (id)missingDesiredIconIdentifiers;
- (id)modernizeRootArchive:(id)arg1;
- (bool)postsDidAddIconNotification;
- (void)reloadIcons;
- (void)removeAllIcons;
- (id)removeApplication:(id)arg1;
- (id)removeApplication:(id)arg1 pruneEmptyIcons:(bool)arg2;
- (void)removeApplicationIconsForBundleIdentifier:(id)arg1;
- (id)removeApplicationPlaceholder:(id)arg1;
- (id)removeApplicationWithBundleIdentifier:(id)arg1;
- (id)removeApplicationWithBundleIdentifier:(id)arg1 pruneEmptyIcons:(bool)arg2;
- (void)removeIcon:(id)arg1;
- (void)removeIcon:(id)arg1 shouldRemoveFromRootFolder:(bool)arg2;
- (void)removeIconForIdentifier:(id)arg1;
- (void)removeIcons:(id)arg1;
- (id)rootFolder;
- (unsigned long long)rootFolderAllowedGridSizeClasses;
- (id)rootFolderIcon;
- (void)saveDesiredIconState;
- (bool)saveIconStateIfNeeded;
- (void)scheduleDiscardOfCachedOtherRootFolders;
- (void)scheduleIconStateAutosave;
- (void)setArchivedLeafIdentifiers:(id)arg1;
- (void)setAutomaticallyAddsApplicationPlaceholders:(bool)arg1;
- (void)setAutomaticallyAddsApplications:(bool)arg1;
- (void)setAutomaticallyAddsWebClips:(bool)arg1;
- (void)setAutosaveTimer:(id)arg1;
- (void)setCachedDefaultRootFolder:(id)arg1;
- (void)setCachedDesiredRootFolder:(id)arg1;
- (void)setCheckingModelConsistency:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredIconState:(id)arg1;
- (void)setDesiredIconStateFlattened:(id)arg1;
- (void)setForecastedLeavesOnIconModel:(id)arg1 includingMissingIcons:(id)arg2;
- (void)setIconStateDirty:(bool)arg1;
- (void)setIgnoresIconsNotInIconState:(bool)arg1;
- (void)setInstalledWebClipsObservation:(id)arg1;
- (void)setLastLayoutStatus:(long long)arg1;
- (void)setLayingOut:(bool)arg1;
- (void)setLeafIconsByIdentifier:(id)arg1;
- (void)setPostsDidAddIconNotification:(bool)arg1;
- (void)setRestoring:(bool)arg1;
- (void)setRootFolderAllowedGridSizeClasses:(unsigned long long)arg1;
- (void)setRootFolderIcon:(id)arg1;
- (void)setSortsIconsAlphabetically:(bool)arg1;
- (void)setStore:(id)arg1;
- (void)setTodayListsStore:(id)arg1;
- (void)setVisibilityOfIconsWithVisibleTags:(id)arg1 hiddenTags:(id)arg2;
- (bool)shouldAvoidCreatingIconForApplication:(id)arg1;
- (bool)shouldAvoidPlacingIconOnFirstPage:(id)arg1;
- (bool)shouldPlaceIconOnIgnoredList:(id)arg1;
- (bool)sortsIconsAlphabetically;
- (id)store;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)todayListsStore;
- (id)unarchivedRootFolderForAddingIconFromOtherIconState:(id)arg1;
- (id)unlocalizedDefaultFolderName;
- (void)updateExistingBookmarkIcon:(id)arg1 forUpdatedWebClip:(id)arg2;
- (id)visibleIconIdentifiers;
- (id)visibleIconTags;
- (id)visibleLeafIcons;
- (id)widgetIconForLeafIdentifier:(id)arg1;
- (id)widgetIcons;
- (id)widgetIconsContainingWidgetsMatchingExtensionBundleIdentifier:(id)arg1 kind:(id)arg2 sizeClass:(long long)arg3;
- (id)widgetIconsContainingWidgetsMatchingUniqueIdentifier:(id)arg1;
- (void)willLayout;

@end