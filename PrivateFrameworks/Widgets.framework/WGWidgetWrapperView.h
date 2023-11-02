
@interface WGWidgetWrapperView : UIView {
    UIView * _contentView;
    double  _overrideIntrinsicContentHeight;
    WGWidgetPlatterView * _platterView;
    double  _topMarginForLayout;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) double overrideIntrinsicContentHeight;
@property (nonatomic, retain) WGWidgetPlatterView *platterView;
@property (nonatomic) double topMarginForLayout;

- (void).cxx_destruct;
- (id)contentView;
- (id)initWithPlatterView:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (double)overrideIntrinsicContentHeight;
- (id)platterView;
- (void)setOverrideIntrinsicContentHeight:(double)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setTopMarginForLayout:(double)arg1;
- (double)topMarginForLayout;

@end
