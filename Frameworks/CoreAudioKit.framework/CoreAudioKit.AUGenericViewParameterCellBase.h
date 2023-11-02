
@interface CoreAudioKit.AUGenericViewParameterCellBase : UICollectionViewCell {
    void owner;
    void param;
    void parameterName;
    void parameterWidthConstraint;
    void valueLabel;
    void valueStackWidthConstraint;
}

@property (nonatomic) UILabel *parameterName;
@property (nonatomic) NSLayoutConstraint *parameterWidthConstraint;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) UILabel *valueLabel;
@property (nonatomic) NSLayoutConstraint *valueStackWidthConstraint;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)parameterName;
- (id)parameterWidthConstraint;
- (void)setParameterName:(id)arg1;
- (void)setParameterWidthConstraint:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (void)setValueStackWidthConstraint:(id)arg1;
- (id)tintColor;
- (id)valueLabel;
- (id)valueStackWidthConstraint;

@end
