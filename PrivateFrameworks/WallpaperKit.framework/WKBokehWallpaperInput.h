
@interface WKBokehWallpaperInput : NSObject <NSCopying> {
    NSArray * _backgroundColors;
    NSArray * _bubbleColors;
    unsigned long long  _bubbleCount;
    double  _bubbleScale;
    double  _parallaxMultiplier;
    unsigned long long  _thumbnailSeed;
}

@property (nonatomic, readonly, copy) NSArray *backgroundColors;
@property (nonatomic, readonly, copy) NSArray *bubbleColors;
@property (nonatomic, readonly) unsigned long long bubbleCount;
@property (nonatomic, readonly) double bubbleScale;
@property (nonatomic, readonly) double parallaxMultiplier;
@property (nonatomic, readonly) unsigned long long thumbnailSeed;

+ (id)na_identity;
+ (id)new;

- (void).cxx_destruct;
- (id)backgroundColors;
- (id)bubbleColors;
- (unsigned long long)bubbleCount;
- (double)bubbleScale;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id /* block */)descriptionBuilderBlock;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBackgroundColors:(id)arg1 bubbleColors:(id)arg2 bubbleCount:(unsigned long long)arg3 bubbleScale:(double)arg4 parallaxMultiplier:(double)arg5 thumbnailSeed:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (double)parallaxMultiplier;
- (unsigned long long)thumbnailSeed;
- (id)wk_descriptionBuilder;

@end
