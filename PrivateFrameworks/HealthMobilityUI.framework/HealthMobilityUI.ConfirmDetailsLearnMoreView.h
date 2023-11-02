
@interface HealthMobilityUI.ConfirmDetailsLearnMoreView : UIView {
    void $__lazy_storage_$_detailLabel;
    void $__lazy_storage_$_learnMoreLabel;
    void $__lazy_storage_$_tapGestureRecognizer;
    void $__lazy_storage_$_titleLabel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  configuration;
    void delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)learnMoreTapped;
- (void)tintColorDidChange;

@end
