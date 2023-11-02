
@interface _MKPlaceInlineMapContentView : _MKUIViewControllerClickableRootView {
    MKViewWithHairline * _hairlineView;
    UIImageView * _mapImageView;
    MKMapItemView * _mapItemView;
    UIView * _mapView;
    _MKUILabel * _titleLabel;
    NSLayoutConstraint * _titleToBottomConstraint;
    NSLayoutConstraint * _topToTitleConstraint;
}

@property (getter=isBottomHairlineHidden, nonatomic) bool bottomHairlineHidden;
@property (nonatomic, retain) UIImage *map;
@property (nonatomic, retain) MKMapItemView *mapItemView;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (bool)hasTitle;
- (void)infoCardThemeChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 hideLookAroundView:(bool)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isBottomHairlineHidden;
- (id)map;
- (id)mapItemView;
- (double)mapViewHeight;
- (void)setBottomHairlineHidden:(bool)arg1;
- (void)setMap:(id)arg1;
- (void)setMapItemView:(id)arg1;
- (double)titleHeight;
- (bool)useImageView;

@end
