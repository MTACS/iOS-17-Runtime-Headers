
@interface SBSAPlatformMetricsContext : NSObject <NSCopying, SBSABlockMutating> {
    NSMutableDictionary * _metricsDictionary;
    double  customLayoutOvalCornerRadius;
    double  customLayoutSquareCornerRadius;
    double  customLayoutSquareLargeCornerRadius;
    double  maximumCornerRadius;
    double  minimumEdgePadding;
}

@property (setter=_setCustomLayoutOvalCornerRadius:, nonatomic) double customLayoutOvalCornerRadius;
@property (setter=_setCustomLayoutSquareCornerRadius:, nonatomic) double customLayoutSquareCornerRadius;
@property (setter=_setCustomLayoutSquareLargeCornerRadius:, nonatomic) double customLayoutSquareLargeCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setMaximumCornerRadius:, nonatomic) double maximumCornerRadius;
@property (setter=_setMinimumEdgePadding:, nonatomic) double minimumEdgePadding;
@property (readonly) Class superclass;

+ (id)instanceWithBlock:(id /* block */)arg1;
+ (Class)mutatorClass;

- (void).cxx_destruct;
- (void)_setCustomLayoutOvalCornerRadius:(double)arg1;
- (void)_setCustomLayoutSquareCornerRadius:(double)arg1;
- (void)_setCustomLayoutSquareLargeCornerRadius:(double)arg1;
- (void)_setMaximumCornerRadius:(double)arg1;
- (void)_setMinimumEdgePadding:(double)arg1;
- (id)copyBySettingCustomLayoutOvalCornerRadius:(double)arg1;
- (id)copyBySettingCustomLayoutSquareCornerRadius:(double)arg1;
- (id)copyBySettingCustomLayoutSquareLargeCornerRadius:(double)arg1;
- (id)copyBySettingMaximumCornerRadius:(double)arg1;
- (id)copyBySettingMinimumEdgePadding:(double)arg1;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)customLayoutOvalCornerRadius;
- (double)customLayoutSquareCornerRadius;
- (double)customLayoutSquareLargeCornerRadius;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPlatformMetricsContext:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)maximumCornerRadius;
- (double)minimumEdgePadding;

@end
