
@interface WKLayeredThumbnailWallpaperInput : NSObject <NAIdentifiable, NSCopying, WKDescribable> {
    NSURL * _backgroundThumbnailImageURL;
    NSURL * _floatingThumbnailImageURL;
    NSURL * _foregroundThumbnailImageURL;
}

@property (nonatomic, readonly, copy) NSURL *backgroundThumbnailImageURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) id /* block */ descriptionBuilderBlock;
@property (nonatomic, readonly, copy) NSURL *floatingThumbnailImageURL;
@property (nonatomic, readonly, copy) NSURL *foregroundThumbnailImageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NADescriptionBuilder *wk_descriptionBuilder;

+ (id)na_identity;
+ (id)new;

- (void).cxx_destruct;
- (id)backgroundThumbnailImageURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id /* block */)descriptionBuilderBlock;
- (id)floatingThumbnailImageURL;
- (id)foregroundThumbnailImageURL;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBackgroundThumbnailImageURL:(id)arg1 foregroundThumbnailImageURL:(id)arg2 floatingThumbnailImageURL:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)wk_descriptionBuilder;

@end
