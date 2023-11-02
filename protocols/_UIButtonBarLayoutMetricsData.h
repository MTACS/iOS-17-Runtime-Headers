
@protocol _UIButtonBarLayoutMetricsData <NSObject>

@required

- (_UIButtonBarLayoutMetrics *)_upcastIfReadOnly;
- (bool)allowsViewWrappers;
- (NSLayoutDimension *)flexibleSpaceGuide;
- (NSLayoutDimension *)groupSizeGuide;
- (NSLayoutDimension *)minimumSpaceGuide;
- (NSLayoutDimension *)verticalSizeGuide;

@end
