
@interface GameCenterUI.NavigationDoubleHeaderView : UIView {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_layout;
    void subtitleLabel;
    void titleLabel;
}

@property (nonatomic, copy) NSString *subtitleText;
@property (nonatomic, copy) NSString *titleText;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleText;
- (id)titleText;

@end
