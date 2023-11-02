
@interface SeymourUI.SessionStackedLabelView : UIView {
    void primaryLabel;
    void secondaryLabel;
    void stackView;
}

@property (nonatomic, readonly) NSString *noDataIndicator;
@property (nonatomic, readonly) UILabel *primaryLabel;
@property (nonatomic, readonly) UILabel *secondaryLabel;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)noDataIndicator;
- (id)primaryLabel;
- (id)secondaryLabel;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
