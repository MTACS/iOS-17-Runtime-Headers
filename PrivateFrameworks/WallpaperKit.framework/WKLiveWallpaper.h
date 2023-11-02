
@interface WKLiveWallpaper : WKStillWallpaper <WKFileBasedWallpaper> {
    double  _stillTimeInVideo;
    NSURL * _videoAssetURL;
}

@property (nonatomic, readonly) unsigned long long backingType;
@property (nonatomic, readonly, copy) NSURL *fullsizeImageURL;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long representedType;
@property (nonatomic) double stillTimeInVideo;
@property (nonatomic, readonly) bool supportsCopying;
@property (nonatomic, readonly) bool supportsSerialization;
@property (nonatomic, readonly) UIImage *thumbnailImage;
@property (nonatomic, readonly, copy) NSURL *thumbnailImageURL;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, copy) NSURL *videoAssetURL;

+ (id)na_identity;

- (void).cxx_destruct;
- (bool)copyWallpaperContentsToDestinationDirectoryURL:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)descriptionBuilderBlock;
- (unsigned long long)hash;
- (id)initWithIdentifier:(long long)arg1 name:(id)arg2 type:(unsigned long long)arg3 thumbnailImageURL:(id)arg4 fullsizeImageURL:(id)arg5 videoAssetURL:(id)arg6 stillTimeInVideo:(double)arg7;
- (bool)isEqual:(id)arg1;
- (id)propertyListRepresentation;
- (void)setStillTimeInVideo:(double)arg1;
- (void)setVideoAssetURL:(id)arg1;
- (double)stillTimeInVideo;
- (id)videoAssetURL;

@end
