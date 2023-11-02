
@interface HKDisplayTypeContextVerticalCollectionViewCell : UICollectionViewCell {
    UIStackView * _contentStackView;
    HKDisplayTypeContextItem * _contextItem;
    HKUIMetricColors * _currentMetricColors;
    <HKDisplayTypeContextVerticalCollectionViewCellDelegate> * _delegate;
    UIButton * _infoButton;
    NSLayoutConstraint * _minTitleWidthConstraint;
    long long  _mode;
    UILabel * _titleLabel;
    UILabel * _valueAndUnitLabel;
}

@property (nonatomic, retain) UIStackView *contentStackView;
@property (nonatomic, retain) HKDisplayTypeContextItem *contextItem;
@property (nonatomic, retain) HKUIMetricColors *currentMetricColors;
@property (nonatomic) <HKDisplayTypeContextVerticalCollectionViewCellDelegate> *delegate;
@property (nonatomic, retain) UIButton *infoButton;
@property (nonatomic, retain) NSLayoutConstraint *minTitleWidthConstraint;
@property (nonatomic) long long mode;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *valueAndUnitLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)_attributedTitleWithAccessoryForContextItem:(id)arg1 selected:(bool)arg2;
- (id)_attributedValueAndUnitForContextItem:(id)arg1 selected:(bool)arg2;
- (id)_backgroundViewWithColor:(id)arg1 userInteractive:(bool)arg2;
- (void)_configureForContextItem:(id)arg1;
- (void)_configureForTraitCollection:(id)arg1;
- (id)_generateInfoButton;
- (id)_labelWithFont:(id)arg1 allowsMultiline:(bool)arg2 supportsDyanmicType:(bool)arg3 layoutPriority:(float)arg4;
- (void)_setLabel:(id)arg1 allowsMultiline:(bool)arg2 textAlignment:(long long)arg3 layoutPriority:(float)arg4;
- (id)_stackViewWithArrangedSubviews:(id)arg1;
- (id)_titleAttributes;
- (id)_unitStringForContextItem:(id)arg1 isUnitStringIncludedInValueString:(bool)arg2;
- (void)_updateLabelsMultilineAndAlignmentForContentSizeCategoryAndUIDirection;
- (void)_updateUI:(bool)arg1;
- (long long)_widthDesignationFromTraitCollection:(id)arg1;
- (id)contentStackView;
- (id)contextItem;
- (id)currentMetricColors;
- (id)delegate;
- (id)infoButton;
- (void)infoButtonTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)minTitleWidthConstraint;
- (long long)mode;
- (void)prepareForReuse;
- (void)setContentStackView:(id)arg1;
- (void)setContextItem:(id)arg1;
- (void)setCurrentMetricColors:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInfoButton:(id)arg1;
- (void)setMinTitleWidthConstraint:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setValueAndUnitLabel:(id)arg1;
- (id)titleLabel;
- (void)updateWithContextItem:(id)arg1 mode:(long long)arg2;
- (id)valueAndUnitLabel;

@end
