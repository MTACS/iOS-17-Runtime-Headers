
@interface SeymourUI.TVFilterOptionsCell : SeymourUI.TVFloatingContentCell {
    void accessoryImageView;
    void delegate;
    void isDisclosureCell;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemInfo;
    void layout;
    void shouldBreadCrumb;
    void subtitleLabel;
    void textStackView;
    void titleLabel;
}

- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;

@end
