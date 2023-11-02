
@interface WKWallpaperRepresentingCollection : NSObject {
    NSMutableArray * __wallpaperBundles;
    NSMapTable * __wallpaperLookupTable;
    NSString * _displayName;
    WKWallpaperBundleDownloadManager * _downloadManager;
    bool  _hiddenFromPicker;
    NSUUID * _identifier;
    <WKWallpaperRepresenting> * _previewWallpaperRepresenting;
    NSString * _wallpaperCollectionIdentifier;
    bool  _wallpapersShareBaseAppearance;
}

@property (nonatomic, retain) NSMutableArray *_wallpaperBundles;
@property (nonatomic, retain) NSMapTable *_wallpaperLookupTable;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, retain) WKWallpaperBundleDownloadManager *downloadManager;
@property (nonatomic, readonly) bool hiddenFromPicker;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) long long numberOfWallpapers;
@property (nonatomic, readonly) <WKWallpaperRepresenting> *previewWallpaperRepresenting;
@property (nonatomic, readonly) bool supportsDownloading;
@property (nonatomic, retain) NSString *wallpaperCollectionIdentifier;
@property (nonatomic, readonly) bool wallpapersShareBaseAppearance;

+ (id)_loadCollectionMetadataWithURL:(id)arg1;
+ (id)_loadWallpaperRepresentingContentFromURL:(id)arg1 collectionMetadata:(id)arg2;
+ (void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)arg1 collectionURL:(id)arg2;
+ (bool)shouldLoadWallpaperCollectionAtURL:(id)arg1;

- (void).cxx_destruct;
- (id)_wallpaperBundles;
- (id)_wallpaperLookupTable;
- (void)cancelDownloadForWallpaperRepresentingWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)containsWallpaperRepresentingWithIdentifier:(id)arg1;
- (id)deviceColor;
- (id)deviceEnclosureColor;
- (id)displayName;
- (id)downloadManager;
- (void)downloadWallpaperRepresentingWithIdentifier:(id)arg1 progress:(id)arg2 completion:(id /* block */)arg3;
- (bool)hiddenFromPicker;
- (id)identifier;
- (id)initWithURL:(id)arg1 downloadManager:(id)arg2;
- (id)initWithWallpaperCollectionIdentifier:(id)arg1 displayName:(id)arg2 previewWallpaperRepresenting:(id)arg3 wallpapersShareBaseAppearance:(bool)arg4 hiddenFromPicker:(bool)arg5 wallpaperRepresentingCollection:(id)arg6 downloadManager:(id)arg7;
- (long long)numberOfWallpapers;
- (id)previewWallpaperRepresenting;
- (void)setDownloadManager:(id)arg1;
- (void)setWallpaperCollectionIdentifier:(id)arg1;
- (void)set_wallpaperBundles:(id)arg1;
- (void)set_wallpaperLookupTable:(id)arg1;
- (bool)supportsDownloading;
- (id)wallpaperBundleAtIndex:(long long)arg1;
- (id)wallpaperCollectionIdentifier;
- (id)wallpaperRepresentingWithIdentifier:(id)arg1;
- (bool)wallpapersShareBaseAppearance;

@end
