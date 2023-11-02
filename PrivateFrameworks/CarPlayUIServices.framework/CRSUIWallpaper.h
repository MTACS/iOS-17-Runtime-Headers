
@interface CRSUIWallpaper : NSObject {
    bool  _iconLabelsRequireBackground;
    bool  _supportsDashboardPlatterMaterials;
    bool  _supportsDynamicAppearance;
    NSString * _thumbnailAssetCatalogName;
    NSString * _wallpaperAssetCatalogName;
    NSString * _wallpaperIdentifier;
}

@property (nonatomic, readonly) bool iconLabelsRequireBackground;
@property (nonatomic, readonly) bool supportsDashboardPlatterMaterials;
@property (nonatomic, readonly) bool supportsDynamicAppearance;
@property (nonatomic, retain) NSString *thumbnailAssetCatalogName;
@property (nonatomic, retain) NSString *wallpaperAssetCatalogName;
@property (nonatomic, readonly, copy) NSString *wallpaperIdentifier;

+ (id)_wallpaperInfo;

- (void).cxx_destruct;
- (id)description;
- (bool)iconLabelsRequireBackground;
- (id)initWithWallpaperIdentifier:(id)arg1;
- (void)setThumbnailAssetCatalogName:(id)arg1;
- (void)setWallpaperAssetCatalogName:(id)arg1;
- (bool)supportsDashboardPlatterMaterials;
- (bool)supportsDynamicAppearance;
- (id)thumbnailAssetCatalogName;
- (id)thumbnailColor;
- (id)thumbnailImageCompatibleWithTraitCollection:(id)arg1;
- (id)wallpaperAssetCatalogName;
- (id)wallpaperColor;
- (id)wallpaperIdentifier;
- (id)wallpaperImageCompatibleWithTraitCollection:(id)arg1;

@end
