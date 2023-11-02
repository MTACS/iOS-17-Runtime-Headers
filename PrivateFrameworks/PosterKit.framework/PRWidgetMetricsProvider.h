
@interface PRWidgetMetricsProvider : NSObject

+ (id)sharedInstance;

- (id)_complicationCircularMetrics;
- (long long)_complicationFontStyle;
- (id)_complicationInlineMetrics;
- (id)_complicationRectangularMetrics;
- (struct CHSEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsets;
- (double)_insetScreenWidth;
- (double)_scaleFactor;
- (struct CGSize { double x1; double x2; })_sizeForItemWithGridWidth:(long long)arg1 height:(long long)arg2;
- (id)_systemSmallMetrics;
- (id)_transparentMediumMetrics;
- (id)lockScreenWidgetMetricsSpecifications;
- (id)previewMetricsSpecificationForBundleIdentifier:(id)arg1;
- (id)previewMetricsSpecificationForDeviceContext:(id)arg1 displayContext:(id)arg2 bundleIdentifier:(id)arg3;
- (id)systemMetricsForWidget:(id)arg1;

@end
