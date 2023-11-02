
@interface SBSHomeScreenService : NSObject <SBSHomeScreenServiceServerToClientInterface> {
    bool  _cachedHomeScreenLayoutAvailable;
    bool  _cachedHomeScreenLayoutAvailableValid;
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    bool  _homeScreenLayoutAvailable;
    NSHashTable * _homeScreenLayoutAvailableObservers;
    NSHashTable * _homeScreenLayoutObservers;
    NSHashTable * _iconBadgeValueObservers;
    NSHashTable * _installedWebClipObservers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic) bool addsNewIconsToHomeScreen;
@property (nonatomic, readonly, copy) NSArray *allHomeScreenApplicationBundleIdentifiers;
@property (nonatomic, readonly, copy) NSArray *allHomeScreenApplicationPlaceholderBundleIdentifiers;
@property (nonatomic, readonly, copy) NSString *allIconLists;
@property (getter=isCachedHomeScreenLayoutAvailable, nonatomic) bool cachedHomeScreenLayoutAvailable;
@property (getter=isCachedHomeScreenLayoutAvailableValid, nonatomic) bool cachedHomeScreenLayoutAvailableValid;
@property (nonatomic, readonly) SBSDebugActiveWidgetInfo *debuggingActiveWidgetInfo;
@property (getter=isHomeScreenLayoutAvailable, nonatomic) bool homeScreenLayoutAvailable;
@property (getter=isLargeIconLayoutEnabled, nonatomic) bool largeIconLayoutEnabled;
@property (nonatomic, readonly, copy) NSArray *overflowSlotCounts;
@property (nonatomic) bool showsBadgesInAppLibrary;
@property (nonatomic) bool showsHomeScreenSearchAffordance;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

- (void).cxx_destruct;
- (void)addApplicationIconToHomeScreenWithBundleIdentifier:(id)arg1;
- (void)addDebugIconWithSizeClassDescription:(id)arg1 inPage:(unsigned long long)arg2 atPositionDescription:(id)arg3;
- (void)addEmptyPage;
- (id)addHomeScreenLayoutAvailabilityObserver:(id)arg1;
- (id)addHomeScreenLayoutObserver:(id)arg1;
- (id)addIconBadgeValueObserver:(id)arg1;
- (id)addInstalledWebClipsObserver:(id)arg1;
- (void)addSuggestedPageWithPageType:(id)arg1 focusModeIdentifier:(id)arg2;
- (void)addWidgetToTodayViewWithBundleIdentifier:(id)arg1;
- (bool)addsNewIconsToHomeScreen;
- (id)allHomeScreenApplicationBundleIdentifiers;
- (id)allHomeScreenApplicationPlaceholderBundleIdentifiers;
- (id)allIconLists;
- (oneway void)applicationIconInfoChangedForBundleIdentifiers:(id)arg1;
- (id)badgeValueForIconWithApplicationBundleIdentifier:(id)arg1;
- (void)badgeValueForIconWithApplicationBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)changeDisplayedDateOffsetOverride:(double)arg1;
- (void)changeDisplayedDateOverride:(id)arg1;
- (void)clearAllOverflowSlotCounts;
- (void)clearTodayViewLayout;
- (id)configureCategoryMapProviderToUseCategoryMapAtURL:(id)arg1;
- (void)configureDeweyEachAppHasItsOwnCategory;
- (void)configureDeweyOneCategoryWithAllApps;
- (void)configureLibraryWithCategoryLimit:(long long)arg1;
- (void)dealloc;
- (bool)debugContinuityWithBadgeType:(id)arg1 deviceTypeIdentifier:(id)arg2;
- (id)debuggingActiveWidgetInfo;
- (void)dismissAppLibraryWithCompletion:(id /* block */)arg1;
- (id)folderPathToIconWithBundleIdentifier:(id)arg1;
- (void)forbidApplicationBundleIdentifierFromLibrary:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)hasWidgetWithBundleIdentifier:(id)arg1;
- (oneway void)homeScreenLayoutAvailabilityDidChange:(id)arg1;
- (oneway void)homeScreenLayoutDidChange;
- (void)ignoreAllApps;
- (id)init;
- (void)insertEmptyPageAtIndex:(unsigned long long)arg1;
- (oneway void)installedWebClipsDidChange;
- (bool)isCachedHomeScreenLayoutAvailable;
- (bool)isCachedHomeScreenLayoutAvailableValid;
- (bool)isHomeScreenLayoutAvailable;
- (bool)isLargeIconLayoutEnabled;
- (void)organizeAllIconsAcrossPagesWithPageCount:(unsigned long long)arg1;
- (void)organizeAllIconsIntoFoldersWithPageCount:(unsigned long long)arg1;
- (id)overflowSlotCounts;
- (void)overrideBadgeValue:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)presentAppLibraryAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)presentAppLibraryCategoryPodForCategoryIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)randomizeAllIconsAcrossPagesWithPageCount:(unsigned long long)arg1;
- (void)reloadHomeScreenLayout;
- (void)reloadIcons;
- (void)removeAllWidgets;
- (void)removeHomeScreenLayoutAvailabilityObservationAssertion:(id)arg1;
- (void)removeHomeScreenLayoutObservationAssertion:(id)arg1;
- (void)removeIconBadgeValueObservationAssertion:(id)arg1;
- (void)removeInstalledWebClipsObservationAssertion:(id)arg1;
- (void)removeWidgetsFromHomeScreen;
- (void)requestAppLibraryUpdateSuggestionsAndRecentsPodWithReason:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestAppLibraryUpdateWithReason:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestSuggestedApplicationWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)resetCategoriesLayoutWithCompletion:(id /* block */)arg1;
- (void)resetHomeScreenLayoutWithCompletion:(id /* block */)arg1;
- (void)resetTodayViewLayout;
- (void)runDownloadingIconTest;
- (oneway void)runFloatingDockStressTestWithCompletion:(id /* block */)arg1;
- (void)runRemoveAndRestoreIconTest;
- (void)runWidgetDiscoverabilityTest;
- (void)setAddsNewIconsToHomeScreen:(bool)arg1;
- (void)setCachedHomeScreenLayoutAvailable:(bool)arg1;
- (void)setCachedHomeScreenLayoutAvailableValid:(bool)arg1;
- (void)setHomeScreenLayoutAvailable:(bool)arg1;
- (void)setIconListsHidden:(id)arg1;
- (void)setLargeIconLayoutEnabled:(bool)arg1;
- (void)setShowsBadgesInAppLibrary:(bool)arg1;
- (void)setShowsHomeScreenSearchAffordance:(bool)arg1;
- (void)setupHomeScreenForWidgetScrollPerformanceTest;
- (bool)showsBadgesInAppLibrary;
- (bool)showsHomeScreenSearchAffordance;
- (id)silhouetteLayoutForPageAtIndex:(unsigned long long)arg1;
- (void)unforbidApplicationBundleIdentifierFromLibrary:(id)arg1 withCompletion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

+ (id)atx_sharedInstance;

@end
