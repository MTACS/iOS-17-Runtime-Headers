
@interface HFWallpaperManager : NSObject <CLLocationManagerDelegate, HFHomeManagerObserver, HFHomeObserver> {
    HFWallpaperFileManager * _fileManager;
    HFWallpaperImageCache * _imageCache;
    HFWallpaperLegacyFileManager * _legacyFileManager;
    <HFNamedWallpaperSource> * _namedWallpaperSource;
    NSUserDefaults * _userDefaults;
    bool  _wallpaperSourceRegistered;
    HFReaderWriterCache * _wallpapersCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFWallpaperFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFWallpaperImageCache *imageCache;
@property (nonatomic, retain) HFWallpaperLegacyFileManager *legacyFileManager;
@property (nonatomic, retain) <HFNamedWallpaperSource> *namedWallpaperSource;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUserDefaults *userDefaults;
@property (nonatomic, readonly) bool wallpaperSourceRegistered;
@property (nonatomic, retain) HFReaderWriterCache *wallpapersCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_cachedWallpaperForKey:(id)arg1;
- (void)_dispatchWallpaperChangedforHomeKitObject:(id)arg1;
- (void)_logUserMetricsAfterSettingWallpaper;
- (void)_migrateIfNeeded;
- (void)_migrateToSunriseWallpaperIfNeeded;
- (void)_migrateWallpaperDict:(id)arg1 forHomeKitIdentifier:(id)arg2;
- (id)_originalImageForWallpaper:(id)arg1 forProcessingGenerator:(bool)arg2;
- (void)_preloadWallpaperForHomeKitObject:(id)arg1;
- (void)_pruneUnusedWallpapers;
- (void)_pruneUnusedWallpapersWithExistingHomeKitIdentifiers:(id)arg1;
- (void)_setImageCacheForWallpaper:(id)arg1 image:(id)arg2 forHomeKitIdentifier:(id)arg3;
- (void)_setWallpaper:(id)arg1 forHomeKitIdentifier:(id)arg2;
- (void)_setWallpaper:(id)arg1 image:(id)arg2 forHomeKitIdentifier:(id)arg3;
- (void)_setWallpaper:(id)arg1 image:(id)arg2 forHomeKitObject:(id)arg3;
- (id)_wallpaperForHomeKitObject:(id)arg1 createIfNeeded:(bool)arg2;
- (id)allNamedWallpaperThumbnailsForWallpaperCollectionType:(long long)arg1;
- (id)allNamedWallpapersForWallpaperCollectionType:(long long)arg1;
- (id)defaultUserSelectableWallpaperForHomeKitObject:(id)arg1;
- (id)defaultUserSelectableWallpaperForWallpaperCollectionType:(long long)arg1;
- (id)defaultWallpaperForCollectionType:(long long)arg1;
- (id)fileManager;
- (id)generateProcessedImageFromWallpaper:(id)arg1 originalImage:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (id)imageCache;
- (id)init;
- (id)legacyFileManager;
- (id)namedWallpaperSource;
- (void)preheatCache;
- (id)processOriginalBlurredImageFromWallpaper:(id)arg1 originalImage:(id)arg2;
- (id)processOriginalImageFromWallpaper:(id)arg1 originalImage:(id)arg2;
- (void)registerWallpaperSource:(id)arg1 processedSource:(id)arg2;
- (void)setFileManager:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setLegacyFileManager:(id)arg1;
- (void)setNamedWallpaperSource:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (void)setWallpaper:(id)arg1 image:(id)arg2 forHomeKitObject:(id)arg3;
- (void)setWallpapersCache:(id)arg1;
- (id)userDefaults;
- (id)wallpaperForHomeKitObject:(id)arg1;
- (id)wallpaperImageForWallpaper:(id)arg1 variant:(long long)arg2;
- (id)wallpaperObjectForWallpaper:(id)arg1 currentUserInterfaceStyle:(long long)arg2;
- (bool)wallpaperSourceRegistered;
- (id)wallpapersCache;

@end
