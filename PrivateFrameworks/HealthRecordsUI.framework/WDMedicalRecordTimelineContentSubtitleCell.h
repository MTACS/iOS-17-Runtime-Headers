
@interface WDMedicalRecordTimelineContentSubtitleCell : WDMedicalRecordGroupableCell <WDAttributedSubtitleDisplayable> {
    UIView * _disclosureChevronView;
    bool  _showDisclosureIndicator;
    UILabel * _subtitleLabel;
    NSString * _subtitleString;
    NSLayoutConstraint * _titleChevronConstraint;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titlePillConstraint;
    NSString * _titleString;
    bool  _useRegularFontForSubtitle;
}

@property (nonatomic, retain) UIView *disclosureChevronView;
@property (nonatomic) bool showDisclosureIndicator;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSLayoutConstraint *titleChevronConstraint;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *titlePillConstraint;
@property (nonatomic) bool useRegularFontForSubtitle;

- (void).cxx_destruct;
- (id)disclosureChevronView;
- (void)setAttributedSubtitleText:(id)arg1;
- (void)setDisclosureChevronView:(id)arg1;
- (void)setShowDisclosureIndicator:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleChevronConstraint:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitlePillConstraint:(id)arg1;
- (void)setUseRegularFontForSubtitle:(bool)arg1;
- (void)setupSubviews;
- (bool)showDisclosureIndicator;
- (id)subtitle;
- (id)subtitleLabel;
- (id)title;
- (id)titleChevronConstraint;
- (id)titleLabel;
- (id)titlePillConstraint;
- (bool)useRegularFontForSubtitle;

@end
