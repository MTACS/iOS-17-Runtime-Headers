
@interface MediaControlsSeparatorView : UIView {
    UIView * _separatorView;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic, retain) MTVisualStylingProvider *visualStylingProvider;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1;
- (id)visualStylingProvider;

@end
