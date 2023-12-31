
@interface HUTitleDescriptionContentView : UIView {
    UILabel * _descriptionLabel;
    <HFStringGenerator> * _descriptionText;
    UIColor * _descriptionTextColor;
    bool  _disabled;
    NSArray * _horizontalLabelConstraints;
    UIStackView * _stackView;
    UILabel * _titleLabel;
    <HFStringGenerator> * _titleText;
    UIColor * _titleTextColor;
    NSArray * _verticalLabelConstraints;
}

@property (nonatomic, retain) UIFont *descriptionFont;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (nonatomic, retain) <HFStringGenerator> *descriptionText;
@property (nonatomic, retain) UIColor *descriptionTextColor;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic, retain) NSArray *horizontalLabelConstraints;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, retain) <HFStringGenerator> *titleText;
@property (nonatomic, retain) UIColor *titleTextColor;
@property (nonatomic, retain) NSArray *verticalLabelConstraints;

- (void).cxx_destruct;
- (void)_setupDescriptionLabel;
- (void)_setupStackView;
- (void)_setupTitleLabel;
- (void)_updateLabel:(id)arg1 withContent:(id)arg2;
- (id)descriptionFont;
- (id)descriptionLabel;
- (id)descriptionText;
- (id)descriptionTextColor;
- (id)horizontalLabelConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisabled;
- (void)setDescriptionFont:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setDescriptionTextColor:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setHorizontalLabelConstraints:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setVerticalLabelConstraints:(id)arg1;
- (id)stackView;
- (id)titleFont;
- (id)titleLabel;
- (id)titleText;
- (id)titleTextColor;
- (id)verticalLabelConstraints;

@end
