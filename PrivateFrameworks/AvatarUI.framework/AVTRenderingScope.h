
@interface AVTRenderingScope : NSObject <NSSecureCoding> {
    NSString * _framingMode;
    unsigned long long  _options;
    AVTAvatarPose * _pose;
    long long  _renderingType;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    float  _sizeModifier;
}

@property (nonatomic, readonly) NSString *framingMode;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) AVTAvatarPose *pose;
@property (nonatomic, readonly) long long renderingType;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) float sizeModifier;

+ (double)extraMagnifyingFactorForFramingMode:(id)arg1;
+ (id)funCamCarouselThumbnailScope;
+ (id)gridThumbnailScope;
+ (id)largeThumbnailScope;
+ (id)listControllerThumbnailScope;
+ (unsigned long long)scopeOptionsForEnvironment:(id)arg1;
+ (id)simplePickerThumbnailScope;
+ (bool)supportsSecureCoding;
+ (double)thumbnailHeightRatioForFramingMode:(id)arg1;
+ (id)thumbnailScope;
+ (double)widthForRenderingType:(long long)arg1 options:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)adaptedFramingModeForObjectType:(long long)arg1;
- (unsigned long long)cacheableResourceAssociatedCost;
- (id)cacheableResourceAssociatedIdentifier;
- (id)copyApplyingPoseOverride:(id)arg1;
- (id)copyWithFramingMode:(id)arg1;
- (id)copyWithPose:(id)arg1;
- (id)copyWithSize:(struct CGSize { double x1; double x2; })arg1 framingMode:(id)arg2;
- (id)copyWithSizeModifier:(float)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)framingMode;
- (id)framingModeIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRenderingType:(long long)arg1 scale:(double)arg2;
- (id)initWithRenderingType:(long long)arg1 scale:(double)arg2 options:(unsigned long long)arg3;
- (id)initWithRenderingType:(long long)arg1 scale:(double)arg2 options:(unsigned long long)arg3 framingMode:(id)arg4 pose:(id)arg5;
- (id)initWithRenderingType:(long long)arg1 scale:(double)arg2 options:(unsigned long long)arg3 framingMode:(id)arg4 pose:(id)arg5 size:(struct CGSize { double x1; double x2; })arg6;
- (id)initWithRenderingType:(long long)arg1 scale:(double)arg2 options:(unsigned long long)arg3 framingMode:(id)arg4 pose:(id)arg5 sizeModifier:(float)arg6;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;
- (id)pose;
- (long long)renderingType;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;
- (float)sizeModifier;

@end
