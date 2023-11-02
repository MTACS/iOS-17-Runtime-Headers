
@interface EKCustomTitleView : UIView {
    bool  _animating;
    UIImageView * _originalImage;
    UILabel * _originalTitle;
    bool  _showSubtitle;
    UILabel * _subTitle;
    UILabel * _title;
    UIImageView * _titleImage;
}

@property bool animating;
@property (retain) UIImageView *originalImage;
@property (retain) UILabel *originalTitle;
@property bool showSubtitle;
@property (retain) UILabel *subTitle;
@property (retain) UILabel *title;
@property (retain) UIImageView *titleImage;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_centerAndClipFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)animateInWithCompletionBlock:(id /* block */)arg1;
- (void)animateOutWithCompletionBlock:(id /* block */)arg1;
- (bool)animating;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 eventViewController:(id)arg3;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (id)originalImage;
- (id)originalTitle;
- (void)setAnimating:(bool)arg1;
- (void)setOriginalImage:(id)arg1;
- (void)setOriginalTitle:(id)arg1;
- (void)setShowSubtitle:(bool)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleImage:(id)arg1;
- (bool)showSubtitle;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subTitle;
- (id)title;
- (id)titleImage;

@end
