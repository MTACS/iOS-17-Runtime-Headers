
@protocol SBSHomeScreenServiceClientToServerInterface

@required

- (void)addApplicationIconToHomeScreenWithBundleIdentifier:(NSString *)arg1;
- (void)addDebugIconWithSizeClassDescription:(NSString *)arg1 inPage:(NSNumber *)arg2 atPositionDescription:(NSString *)arg3;
- (void)addEmptyPage;
- (void)addSuggestedPageWithPageType:(NSString *)arg1 focusModeIdentifier:(NSString *)arg2;
- (void)addWidgetToTodayViewWithBundleIdentifier:(NSString *)arg1;
- (NSNumber *)addsNewIconsToHomeScreenValue;
- (SBSHomeScreenServiceArrayOfStrings *)allHomeScreenApplicationBundleIdentifiers;
- (SBSHomeScreenServiceArrayOfStrings *)allHomeScreenApplicationPlaceholderBundleIdentifiers;
- (NSString *)allIconLists;
- (SBSHomeScreenServiceNumberOrString *)badgeValueForIconWithApplicationBundleIdentifier:(NSString *)arg1;
- (void)badgeValueForIconWithApplicationBundleIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SBSHomeScreenServiceNumberOrString *, NSError *, void*
- (void)changeDisplayedDateOffsetOverride:(NSNumber *)arg1;
- (void)changeDisplayedDateOverride:(NSDate *)arg1;
- (oneway void)clearAllOverflowSlotCounts;
- (void)clearTodayViewLayout;
- (NSError *)configureCategoryMapProviderToUseCategoryMapAtURL:(NSURL *)arg1;
- (void)configureDeweyEachAppHasItsOwnCategory;
- (void)configureDeweyOneCategoryWithAllApps;
- (void)configureLibraryWithCategoryLimit:(NSNumber *)arg1;
- (bool)debugContinuityWithBadgeType:(NSString *)arg1 deviceTypeIdentifier:(NSString *)arg2;
- (SBSDebugActiveWidgetInfo *)debuggingActiveWidgetInfo;
- (void)dismissAppLibraryWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (SBSHomeScreenServiceArrayOfStrings *)folderPathToIconWithBundleIdentifier:(NSString *)arg1;
- (oneway void)forbidApplicationBundleIdentifierFromLibrary:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)hasWidgetWithBundleIdentifier:(NSString *)arg1;
- (NSNumber *)homeScreenLayoutAvailability;
- (void)ignoreAllApps;
- (void)insertEmptyPageAtIndex:(NSNumber *)arg1;
- (NSNumber *)largeIconLayoutEnabledValue;
- (void)organizeAllIconsAcrossPagesWithPageCount:(NSNumber *)arg1;
- (void)organizeAllIconsIntoFoldersWithPageCount:(NSNumber *)arg1;
- (SBSHomeScreenServiceArrayOfNumbers *)overflowSlotCounts;
- (void)overrideBadgeValue:(NSString *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)presentAppLibraryAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)presentAppLibraryCategoryPodForCategoryIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)randomizeAllIconsAcrossPagesWithPageCount:(NSNumber *)arg1;
- (void)refreshAppLibrary:(NSNumber *)arg1 reason:(NSString *)arg2;
- (void)reloadHomeScreenLayout;
- (void)reloadIcons;
- (void)removeAllWidgets;
- (void)removeWidgetsFromHomeScreen;
- (void)requestAppLibraryUpdate:(void *)arg1 reason:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSNumber *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (oneway void)requestSuggestedApplicationWithBundleIdentifier:(void *)arg1 assertionPort:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, BSMachPortSendRight *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)resetCategoriesLayoutWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)resetHomeScreenLayoutWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resetTodayViewLayout;
- (void)runDownloadingIconTest;
- (oneway void)runFloatingDockStressTestWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)runRemoveAndRestoreIconTest;
- (void)runWidgetDiscoverabilityTest;
- (void)setAddsNewIconsToHomeScreenValue:(NSNumber *)arg1;
- (void)setIconListsHidden:(SBSHomeScreenServiceArrayOfStrings *)arg1;
- (void)setLargeIconLayoutEnabledValue:(NSNumber *)arg1;
- (oneway void)setObservingHomeScreenLayout:(NSNumber *)arg1;
- (oneway void)setObservingHomeScreenLayoutAvailability:(NSNumber *)arg1;
- (oneway void)setObservingIconBadgeValue:(NSNumber *)arg1;
- (oneway void)setObservingInstalledWebClips:(NSNumber *)arg1;
- (void)setShowsBadgesInAppLibraryValue:(NSNumber *)arg1;
- (void)setShowsHomeScreenSearchAffordanceValue:(NSNumber *)arg1;
- (void)setupHomeScreenForWidgetScrollPerformanceTest;
- (NSNumber *)showsBadgesInAppLibraryValue;
- (NSNumber *)showsHomeScreenSearchAffordanceValue;
- (SBSHomeScreenSilhouetteLayout *)silhouetteLayoutForPageAtIndex:(NSNumber *)arg1;
- (oneway void)unforbidApplicationBundleIdentifierFromLibrary:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
