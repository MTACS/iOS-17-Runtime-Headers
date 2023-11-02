
@interface MURollingLabelsView : UIView {
    void $__lazy_storage_$_currentLabelAndConstraints;
    void $__lazy_storage_$_labelAndConstraintsAnimatingIn;
    void $__lazy_storage_$_labelForBaselineAlignment;
    void transitioningContentSize;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;
@property (nonatomic, readonly) UIView *viewForFirstBaselineLayout;
@property (nonatomic, readonly) UIView *viewForLastBaselineLayout;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
