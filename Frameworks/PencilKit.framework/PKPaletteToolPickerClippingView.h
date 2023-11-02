
@interface PKPaletteToolPickerClippingView : UIView <PKPaletteViewSizeScaling> {
    PKPaletteToolPickerBackgroundContentView * _backgroundContentView;
    PKPaletteToolPickerClippingEdgeView * _bottomEdgeView;
    NSLayoutConstraint * _bottomEdgeViewLeadingConstraint;
    NSLayoutConstraint * _bottomEdgeViewTrailingConstraint;
    PKPalettePassthroughView * _contentOverlayView;
    UIView * _contentView;
    NSArray * _edgeViewThicknessConstraints;
    NSArray * _edgeViews;
    bool  _isVerticalRight;
    long long  _layoutAxis;
    PKPaletteToolPickerClippingEdgeView * _leadingEdgeView;
    NSLayoutConstraint * _leadingEdgeViewTopConstraint;
    bool  _leadingOrTopEdgeVisible;
    double  _scalingFactor;
    PKPaletteToolPickerClippingEdgeView * _topEdgeView;
    NSLayoutConstraint * _topEdgeViewLeadingConstraint;
    NSLayoutConstraint * _topEdgeViewTrailingConstraint;
    PKPaletteToolPickerClippingEdgeView * _trailingEdgeView;
    NSLayoutConstraint * _trailingEdgeViewTopConstraint;
    bool  _trailingOrBottomEdgeVisible;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double scalingFactor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (double)scalingFactor;
- (void)setScalingFactor:(double)arg1;

@end
