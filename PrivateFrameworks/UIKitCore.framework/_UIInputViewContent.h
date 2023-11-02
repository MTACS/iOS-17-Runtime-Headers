
@interface _UIInputViewContent : UIView {
    double  _contentHeight;
    double  _contentWidth;
    UIInputView * _inputView;
    unsigned long long  _unclippableCorners;
}

@property (nonatomic) unsigned long long _unclippableCorners;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_contentSize;
- (bool)_isToolbar;
- (void)_setToolbarBackgroundImage:(id)arg1;
- (void)_setToolbarBackgroundViewWithImage:(id)arg1;
- (struct CGSize { double x1; double x2; })_sizeFittingContentViews;
- (unsigned long long)_unclippableCorners;
- (void)_updateCornerClipping;
- (void)addSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inputView:(id)arg2;
- (void)set_unclippableCorners:(unsigned long long)arg1;

@end
