
@interface SFUnifiedBarMetrics : NSObject {
    double  _itemHeight;
    long long  _metricsCategory;
    double  _squishedInlineBarHeight;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) double cutoutBorderWidth;
@property (nonatomic, readonly) double defaultItemHeight;
@property (nonatomic, readonly) double itemCornerRadius;
@property (nonatomic, readonly) double itemHeight;
@property (nonatomic, readonly) double leadingTabIconInset;
@property (nonatomic, readonly) double maximumItemSpacing;
@property (nonatomic) long long metricsCategory;
@property (nonatomic, readonly) double minimumItemSpacing;
@property (nonatomic, readonly) double squishedInlineBarHeight;
@property (nonatomic, readonly) double tabCloseButtonWidth;

+ (double)defaultItemHeight;
+ (double)defaultSquishedContentSpacing;
+ (double)minimumSquishScale;
+ (double)separatorWidth;
+ (double)squishedInlineBarHeight;
+ (double)transitioningItemScale;

- (void).cxx_destruct;
- (double)_scaledValueForValue:(double)arg1;
- (void)_updateMetrics;
- (bool)_updateWithContentSizeCategory:(id)arg1 legibilityWeight:(long long)arg2;
- (double)cutoutBorderWidth;
- (double)defaultItemHeight;
- (id)initWithTraitCollection:(id)arg1;
- (double)itemCornerRadius;
- (double)itemHeight;
- (double)leadingTabIconInset;
- (double)maximumItemSpacing;
- (long long)metricsCategory;
- (double)minimumItemSpacing;
- (void)setMetricsCategory:(long long)arg1;
- (double)squishedInlineBarHeight;
- (double)tabCloseButtonWidth;
- (bool)updateWithTraitCollection:(id)arg1;

@end
