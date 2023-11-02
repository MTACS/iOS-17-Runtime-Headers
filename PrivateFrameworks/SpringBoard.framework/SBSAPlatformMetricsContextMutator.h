
@interface SBSAPlatformMetricsContextMutator : NSObject {
    SBSAPlatformMetricsContext * _mutatable;
}

@property (nonatomic) double customLayoutOvalCornerRadius;
@property (nonatomic) double customLayoutSquareCornerRadius;
@property (nonatomic) double customLayoutSquareLargeCornerRadius;
@property (nonatomic) double maximumCornerRadius;
@property (nonatomic) double minimumEdgePadding;
@property (nonatomic, readonly) SBSAPlatformMetricsContext *mutatable;

- (void).cxx_destruct;
- (double)customLayoutOvalCornerRadius;
- (double)customLayoutSquareCornerRadius;
- (double)customLayoutSquareLargeCornerRadius;
- (id)description;
- (id)initWithPlatformMetricsContext:(id)arg1;
- (double)maximumCornerRadius;
- (double)minimumEdgePadding;
- (id)mutatable;
- (void)setCustomLayoutOvalCornerRadius:(double)arg1;
- (void)setCustomLayoutSquareCornerRadius:(double)arg1;
- (void)setCustomLayoutSquareLargeCornerRadius:(double)arg1;
- (void)setMaximumCornerRadius:(double)arg1;
- (void)setMinimumEdgePadding:(double)arg1;

@end
