
@interface WKLayeredStillWallpaper : WKLayeredThumbnailWallpaper {
    WKLayeredStillWallpaperInput * __wallpaperValue;
}

@property (nonatomic, retain) WKLayeredStillWallpaperInput *_wallpaperValue;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)_wallpaperValue;
- (bool)copyWallpaperContentsToDestinationDirectoryURL:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithIdentifier:(long long)arg1 name:(id)arg2 backgroundThumbnailImageURL:(id)arg3 foregroundThumbnailImageURL:(id)arg4 floatingThumbnailImageURL:(id)arg5 backgroundFullSizeImageURL:(id)arg6 foregroundFullSizeImageURL:(id)arg7 floatingFullSizeImageURL:(id)arg8;
- (id)propertyListRepresentation;
- (void)set_wallpaperValue:(id)arg1;
- (bool)supportsSerialization;
- (id)wallpaperValue;

@end
