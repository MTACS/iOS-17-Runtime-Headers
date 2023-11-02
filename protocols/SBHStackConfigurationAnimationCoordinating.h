
@protocol SBHStackConfigurationAnimationCoordinating <NSObject>

@required

- (NSSet *)apertureBackgroundViews;
- (UIView *)configurationView;
- (void)configureWithStackLayoutMetrics:(struct SBHStackLayoutMetrics { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; double x4; double x5; double x6; })arg1;
- (NSSet *)fadingViews;
- (NSSet *)materialViews;
- (void)setScrollPosition:(unsigned long long)arg1;
- (SBIconView *)sourceIconView;
- (UIView *)visiblyActiveDataSourceSnapshotView;
- (NSSet *)widgetBackgroundViews;
- (UIView *)widgetContentContainerView;
- (UIView *)widgetStackMatchingBackgroundView;

@end
