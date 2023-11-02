
@interface CoreAudioKit.CAAUEQViewBase : UIView {
    void $__lazy_storage_$_graphView;
    void $__lazy_storage_$_headerView;
    void permanentGraphConstraints;
    void permanentHeaderConstraints;
    void temporaryConstraints;
    void viewSetup;
}

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)tintColorDidChange;

@end
