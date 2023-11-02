
@interface HealthExperienceUI.MessageWithActionTileView : UIView {
    void $__lazy_storage_$_separator;
    void actionButton;
    void actionButtonTopConstraint;
    void bodyLabel;
    void bottomConstraint;
    void didTapActionButton;
    void separatorTopConstraint;
    void titleLabel;
}

@property (nonatomic, readonly) UIButton *actionButton;
@property (nonatomic, readonly) UILabel *bodyLabel;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)actionButton;
- (id)bodyLabel;
- (void)didTapAction:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)titleLabel;
- (void)updateConstraints;

@end
