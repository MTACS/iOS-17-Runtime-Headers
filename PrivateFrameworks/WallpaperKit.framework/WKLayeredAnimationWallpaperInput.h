
@interface WKLayeredAnimationWallpaperInput : NSObject <NSCopying> {
    NSURL * _backgroundAnimationFileURL;
    NSURL * _floatingAnimationFileURL;
    NSURL * _foregroundAnimationFileURL;
}

@property (nonatomic, readonly, copy) NSURL *backgroundAnimationFileURL;
@property (nonatomic, readonly, copy) NSURL *floatingAnimationFileURL;
@property (nonatomic, readonly, copy) NSURL *foregroundAnimationFileURL;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)backgroundAnimationFileURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id /* block */)descriptionBuilderBlock;
- (id)floatingAnimationFileURL;
- (id)foregroundAnimationFileURL;
- (unsigned long long)hash;
- (id)initWithBackgroundAnimationFileURL:(id)arg1 foregroundAnimationFileURL:(id)arg2 floatingAnimationFileURL:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)wk_descriptionBuilder;

@end
