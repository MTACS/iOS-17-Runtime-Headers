
@interface PXStoryExportAspectRatio : NSObject <NSCopying> {
    PXStoryExportOrientation * _orientation;
    double  _ratio;
    long long  _type;
}

@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) PXStoryExportOrientation *orientation;
@property (nonatomic, readonly) double ratio;
@property (nonatomic, readonly) long long type;

+ (id)defaultAspectRatioWithFullSizePlayerAspect:(id)arg1 orientation:(id)arg2;
+ (id)pickableAspectRatiosForOrientation:(id)arg1 fullSizePlayerAspect:(id)arg2;
+ (void)setDefaultAspectRatio:(id)arg1;
+ (id)standardAspectRatioForSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)standardAspects;

- (void).cxx_destruct;
- (id)_userDefaultIdentifier;
- (id)adjustedForOrientation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithAspectType:(long long)arg1;
- (id)initWithAspectType:(long long)arg1 ratio:(double)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedTitle;
- (id)orientation;
- (double)ratio;
- (struct CGSize { double x1; double x2; })sizeWithMinDimension:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeWithMinDimension:(double)arg1 orientation:(id)arg2;
- (long long)type;

@end
