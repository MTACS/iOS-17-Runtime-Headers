
@interface _SiriUINavigationContentView : UIView {
    bool  _contentLayoutEnabled;
    UIView * _contentView;
}

@property (getter=isContentLayoutEnabled, nonatomic) bool contentLayoutEnabled;
@property (nonatomic, retain) UIView *contentView;

- (void).cxx_destruct;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isContentLayoutEnabled;
- (void)layoutSubviews;
- (void)setContentLayoutEnabled:(bool)arg1;
- (void)setContentView:(id)arg1;

@end
