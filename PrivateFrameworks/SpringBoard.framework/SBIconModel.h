
@interface SBIconModel : SBHIconModel {
    NSOrderedSet * _cachedFlattenedForecastedDesiredIconState;
    bool  _createsIconsForInternalApps;
    bool  _iconsHaveBeenLoadedOnce;
}

@property (nonatomic, copy) NSOrderedSet *cachedFlattenedForecastedDesiredIconState;

+ (Class)applicationIconClass;
+ (Class)bookmarkClass;
+ (Class)bookmarkIconClass;
+ (id)currentLocaleDidChangeNotificationName;
+ (id)migratedIdentifierForLeafIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_replaceAppIconsWithDownloadingIcons;
- (void)_replaceAppIconsWithDownloadingIcons:(id)arg1;
- (id)addApplication:(id)arg1;
- (id)addBookmarkIconForWebClip:(id)arg1;
- (void)adjustIconsToShow:(id)arg1 iconsToHide:(id)arg2 afterChangeToVisibleIconTags:(id)arg3 hiddenIconTags:(id)arg4;
- (id)applicationIconForBundleIdentifier:(id)arg1;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (id)bookmarkIconForWebClipIdentifier:(id)arg1;
- (id)cachedFlattenedForecastedDesiredIconState;
- (void)clearDesiredIconStateWithOptions:(unsigned long long)arg1;
- (id)exportFlattenedState:(bool)arg1 includeMissingIcons:(bool)arg2;
- (id)exportPendingState:(bool)arg1 includeMissingIcons:(bool)arg2;
- (id)exportState:(bool)arg1;
- (id)forecastedLayoutForIconState:(id)arg1 includeMissingIcons:(bool)arg2;
- (bool)importState:(id)arg1;
- (id)indexPathForIconInPlatformState:(id)arg1;
- (bool)isIconVisible:(id)arg1;
- (void)loadAllIcons;
- (id)modernizeRootArchive:(id)arg1;
- (void)setCachedFlattenedForecastedDesiredIconState:(id)arg1;
- (bool)shouldAvoidCreatingIconForApplication:(id)arg1;
- (bool)shouldAvoidPlacingIconOnFirstPage:(id)arg1;
- (void)willLayout;

@end
