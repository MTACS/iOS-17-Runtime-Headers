
@interface _UISearchBarScopeContainerView : UIView {
    _UISearchBarScopeContainerLayout * _layout;
}

@property (nonatomic, retain) _UISearchBarScopeContainerLayout *layout;

- (void).cxx_destruct;
- (bool)_isKnownUISearchBarComponentContainer;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layout;
- (void)layoutSubviews;
- (void)setLayout:(id)arg1;
- (void)setNeedsLayout;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
