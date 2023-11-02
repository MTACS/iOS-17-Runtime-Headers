
@interface WKLayeredThumbnailWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper> {
    UIImage * __thumbnailImage;
    WKLayeredThumbnailWallpaperInput * __wallpaperValue;
}

@property (nonatomic, retain) UIImage *_thumbnailImage;
@property (nonatomic, retain) WKLayeredThumbnailWallpaperInput *_wallpaperValue;
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
- (bool)copyWallpaperContentsToDestinationDirectoryURL:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)descriptionBuilderBlock;
- (unsigned long long)hash;
- (id)initWithIdentifier:(long long)arg1 name:(id)arg2 type:(unsigned long long)arg3 representedType:(unsigned long long)arg4 backgroundThumbnailImageURL:(id)arg5 foregroundThumbnailImageURL:(id)arg6 floatingThumbnailImageURL:(id)arg7;
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
