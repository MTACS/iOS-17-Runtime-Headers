
@interface GameCenterUI.EmptyStateView : UIScrollView {
    void $__lazy_storage_$_focusGuide;
    void button;
    void buttonActionBlock;
    void disabled;
    void imageType;
    void imageView;
    void primaryLabel;
    void secondaryLabel;
    void wordmarkView;
}

@property (nonatomic, copy) id /* block */ buttonActionBlock;

+ (id)addAdditionalFriendsEmptyStateView;
+ (id)addFriendsEmptyStateView;
+ (id)addFriendsEmptyStateViewTVOS;

- (void).cxx_destruct;
- (id /* block */)buttonActionBlock;
- (void)didTapButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct JUMeasurements { double x1; double x2; double x3; double x4; })measurementsWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;
- (void)setButtonActionBlock:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
