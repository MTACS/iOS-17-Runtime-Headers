
@interface _UIUCBKBSelectionBackground : UIView {
    UIView * _backgroundProvidingView;
    bool  _showButtonShape;
}

@property (nonatomic) bool showButtonShape;

- (void).cxx_destruct;
- (void)_updateBackgroundProvidingView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setShowButtonShape:(bool)arg1;
- (bool)showButtonShape;

@end
