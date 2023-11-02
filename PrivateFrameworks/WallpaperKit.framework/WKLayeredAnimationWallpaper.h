
@interface WKLayeredAnimationWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper> {
    WKLayeredAnimationWallpaperInput * __wallpaperValue;
}

@property (nonatomic, retain) WKLayeredAnimationWallpaperInput *_wallpaperValue;
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
- (id)_wallpaperValue;
- (bool)copyWallpaperContentsToDestinationDirectoryURL:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)descriptionBuilderBlock;
- (unsigned long long)hash;
- (id)initWithIdentifier:(long long)arg1 name:(id)arg2 backgroundAnimationFileURL:(id)arg3 foregroundAnimationFileURL:(id)arg4 floatingAnimationFileURL:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)propertyListRepresentation;
- (void)set_wallpaperValue:(id)arg1;
- (bool)supportsCopying;
- (bool)supportsSerialization;
- (id)thumbnailImage;
- (id)thumbnailImageURL;
- (id)wallpaperValue;

@end
