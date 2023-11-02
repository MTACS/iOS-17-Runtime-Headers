
@interface WDMedicalRecordTimelineValueCell : WDMedicalRecordGroupableCell <WDAttributedSubtitleDisplayable> {
    NSLayoutConstraint * _subtitleBottomConstraint;
    UILabel * _subtitleLabel;
    NSString * _subtitleString;
    NSLayoutConstraint * _titleHeightConstraint;
    UILabel * _titleLabel;
    NSString * _titleString;
    NSLayoutConstraint * _titleValueGapConstraint;
    NSLayoutConstraint * _titleWidthConstraint;
    NSString * _unitString;
    NSLayoutConstraint * _valueHeightConstraint;
    UILabel * _valueLabel;
    NSLayoutConstraint * _valueLeftAlignConstraint;
    NSLayoutConstraint * _valueRightAlignConstraint;
    NSString * _valueString;
    NSLayoutConstraint * _valueWidthConstraint;
}

@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) NSLayoutConstraint *subtitleBottomConstraint;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSLayoutConstraint *titleHeightConstraint;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *titleValueGapConstraint;
@property (nonatomic, retain) NSLayoutConstraint *titleWidthConstraint;
@property (nonatomic, retain) NSLayoutConstraint *valueHeightConstraint;
@property (nonatomic, retain) UILabel *valueLabel;
@property (nonatomic, retain) NSLayoutConstraint *valueLeftAlignConstraint;
@property (nonatomic, retain) NSLayoutConstraint *valueRightAlignConstraint;
@property (nonatomic, retain) NSLayoutConstraint *valueWidthConstraint;

+ (id)_titleLabelFont;
+ (double)_titleLabelTopToFirstBaseline;
+ (id)_unitLabelFontMultipleLines;
+ (id)_unitLabelFontSingleLine;
+ (id)_valueLabelFontMultipleLines;
+ (id)_valueLabelFontSingleLine;

- (void).cxx_destruct;
- (id)_generateValueDisplayAttributedString;
- (id)_generateValueDisplayAttributedStringWithValueFont:(id)arg1 unitFont:(id)arg2;
- (void)setAttributedSubtitleText:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleBottomConstraint:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleHeightConstraint:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleValueGapConstraint:(id)arg1;
- (void)setTitleWidthConstraint:(id)arg1;
- (void)setValue:(id)arg1 unit:(id)arg2;
- (void)setValueHeightConstraint:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (void)setValueLeftAlignConstraint:(id)arg1;
- (void)setValueRightAlignConstraint:(id)arg1;
- (void)setValueWidthConstraint:(id)arg1;
- (void)setupSubviews;
- (id)subtitle;
- (id)subtitleBottomConstraint;
- (id)subtitleLabel;
- (id)title;
- (id)titleHeightConstraint;
- (id)titleLabel;
- (id)titleValueGapConstraint;
- (id)titleWidthConstraint;
- (id)unit;
- (void)updateConstraints;
- (id)value;
- (id)valueHeightConstraint;
- (id)valueLabel;
- (id)valueLeftAlignConstraint;
- (id)valueRightAlignConstraint;
- (id)valueWidthConstraint;

@end
