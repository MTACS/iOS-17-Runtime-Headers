
@interface HUTitleValueCell : HUIconCell {
    bool  _allowCopyValueToPasteboard;
    bool  _hideTitle;
    bool  _hideValue;
    UIStackView * _labelsStackView;
    NSArray * _stackViewConstraints;
    bool  _titleColorFollowsTintColor;
    UIFont * _titleFont;
    UILabel * _titleLabel;
    NSString * _titleText;
    bool  _useVerticalLayoutOnly;
    bool  _valueColorFollowsTintColor;
    UIFont * _valueFont;
    UILabel * _valueLabel;
    NSString * _valueText;
}

@property (nonatomic) bool allowCopyValueToPasteboard;
@property (nonatomic) bool hideTitle;
@property (nonatomic) bool hideValue;
@property (nonatomic, readonly) UIStackView *labelsStackView;
@property (nonatomic, retain) NSArray *stackViewConstraints;
@property (nonatomic) bool titleColorFollowsTintColor;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, retain) NSString *titleText;
@property (nonatomic) bool useVerticalLayoutOnly;
@property (nonatomic) bool valueColorFollowsTintColor;
@property (nonatomic, retain) UIFont *valueFont;
@property (nonatomic, readonly) UILabel *valueLabel;
@property (nonatomic, retain) NSString *valueText;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_addTitleLabel;
- (void)_addValueLabel;
- (void)_ensureCorrectHeaderViewOrientation;
- (void)_updateTitle;
- (void)_updateValue;
- (bool)allowCopyValueToPasteboard;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (bool)hideTitle;
- (bool)hideValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)labelSpacing;
- (id)labelsStackView;
- (void)layoutMarginsDidChange;
- (void)prepareForReuse;
- (void)setAllowCopyValueToPasteboard:(bool)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setHideTitle:(bool)arg1;
- (void)setHideValue:(bool)arg1;
- (void)setStackViewConstraints:(id)arg1;
- (void)setTitleColorFollowsTintColor:(bool)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setUseVerticalLayoutOnly:(bool)arg1;
- (void)setValueColorFollowsTintColor:(bool)arg1;
- (void)setValueFont:(id)arg1;
- (void)setValueText:(id)arg1;
- (id)stackViewConstraints;
- (void)tintColorDidChange;
- (bool)titleColorFollowsTintColor;
- (id)titleFont;
- (id)titleLabel;
- (id)titleText;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;
- (bool)useVerticalLayoutOnly;
- (bool)valueColorFollowsTintColor;
- (id)valueFont;
- (id)valueLabel;
- (id)valueText;

@end
