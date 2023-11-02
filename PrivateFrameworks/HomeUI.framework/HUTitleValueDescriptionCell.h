
@interface HUTitleValueDescriptionCell : HUTitleDescriptionCell {
    bool  _hideValue;
    bool  _valueColorFollowsTintColor;
    UIFont * _valueFont;
    UILabel * _valueLabel;
    NSLayoutConstraint * _valueLabelWidthConstraint;
    NSString * _valueText;
}

@property (nonatomic) bool hideValue;
@property (nonatomic) bool valueColorFollowsTintColor;
@property (nonatomic, retain) UIFont *valueFont;
@property (nonatomic, retain) UILabel *valueLabel;
@property (nonatomic, retain) NSLayoutConstraint *valueLabelWidthConstraint;
@property (nonatomic, retain) NSString *valueText;

- (void).cxx_destruct;
- (void)_updateValue;
- (void)_updateValueHidden;
- (void)_updateValueWidthConstraintConstant;
- (bool)hideValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setHideValue:(bool)arg1;
- (void)setValueColorFollowsTintColor:(bool)arg1;
- (void)setValueFont:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (void)setValueLabelWidthConstraint:(id)arg1;
- (void)setValueText:(id)arg1;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;
- (bool)valueColorFollowsTintColor;
- (id)valueFont;
- (id)valueLabel;
- (id)valueLabelWidthConstraint;
- (id)valueText;

@end
