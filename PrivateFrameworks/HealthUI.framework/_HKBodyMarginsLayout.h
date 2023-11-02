
@interface _HKBodyMarginsLayout : UIView {
    UIView * _bodyView;
    UIView * _leftMarginView;
    UIView * _rightMarginView;
}

@property (nonatomic, retain) UIView *bodyView;
@property (nonatomic, retain) UIView *leftMarginView;
@property (nonatomic, retain) UIView *rightMarginView;

- (void).cxx_destruct;
- (void)_invalidateLayout;
- (double)_maximumViewHeight;
- (double)_totalViewWidth;
- (id)bodyView;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)leftMarginView;
- (id)rightMarginView;
- (void)setBodyView:(id)arg1;
- (void)setLeftMarginView:(id)arg1;
- (void)setRightMarginView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
