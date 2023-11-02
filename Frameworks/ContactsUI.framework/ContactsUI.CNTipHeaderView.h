
@interface ContactsUI.CNTipHeaderView : UIView {
    void bottomSeparatorView;
    void displaysBottomSeparator;
    void hostingView;
    void separatorEdgeInset;
}

@property (nonatomic) bool displaysBottomSeparator;
@property (nonatomic, retain) UIView *hostingView;

+ (double)verticalInsetTotal;

- (void).cxx_destruct;
- (bool)displaysBottomSeparator;
- (id)hostingView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 separatorInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)setDisplaysBottomSeparator:(bool)arg1;
- (void)setHostingView:(id)arg1;

@end
