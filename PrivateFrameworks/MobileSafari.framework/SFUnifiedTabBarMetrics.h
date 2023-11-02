
@interface SFUnifiedTabBarMetrics : SFUnifiedBarMetrics {
    double  _maximumActiveItemWidth;
    NSString * _maximumActiveItemWidthDefaultsKey;
    unsigned long long  _sizeClass;
}

@property (nonatomic, readonly) double insetToRevealNextItem;
@property (nonatomic, readonly) double maximumActiveItemWidth;
@property (nonatomic, readonly) double minimumActiveItemWidth;
@property (nonatomic, readonly) double minimumActiveItemWidthRatio;
@property (nonatomic, readonly) double minimumInactiveItemWidth;
@property (nonatomic) unsigned long long sizeClass;

+ (id)_maximumActiveItemWidthDefaultsKeyForSizeClass:(unsigned long long)arg1;
+ (double)_maximumActiveItemWidthForSizeClass:(unsigned long long)arg1;
+ (double)minimumActiveItemWidthForSizeClass:(unsigned long long)arg1;
+ (double)minimumInactiveItemWidthForSizeClass:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_sizeClassDidChange;
- (void)dealloc;
- (id)initWithTraitCollection:(id)arg1;
- (double)insetToRevealNextItem;
- (double)maximumActiveItemWidth;
- (double)maximumItemSpacing;
- (double)minimumActiveItemWidth;
- (double)minimumActiveItemWidthRatio;
- (double)minimumInactiveItemWidth;
- (double)minimumItemSpacing;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setSizeClass:(unsigned long long)arg1;
- (unsigned long long)sizeClass;

@end
