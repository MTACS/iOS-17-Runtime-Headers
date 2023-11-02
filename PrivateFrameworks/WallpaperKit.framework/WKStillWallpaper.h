
@interface WKStillWallpaper : WKThumbnailWallpaper <WKFileBasedWallpaper> {
    NSURL * _fullsizeImageURL;
}

@property (nonatomic, readonly) unsigned long long backingType;
@property (nonatomic, copy) NSURL *fullsizeImageURL;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long representedType;
@property (nonatomic, readonly) double stillTimeInVideo;
@property (nonatomic, readonly) bool supportsCopying;
@property (nonatomic, readonly) bool supportsSerialization;
@property (nonatomic, readonly) UIImage *thumbnailImage;
@property (nonatomic, readonly, copy) NSURL *thumbnailImageURL;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) NSURL *videoAssetURL;

+ (id)na_identity;

- (void).cxx_destruct;
- (bool)copyWallpaperContentsToDestinationDirectoryURL:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)descriptionBuilderBlock;
- (id)fullsizeImageURL;
- (unsigned long long)hash;
- (id)initWithIdentifier:(long long)arg1 name:(id)arg2 type:(unsigned long long)arg3 thumbnailImageURL:(id)arg4 fullsizeImageURL:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)propertyListRepresentation;
- (void)setFullsizeImageURL:(id)arg1;
- (double)stillTimeInVideo;
- (id)videoAssetURL;

@end
