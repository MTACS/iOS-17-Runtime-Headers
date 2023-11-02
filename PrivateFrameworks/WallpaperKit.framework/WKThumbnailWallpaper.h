
@interface WKThumbnailWallpaper : WKAbstractWallpaper {
    UIImage * __thumbnailImage;
    NSURL * _thumbnailImageURL;
}

@property (nonatomic, retain) UIImage *_thumbnailImage;
@property (nonatomic, copy) NSURL *thumbnailImageURL;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)_thumbnailImage;
- (bool)copyWallpaperContentsToDestinationDirectoryURL:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)descriptionBuilderBlock;
- (unsigned long long)hash;
- (id)initWithIdentifier:(long long)arg1 name:(id)arg2 type:(unsigned long long)arg3 representedType:(unsigned long long)arg4 backingType:(unsigned long long)arg5 thumbnailImageURL:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)propertyListRepresentation;
- (void)setThumbnailImageURL:(id)arg1;
- (void)set_thumbnailImage:(id)arg1;
- (bool)supportsCopying;
- (bool)supportsSerialization;
- (id)thumbnailImage;
- (id)thumbnailImageURL;

@end
