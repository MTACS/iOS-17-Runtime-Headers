
@interface WKDefaultWallpaperManager : NSObject {
    WKWallpaperRepresentingCollectionsManager * __collectionsManager;
    WKWallpaperBundle * __defaultWallpaperBundle;
    NSDictionary * __defaultWallpaperLookup;
}

@property (nonatomic, retain) WKWallpaperRepresentingCollectionsManager *_collectionsManager;
@property (nonatomic, retain) WKWallpaperBundle *_defaultWallpaperBundle;
@property (nonatomic, retain) NSDictionary *_defaultWallpaperLookup;

+ (id)defaultWallpaperLookupURL;
+ (id)defaultWallpaperManager;

- (void).cxx_destruct;
- (id)_collectionsManager;
- (id)_defaultWallpaperBundle;
- (id)_defaultWallpaperLookup;
- (void)_loadDefaultWallpaperFile;
- (void)_loadDefaultWallpaperInformation;
- (id)_wallpaperRepresentingWithIdentifier:(id)arg1;
- (id)defaultWallpaperBundle;
- (id)deviceColor;
- (id)deviceEnclosureColor;
- (id)deviceLogicalScreenClass;
- (id)deviceProductType;
- (id)initWithCollectionsManager:(id)arg1;
- (void)set_collectionsManager:(id)arg1;
- (void)set_defaultWallpaperBundle:(id)arg1;
- (void)set_defaultWallpaperLookup:(id)arg1;

@end
