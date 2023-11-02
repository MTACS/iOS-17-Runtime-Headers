
@interface JFXEffectAssetAttributes : NSObject <NSCopying> {
    long long  _aspectRatio;
    long long  _colorDynamicRange;
    long long  _contentType;
    long long  _quality;
    long long  _usageMode;
}

@property (nonatomic) long long aspectRatio;
@property (nonatomic) long long colorDynamicRange;
@property (nonatomic) long long contentType;
@property (nonatomic) long long quality;
@property (nonatomic) long long usageMode;

- (long long)aspectRatio;
- (long long)colorDynamicRange;
- (long long)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (bool)isMatchingFilterAttributes:(id)arg1;
- (long long)quality;
- (void)setAspectRatio:(long long)arg1;
- (void)setColorDynamicRange:(long long)arg1;
- (void)setContentType:(long long)arg1;
- (void)setQuality:(long long)arg1;
- (void)setUsageMode:(long long)arg1;
- (long long)usageMode;

@end
