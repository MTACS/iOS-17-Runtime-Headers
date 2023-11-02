
@interface ICPaperStyleHeaderView : UICollectionReusableView {
    UILabel * _label;
    NSLayoutConstraint * _labelConstraintBottom;
    NSLayoutConstraint * _labelConstraintLeading;
    NSLayoutConstraint * _labelConstraintTop;
    NSLayoutConstraint * _labelConstraintTrailing;
}

@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) NSLayoutConstraint *labelConstraintBottom;
@property (nonatomic, retain) NSLayoutConstraint *labelConstraintLeading;
@property (nonatomic, retain) NSLayoutConstraint *labelConstraintTop;
@property (nonatomic, retain) NSLayoutConstraint *labelConstraintTrailing;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } titleInsets;

- (void).cxx_destruct;
- (void)contentSizeCategoryDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (id)labelConstraintBottom;
- (id)labelConstraintLeading;
- (id)labelConstraintTop;
- (id)labelConstraintTrailing;
- (void)setLabel:(id)arg1;
- (void)setLabelConstraintBottom:(id)arg1;
- (void)setLabelConstraintLeading:(id)arg1;
- (void)setLabelConstraintTop:(id)arg1;
- (void)setLabelConstraintTrailing:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)title;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })titleInsets;

@end
