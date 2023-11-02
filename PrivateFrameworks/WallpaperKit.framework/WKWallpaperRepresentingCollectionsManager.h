
@interface WKWallpaperRepresentingCollectionsManager : NSObject {
    WKWallpaperBundleDownloadManager * __downloadManager;
    NSMapTable * __wallpaperCollectionLookupTable;
    NSMutableArray * __wallpaperCollections;
}

@property (nonatomic, retain) WKWallpaperBundleDownloadManager *_downloadManager;
@property (nonatomic, retain) NSMapTable *_wallpaperCollectionLookupTable;
@property (nonatomic, retain) NSMutableArray *_wallpaperCollections;
@property (nonatomic, readonly) long long numberOfWallpaperCollections;

+ (id)defaultManager;

- (void).cxx_destruct;
- (id)_downloadManager;
- (void)_loadCollections;
- (void)_loadSystemWallpaperCollections;
- (id)_wallpaperCollectionLookupTable;
- (id)_wallpaperCollections;
- (id)initWithDownloadManager:(id)arg1;
- (long long)numberOfWallpaperCollections;
- (void)set_downloadManager:(id)arg1;
- (void)set_wallpaperCollectionLookupTable:(id)arg1;
- (void)set_wallpaperCollections:(id)arg1;
- (id)wallpaperCollectionAtIndex:(long long)arg1;
- (id)wallpaperCollectionWithIdentifier:(id)arg1;

@end
