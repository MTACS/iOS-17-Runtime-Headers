
@interface HFWallpaper : NSObject <NSCopying> {
    NSString * _assetIdentifier;
    HFCroppedWallpaperInfo * _cropInfo;
    bool  _isCustomType;
    HFWallpaper * _lastUserSelectedWallpaper;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *assetIdentifier;
@property (nonatomic, copy) HFCroppedWallpaperInfo *cropInfo;
@property (nonatomic) bool isCustomType;
@property (nonatomic, retain) HFWallpaper *lastUserSelectedWallpaper;
@property (nonatomic, readonly) long long type;

+ (struct CGSize { double x1; double x2; })contentSizeForWallpaper;
+ (id)customWallpaperWithAssetIdentifier:(id)arg1;
+ (struct CGSize { double x1; double x2; })size;

- (void).cxx_destruct;
- (id)assetIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cropInfo;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(long long)arg1 assetIdentifier:(id)arg2 cropInfo:(id)arg3;
- (bool)isCustomType;
- (bool)isEqual:(id)arg1;
- (id)lastUserSelectedWallpaper;
- (void)setCropInfo:(id)arg1;
- (void)setIsCustomType:(bool)arg1;
- (void)setLastUserSelectedWallpaper:(id)arg1;
- (id)sliceIdentifierForVariant:(long long)arg1;
- (long long)type;
- (id)wallpaperIdentifier;

@end
