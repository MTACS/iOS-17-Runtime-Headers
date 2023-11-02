
@interface PXLayoutMetricInterpolator : NSObject {
    double  __cachedMetric;
    NSValue * __cachedValue;
    NSMutableArray * __referenceValuesByMetrics;
    struct { 
        bool referenceValuesByMetricsOrder; 
    }  _needsUpdateFlags;
}

@property (setter=_setCachedMetric:, nonatomic) double _cachedMetric;
@property (setter=_setCachedValue:, nonatomic, retain) NSValue *_cachedValue;
@property (nonatomic, readonly) NSMutableArray *_referenceValuesByMetrics;

+ (id)_gridItemWidthInterpolatorWithGridEdgeInsetsInterpolator:(id)arg1;
+ (id)_sharedGridEdgeInsetsInterpolator;
+ (id)_sharedGridItemWidthInterpolator;
+ (id)albumsGridEdgeInsetsInterpolator;
+ (id)albumsGridItemWidthInterpolator;
+ (id)allLayoutMetricConfigurationSizes;
+ (struct CGSize { double x1; double x2; })bestItemSizeForAvailableWidth:(double)arg1 screenScale:(double)arg2 columns:(unsigned long long)arg3 bestSpacing:(double*)arg4 bestInset:(double*)arg5;
+ (id)gadgetColumnSpacingSpanDoubleSetAInterpolator;
+ (id)gadgetColumnSpacingSpanDoubleSetBInterpolator;
+ (id)gadgetColumnSpacingSpanSingleSetAInterpolator;
+ (id)gadgetColumnWidthSpanDoubleSetAInterpolator;
+ (id)gadgetColumnWidthSpanDoubleSetBInterpolator;
+ (id)gadgetColumnWidthSpanSingleSetAInterpolator;
+ (id)layoutMarginWidthInterpolator;
+ (id)legacyLayoutMarginWidthInterpolator;
+ (double)locketGadgetColumnWidthForLayoutWidth:(struct CGSize { double x1; double x2; })arg1 layoutMargins:(double)arg2 interSpacing:(double)arg3 isPhone:(bool)arg4;
+ (id)memoriesDetailsEdgeInsetsInterpolator;
+ (id)memoriesFeedInteritemSpacingInterpolator;
+ (id)memoriesFeedLandscapeEdgeInsetsInterpolator;
+ (id)memoriesFeedPortraitEdgeInsetsInterpolator;
+ (id)memoriesItemWidthInterpolator;
+ (id)photosDetailsEdgeInsetsInterpolator;
+ (unsigned long long)photosGridLayoutColumnsForWidth:(double)arg1;
+ (long long)photosGridSizeSubclassForScreenSize:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGSize { double x1; double x2; })zoomableGridLayoutSmallItemSizeForWidth:(double)arg1;

- (void).cxx_destruct;
- (double)_cachedMetric;
- (id)_cachedValue;
- (void)_getReferenceValueForMetric:(double)arg1 exactMatch:(id*)arg2 closestBeforeMatch:(id*)arg3 closestAfterMatch:(id*)arg4;
- (void)_invalidateReferenceValuesByMetricsOrder;
- (id)_referenceValuesByMetrics;
- (void)_setCachedMetric:(double)arg1;
- (void)_setCachedValue:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_updateReferenceValuesByMetricsOrderIfNeeded;
- (id)_valueForMetric:(double)arg1 fromInterpolationBetweenValue:(id)arg2 secondValue:(id)arg3;
- (id)description;
- (id)init;
- (void)setReferenceValue:(double)arg1 forMetric:(double)arg2;
- (double)valueForMetric:(double)arg1;

@end
