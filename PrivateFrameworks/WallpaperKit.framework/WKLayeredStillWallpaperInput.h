
@interface WKLayeredStillWallpaperInput : WKLayeredThumbnailWallpaperInput {
    NSURL * _backgroundFullSizeImageURL;
    NSURL * _floatingFullSizeImageURL;
    NSURL * _foregroundFullSizeImageURL;
}

@property (nonatomic, readonly, copy) NSURL *backgroundFullSizeImageURL;
@property (nonatomic, readonly, copy) NSURL *floatingFullSizeImageURL;
@property (nonatomic, readonly, copy) NSURL *foregroundFullSizeImageURL;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)backgroundFullSizeImageURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id /* block */)descriptionBuilderBlock;
- (id)floatingFullSizeImageURL;
- (id)foregroundFullSizeImageURL;
- (unsigned long long)hash;
- (id)initWithBackgroundThumbnailImageURL:(id)arg1 foregroundThumbnailImageURL:(id)arg2 floatingThumbnailImageURL:(id)arg3 backgroundFullSizeImageURL:(id)arg4 foregroundFullSizeImageURL:(id)arg5 floatingFullSizeImageURL:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)wk_descriptionBuilder;

@end
