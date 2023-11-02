
@interface WKBokehWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper> {
    UIImage * __thumbnailImage;
    WKBokehWallpaperInput * __wallpaperValue;
}

@property (nonatomic, retain) UIImage *_thumbnailImage;
@property (nonatomic, retain) WKBokehWallpaperInput *_wallpaperValue;
@property (nonatomic, readonly) unsigned long long backingType;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long representedType;
@property (nonatomic, readonly) bool supportsCopying;
@property (nonatomic, readonly) bool supportsSerialization;
@property (nonatomic, readonly) UIImage *thumbnailImage;
@property (nonatomic, readonly, copy) NSURL *thumbnailImageURL;
@property (nonatomic, readonly) unsigned long long type;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)_thumbnailImage;
- (id)_wallpaperValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)descriptionBuilderBlock;
- (unsigned long long)hash;
- (id)initWithIdentifier:(long long)arg1 name:(id)arg2 backgroundColors:(id)arg3 bubbleColors:(id)arg4 bubbleCount:(unsigned long long)arg5 bubbleScale:(double)arg6 parallaxMultiplier:(double)arg7 thumbnailSeed:(unsigned long long)arg8;
- (bool)isEqual:(id)arg1;
- (id)propertyListRepresentation;
- (void)set_thumbnailImage:(id)arg1;
- (void)set_wallpaperValue:(id)arg1;
- (bool)supportsCopying;
- (bool)supportsSerialization;
- (id)thumbnailImage;
- (id)thumbnailImageURL;
- (id)wallpaperValue;

@end
