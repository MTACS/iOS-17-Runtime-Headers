
@interface SBUIActionKeylineView : UIView {
    double  _height;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (nonatomic) double height;

- (void).cxx_destruct;
- (void)_invalidateVisualStyling;
- (void)_updateCornerMask;
- (void)_updateVisualStylingIfNecessary;
- (double)height;
- (double)heightInPixels;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHeight:(double)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
